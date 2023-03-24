#include <stdio.h>
#include <string.h>
int main()
{
  char buf[10];
  char s1[] = "abcdef";
  char s2[] = "1234";

// str 1
  
  printf("%s \n", strncpy(s1, s2, 3));
  printf("%s \n", strncpy(s1, s2, 7));

// buf
  printf("%s \n", strncpy(buf, s2, 3));
  printf("%s \n", strncpy(buf, s2, 7));
}