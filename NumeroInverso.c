#include<stdio.h>
int main(){
	int num, rpta;
	int u, d, c, um, dm;
	printf("Ingresa un numero de 5 cifras: ");
	scanf("%d",&num);
	
	if(num>=10000){
		u=num%10;
		num=num/10;
		d=num%10;
		num=num/10;
		c=num%10;
		num=num/10;
		um=num%10;
		dm=num/10;
		rpta=u*10000+d*1000+c*100+um*10+dm;
		printf("El numero invertido es: %d",rpta);
	}
	else{
		printf("No ingresaste un numero de 5 cifras, FIN DEL PROGRAMA\n");
	}
	
	return 0;
}
