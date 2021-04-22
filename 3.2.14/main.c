#include <stdbool.h>
#include <stdio.h>
bool rowne(int (*f1)(double arg),int (*f2)(double arg2), unsigned int n);
int f1(int);
int f2(int);
int main(void)
{
  printf("%d\n", rowne(f1, f2, 10));
  return 0;
}

int f1(int a)
{
  return a * 1;
}

int f2(int a)
{
  return a / 1;
}

bool rowne(int (*f1)(double arg),int (*f2)(double arg2), unsigned int n)
{
  for (unsigned int i = 0; i < n; ++i)
  {
    if (f1(i) != f2(i))
      return false;
  }

  return true;
}

