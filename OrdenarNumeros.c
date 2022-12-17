//Ingresar tres numeros y ordenarlos de manera ascedente
#include<stdio.h>
int main(){
	int num1, num2, num3, mayor, medio, menor;
	
	printf("Ingresar 3 numeros diferentes: ");
	scanf("%d%d%d",&num1,&num2,&num3);
	
	if(num3>=num1 && num3>=num2){
		mayor=num3;
		if(num1>=num2){
			medio=num1;
			menor=num2;
		}
		else{
			medio=num2;
			menor=num1;
		}
	}
	
	if(num2>=num1 && num2>=num3){
		mayor=num2;
		if(num1>=num3){
			medio=num1;
			menor=num3;
		}
		else{
			medio=num3;
			menor=num1;
		}
	}
	
		if(num1>=num2 && num1>=num3){
		mayor=num1;
		if(num2>=num3){
			medio=num2;
			menor=num3;
		}
		else{
			medio=num3;
			menor=num2;
		}
	}	
	
	printf("El orden es %d , %d , %d",mayor,medio,menor);
	return 0;
}
