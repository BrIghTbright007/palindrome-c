#include<stdio.h>
int main(void)
{
	char grade = 'B';

    switch (grade)
    {
    case 'A':
        printf("A");
        break;

    case 'B':
    case 'C':
        printf("C");
        break;
    default :
        printf("default");
        break;
    }
}