//Hallar la raiz de un numero donde B es la base y la R el radical de este.
#include<stdio.h>
#include<math.h>
int main(){
	float B, aux, R, rpta;
	
	printf("La base es : \n");
	scanf("%f",&B);
	printf("La raiz es: \n");
	scanf("%f",&R);
	aux=(1/R);
	rpta=pow(B,aux);
	
	printf("La raiz es: %.2f",rpta);
	return 0;
}
