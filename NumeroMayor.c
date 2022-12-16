#include<stdio.h>
int main(){
	int num1, num2 ;
	printf("Ingresa un valor: ");
	scanf("%d",&num1);
	printf("Ingresa otro valor: ");
	scanf("%d",&num2);
	
	if(num1>num2){
		printf("El numero %d es mayor",num1);
	}
	
	if(num2>num1){
		printf("El numero %d es mayor",num2);
	}
return 0;
}
