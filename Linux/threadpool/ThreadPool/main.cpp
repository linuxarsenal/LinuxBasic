#include <stdio.h>
#include <unistd.h>

#include "threadpool.h"

void TaskFunc1(int nData)
{
    printf("TaskFunc1, ThreadId: %p, nData:%d\n", pthread_self(), nData);

    sleep(1);
}

void TaskFunc2(int nData)
{
    printf("TaskFunc2, ThreadId: %p, nData:%d\n", pthread_self(), nData);

    sleep(1);
}

int main(int argc, char const *argv[])
{
    CThreadPool ThreadPool;

    for (size_t i = 0; i < 10; i++)
    {
        CTask Task;

        (0 == (i % 2)) ? Task.SetTask(i, TaskFunc1) : Task.SetTask(i, TaskFunc2);

        ThreadPool.TaskPush(Task);  // 放入任务队列
    }
    
    sleep(3);
    return 0;
}
