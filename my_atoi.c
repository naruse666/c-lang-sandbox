int my_atoi(char *str) 
{
    int n = 0;
    int negative = 0;
    if ( *str == '+' )
        str++;
    else if ( *str == '-' )
    {
        negative = 1;
        str++;
    }
    while(*str != '\0')
    {
        if ( *str < '0' || *str > '9' )
            break;
        n += *str - 48;
        n *= 10;
        str++;
    }
    n /= 10;    
    if (negative)
        n = 0 - n;
    return n;
}
#include <stdio.h>
int main () {
    printf("%d\n",my_atoi("-123"));
    printf("%d\n",my_atoi("+9"));
    printf("%d\n",my_atoi(" \n\t\r\v\f -0"));
    printf("%d\n",my_atoi("4500"));
}