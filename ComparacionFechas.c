#include <stdio.h>
int main()
{
	int d1, m1, a1, d2, m2, a2;
	print("Ingresa un dia, mes, anio: ");
	scanf("%d%d%d",&d1,&m1,&a1);
	print("Ingresa otro dia, mes, anio: ");
	scanf("%d%d%d",&d2,&m2,&a2);
	
	printf("La fecha es: %d/%d/%d\n",d1,m1,a1);
	printf("La fecha es: %d/%d/%d\n",d2,m2,a2);
	
	return 0;
}
