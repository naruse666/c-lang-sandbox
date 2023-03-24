#include <stdio.h>

#define VERSION 1.0
#undef VERSION

#define PI 3.14159265358979323846
#define CIRCLE_AREA(r) (PI * r * r)

#define MACRO_C(a) value ## a
int main(){
  printf("%s\n", __FILE__);
  int value1, x;
  x = MACRO_C(1); // x = value1;
  printf("%i\n", x);
}
