#include <stdio.h>
#include "main.h"

int main(void){
  char str[] = "hello world";
  char *ptr;

  ptr = str;
  *ptr = 'H';
  *(ptr+6) = 'W';
  printf( "%s\n", str );

  printf("RETURN defined from main.h: %d \n", RETURN);
  return RETURN;
}