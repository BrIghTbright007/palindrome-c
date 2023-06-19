#include<stdio.h>
int main(void)
{
	int cash = 30;
	if(cash > 100){
		printf("more than 100");
	}
	else if(cash > 50){
		printf("more than 50");
	}
	else if(cash > 25){
		printf("more than 20");
	}
	else{
		printf("too less money");
	}
	return 0;
}