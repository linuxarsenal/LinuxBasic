#include <iostream>
#include <cstring>
using namespace std;


template<class T>
int compare(const T &t1, const T &t2)
{
    cout <<"template<class T>" << endl;
    if (t1 < t2) return -1;
    if (t1 > t2) return 1;
    if (t1 == t2) return 0;
}

/*
int compare(int t1, int t2)
{ 
    cout <<"int compare(int t1, int t2)" << endl;
    if (t1 < t2) return -1;
    if (t1 > t2) return 1;
    if (t1 == t2) return 0;
}*/

//特化
template<>
int compare<const char*>(const char *const &t1, const char *const &t2)
{
   cout <<"int compare<const char*>(const char * const t1, const char * const t2)" << endl;
   return strcmp(t1, t2);
}


int main(void)
{
    short a = 11, b = 12;
    int c = 13, d = 14;
    compare(a, b);
    const char *t1 = "abc";
    const char * t2 = "def";
    const char * &ret1 = t1;
    const char * &ret2 = t2;
    compare(t1, t2);

    compare(ret1, ret2);

    return 0;
}
