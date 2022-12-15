#include<stdio.h>
#define MAX(num1,num2) num1>num2?num1:num2
#define MIN(num1,num2) num1<num2?num1:num2
int main()
{
	int num1=0, num2=0, num3=0;
	int mayor=0, medio=0, menor=0;
	printf("Ingresa 3 valores: ");
	scanf("%d %d %d",&num1,&num2,&num3);
	
	if(num1>num2 && num1>num3){
		mayor=num1;
		medio=MAX(num3,num2);
		menor=MIN(num3,num2);
	}
	else{
		if(num2>num1 && num2>num3){
			mayor=num2;
			medio=MAX(num1,num3);
			menor=MIN(num1,num3);
		}
			else{
		mayor=num3;
		medio=MAX(num1,num2);
		menor=MIN(num1,num2);
	}
	}

	printf("El mayor es: %d\n",mayor);
	printf("El medio es: %d\n",medio);
	printf("El menor es: %d\n",menor);
		return 0;
}
