//La suma de los N primeros numeros
#include<stdio.h>
int main(){
	int N, s;
	printf("Ingresar los N primeros numeros que deseas sumar:");
	scanf("%d",&N);
	
	s=(N*(N+1))/2;
	
	printf("La suma es: %d",s);
	
	return 0;
}
