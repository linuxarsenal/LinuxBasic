#include <iostream>
using namespace std;

#define max(a,b) (a>b?a:b)

int max1(int a,int b)
{
	return a>b?a:b;
}


inline int max2(int a,int b)
{
	return a>b?a:b;
}

int main(void)
{
	cout <<"#define: "<<max(11,12)<<endl; //预处理阶段替换
	cout <<"max1: "<<max1(12,11)<<endl;   //函数的压栈出栈
	cout <<"max2: "<<max2(12,11)<<endl;   //运行时内联的展开
	return 0;
}
