#include<stdio.h>
#define PI 3.14159
int main(){
	int radio;
	float area;
	
	printf("Ingresa el valor de la radio: ");
	scanf("%d",&radio);
	
	area=pow(radio,2)*PI;
	
	printf("El valor del area es: %.2f",area);
	
	return 0;
}
