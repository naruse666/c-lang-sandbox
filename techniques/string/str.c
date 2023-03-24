// len = 0の文字列となる
#define EMPTY_STRING { '\0' }
char s[256] = EMPTY_STRING;

#include <stdio.h>
#include <string.h>
int main () {
  printf("%lu\n", strlen(s)); // 0になる
}