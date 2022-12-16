#include<stdio.h>
int main(){
	int num=-1, cantNum=0, sumNum=0;
	double prom;
	printf("Ingrese un numero: ");
		scanf("%d",&num);
	while(num!=0){
		cantNum++;
		sumNum= sumNum + num;
		printf("Ingrese un numero: ");
		scanf("%d",&num);
	}
	prom=(double)sumNum/cantNum;
	printf("El promedio de numero es: %lf",prom);
	
	
	return 0 ;
}
