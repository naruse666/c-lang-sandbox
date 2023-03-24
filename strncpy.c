char  *f_strncpy( char *dest, const char *src, int n ) {
  int i;

    i = 0;
    while (i < n && src[i] != '\0')
    {
      dest[i] = src[i];
      i++;
    }
    while (i < n)
    {
      dest[i] = '\0';
      i++;
    }
    return dest;
}

#include <stdio.h>
int main()
{
  char buf[10];
  char s1[] = "abcdef";
  char s2[] = "1234";

// str 1
  
  printf("%s \n", f_strncpy(s1, s2, 3));
  printf("%s \n", f_strncpy(s1, s2, 7));

// buf
  printf("%s \n", f_strncpy(buf, s2, 3));
  printf("%s \n", f_strncpy(buf, s2, 7));
}