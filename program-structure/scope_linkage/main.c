// Lifetime_and_Visibility.c
#include <stdio.h>

int i = 1;  // i defined at external level
int main()  // main function defined at external level
{
    printf( "%d\n", i ); // Prints 1 (value of external level i)
    {                                 // Begin first nested block
        int i = 2, j = 3;          // i and j defined at internal level
        printf( "%d %d\n", i, j );  // Prints 2, 3
        {                             // Begin second nested block
            int i = 0;                // i is redefined
            printf( "%d %d\n", i, j ); // Prints 0, 3
        }                             // End of second nested block
        printf( "%d\n", i );        // Prints 2 (outer definition
                                      //  restored)
    }                                 // End of first nested block
    printf( "%d\n", i );            // Prints 1 (external level
                                      // definition restored)
    return 0;
}