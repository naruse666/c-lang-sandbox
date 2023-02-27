#include <stdio.h>
int main(){
  int a[10];
  int b[10];

  int *p;
  p = a;

  int *q;
  q = b;

  while (p < &a[10]){
    *p = *(p-1) + 1;
    p++;
  }

  for (; q < &b[10]; q++) {
    *q = *(q-1) + 1;
    printf("%5d", *q);
  }
}