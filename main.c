#include <stdio.h>
#include <math.h>

int main()
{
    int radius;
    scanf("%d", &radius);
    float pi = 3.14;
    float area = pi * pow(radius, 2);
    printf("area is : %.2f",area);

    return 0;
}
