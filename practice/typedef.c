#include <stdio.h>
void func(int n);

int main() {
  typedef void (*FUNC)(int n);
  FUNC fn = func;
  fn(10);
}

void func(int n) {
  printf("value: %i\n", n);
}