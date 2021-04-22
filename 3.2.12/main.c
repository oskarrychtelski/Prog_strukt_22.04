#include <stdio.h>
#include <stdlib.h>
void wsk(int);
int main()
{
    int n=5;
    wsk(n);
    return 0;
}
void wsk(int n)
{
    double *wsk_n=&n;
    printf("%p",(void *)wsk_n);
}
