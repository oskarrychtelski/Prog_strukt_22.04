#include <iostream>

using namespace std;
void zamien(int&,int*);
int main()
{
    int a;
    int b=5;
    int &ref_a=a;
    int *wsk_b=&b;
    ref_a=3;
    zamien(ref_a, * &wsk_b);
    return 0;
}

void zamien(int & a, int * b)
{
    int pom;
    pom=a;
    a=*b;
    *b=pom;
    cout<<"a:"<<a<<" b:"<<*b;
}
