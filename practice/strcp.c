#include <stdio.h>

extern void strcp(char* s, char* t);

int main(){
  char str1[] = "abcd";
  char str2[] = "efgh"; 
  printf("before 1: %s\n", str1);
  printf("before 2: %s\n", str2);

  strcp(&str1, &str2);
  printf("after 1: %s\n", str1);
  printf("after 2: %s\n", str2);
}

// void strcp(char* s, char* t){
//   int i = 0;
//   while ((s[i] = t[i]) != '\0') i++;
// }

// K&Rのやつ
void strcp(char* s, char* t){
  while(*s++ = *t++);
}