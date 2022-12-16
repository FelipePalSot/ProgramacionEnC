#include <stdio.h>
long unir(int,int,int);

int main()
{
	int d1, m1, a1;
	int d2, m2, a2;
	long f1, f2;
	
	printf("Ingresa la fecha1: ");
	scanf("%d %d %d",&d1,&m1,&a1);
	
	printf("Ingresa la fecha2: ");
	scanf("%d %d %d",&d2,&m2,&a2);
	
	f1=unir(d1,m1,a1);
	f2=unir(d2,m2,a2);
	
	if(f1>f2)
	{
		printf("La primera fecha es mayor\n");
	}
	if(f1<f2)
	{
		printf("La segunda fecha es mayor\n");
	}
	
	return 0;
}

long unir(int d,int m,int a)
{
	int fecha= d+m*100+a*10000;
	return fecha;
}
