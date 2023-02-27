#include <stdio.h>
int main(){
  int a,b,c;
  int *p, *q, *r;

  p = &a;
  q = &b;
  r = &c;

  *p = 3;
  *q = 5;
  *r = *p + *q;

  printf("%10d , %10d, %10d\n", a, b, c);
  return 0;
}