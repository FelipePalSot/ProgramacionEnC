//Dado el valor de venta de un producto, hallar el IGV(19%) y el precio de venta
#include<stdio.h>
int main(){
	float Precio, IGV, PrecioVenta;
	
	Precio=1500;
	printf("El precio de venta es 1500 soles\n");
	IGV=1500*0.19;
	PrecioVenta=IGV+Precio;
	printf("El IGV es: %.2lf\n",IGV);
	printf("El precio de venta es: %.2lf\n",PrecioVenta);
	
	return 0;
}
