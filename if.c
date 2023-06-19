#include <stdio.h>
#include <math.h>

int main()
{
    float w;
    float h;
    scanf("%f %f", &w , &h);
    float BMI = w / pow(h , 2);
    printf("BMI = %.2f" , BMI);

    if (BMI < 18.5){
        printf("ต่ำกว่าเกณฑ์");
    }
    else if (BMI>=18.5 && BMI<25){
        printf("ปกติ");
    }
     else if (BMI>=25 && BMI<30){
        printf("สูง");
    }
     else if (BMI>=30){
        printf("เกิน");
    }
}