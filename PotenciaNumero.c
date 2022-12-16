//Ingreso de dos numeros, B base de una potencia y E exponente de la misma
#include <stdio.h>
#include <math.h>
int main(){
	int B, E, rpta;
	
	printf("Ingrese la base y luego el exponente: ");
	scanf("%d%d",&B,&E);
	
	rpta=(int)pow(B,E);
	printf("La base es %d elevado a %d y la respuesta: %d",B,E,rpta);
	return 0;
}
