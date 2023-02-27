#include <stdio.h>
int main()
{
    int array[5];
    int *p;
    int i;
    
    p = array;                   /* p = &array[0] と同じ */
    for (i = 0; i < 5; i++) {
        p[i] = i;                /* array[i] = i と同じ */
    }
    for (i = 0; i < 5; i++) {
        printf("%d ", array[i]);
    }
    
    return 0;
}