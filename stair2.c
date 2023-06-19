#include <stdio.h>

int main(void)
{
    int n;
    int m = 0;
    printf("type your number: ");
    scanf("%d", &n);

    while(m < n)
    {
        printf("*");
        m++;
    }
    
    
    
    return 0;
}