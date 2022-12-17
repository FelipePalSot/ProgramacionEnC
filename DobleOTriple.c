//Ingresar un numero si el numero es par, entregar el doble sino el triple
#include<stdio.h>
int main(){
	int num;
	
	printf("Ingresar un numero: ");
	scanf("%d",&num);
	
	if(num%2==0){
		printf("El doble de un numero es:%d",num=num*2);
	}
	
	else{
		printf("El triple de un numero es:%d",num=num*3);
	}
	
	return 0;
}
