#include <stdio.h>

int main(void)
{
    int n , m;
    for (n = 0; n < 9; n++)
    {
        for ( m = 0; m < n; m++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    
    return 0;
}