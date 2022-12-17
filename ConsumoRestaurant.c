//Un restaurante ofrece un descuento del 10% para consumos de hasta 100.00  y descuento
// de 20% para consumos mayor, en ambos casos se aplica el impuesto del 19%, Calcular descuento,impuesto e importe a pagar
#include<stdio.h>
int main(){
	float cons, dsct, IGV=0.19, monto;
	
	printf("Ingresar el consumo: ");
	scanf("%f",&cons);
	
	if(cons<=100){
		dsct=0.1;
		monto=cons-dsct*cons;
		monto=monto+monto*IGV;
	}
	
	if(cons>100){
		dsct=0.2;
		monto=cons-dsct*cons;
		monto=monto+monto*IGV;
	}
	
	printf("El monto final es: %.2f",monto);
	return 0;
}
