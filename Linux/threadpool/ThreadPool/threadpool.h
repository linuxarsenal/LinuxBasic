#include <iostream>
#include <cstdio>
#include <queue>
#include <stdlib.h>
#include <pthread.h>

using namespace std;

typedef void (*func)(int);

#define MAX_THREAD 5

/* 任务类 */
class CTask
{
public:
    CTask(){}
    ~CTask(){}

    void SetTask(int data, func handler) // 设置数据和处理接口
    {
        m_data = data;
        m_handler = handler;
    }
    
    void Do() // 执行任务
    {
        return m_handler(m_data);
    }

private:
    int  m_data;     // 数据
    func m_handler;  // 处理接口
};

/* 线程池类 */
class CThreadPool
{
public:
    CThreadPool(int thr_max = MAX_THREAD)
        :m_SumMax(thr_max)
    {
        m_bIsRun = true;
        pthread_mutex_init(&m_Mutex, NULL);
        pthread_cond_init(&m_Mond, NULL);

        /* 创建线程池 */
        for (int i = 0; i < m_SumMax; i++)
        {
            pthread_t tid;
            int ret = pthread_create(&tid, NULL, ThrPoolRun, this);
            if (ret != 0)
            {
                printf("thread create error\n");
            }
        }
    }
    ~CThreadPool()
    {
        pthread_mutex_destroy(&m_Mutex);
        pthread_cond_destroy(&m_Mond);
    }
    bool TaskPush(CTask &task)
    {
        pthread_mutex_lock(&m_Mutex);
        m_Queue.push(task);
        pthread_mutex_unlock(&m_Mutex);
        pthread_cond_signal(&m_Mond);
        return true;
    }

    static void *ThrPoolRun(void *arg)
    {
        CThreadPool *p = (CThreadPool*)arg;

        while (p->m_bIsRun)
        {
            pthread_mutex_lock(&p->m_Mutex);

            /* 等待任务到来 */
            while (p->m_Queue.empty())
            {
                pthread_cond_wait(&p->m_Mond, &p->m_Mutex);
            }

            /* 取出任务 */
            CTask Task;
            Task =p->m_Queue.front();
            p->m_Queue.pop();
            pthread_mutex_unlock(&p->m_Mutex);

            /* 处理任务 */
            Task.Do();
        }

        return NULL;
    }

private:
    bool            m_bIsRun;   // 线程池运行标志
    int             m_SumMax;   // 线程池中线程的数量
    queue<CTask>    m_Queue;    // 任务队列
    pthread_mutex_t m_Mutex;    // 保护队列互斥量
    pthread_cond_t  m_Mond;     // 同步条件变量
};