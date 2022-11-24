#include <iostream>
using namespace std;

/*
 *默认参数：如果某个参数被默认初始化了，其右边不能出现没有被默认初始化的参数
 * Error:
 * int average(double a=0.5, double b =1.1, double c)
 * {
 *   return (a+b+c)/2;
 * }
 */
int average(double a=0.5, double b =1.1, double c=2.1)
{
    return (a+b+c)/2;
}

int average(int a, int b)
{
    cout <<"average(int, int)" << endl;
    return (a+b)/2;
}

int average(double a, double b)
{
    cout <<"average(double, double)" << endl;
    return (a+b)/2;
}

int average(double a, double b, double c)
{
    cout <<"average(double,double,double)" << endl;
    return (a+b+c)/2;
}

int main(void)
{
    int a = 10, b = 11;
    average(a, b);
    cout <<"--------------" << endl;
    double c = 10.1, d = 10.2, e = 10.3;
    average(c, d);
    cout <<"--------------" << endl;
    average(c, d, e);
    return 0;
}








