#include <stdio.h>
int main()
{
	int num1, num2, rpta;
	
	printf("Ingrese dos numero: ");
	scanf("%d %d",&num1,&num2);
	
	rpta= num1%num2;
	printf("El cociene es %d",rpta);
	
	return 0 ;
}
