#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <ctype.h>

void imprimeMenu(){
	printf("1.- Arcocoseno\n");
	printf("2.- Arcoseno\n");
	printf("3.- Arcotangente\n");
	printf("5.- Función Suelo\n");
	printf("6.- Coseno\n");
	printf("7.- Coseno Hiperbolico\n");
	printf("8.- Función Exponencial\n");
	printf("9.- Valor Entero\n");
	printf("10.- Menor Entero\n");
	printf("14.- Logaritmo natural\n");
	printf("15.- Logaritmo base 10\n");
	printf("18.- Seno\n");
	printf("19.- Seno hiperbolico\n");
	printf("20.- Raiz cuadrada\n");
	printf("21.- Tangente\n");
	printf("22.- Tangente hiperbolica\n");
	printf("Indica la opcion: ");
}

void hasOperacion(int opcion, int numero){
	if(opcion <= 22){
		printf("Introduce el numero: ");
		scanf("%d", &numero);
		switch(opcion){
			case 1:
			   	printf("Arcocoseno: %lf\n", (acos(numero)));
				break;
			case 2: 
				printf("Arcoseno: %lf\n", (asin(numero)));
				break;
			case 3: 
				printf("Arcotangente: %lf\n", (atan(numero)));
				break;
			case 5: 
				printf("Función Suelo: %lf\n", (floor(numero)));
				break;
			case 6: 
				printf("Coseno: %lf\n", (cos(numero)));
				break;
			case 7: 
				printf("Coseno Hiperbolico: %lf\n", (cosh(numero)));
				break;
			case 8: 
				printf("Función Exponencial: %lf\n", (exp(numero)));
				break;
			case 9: 
				printf("Valor Entero: %lf\n", (fabs(numero)));
				break;
			case 10: 
				printf("Menor Entero: %lf\n", (ceil(numero)));
				break;
			case 14: 
				printf("Logaritmo natural: %lf\n", (log(numero)));
				break;
			case 15: 
				printf("Logaritmo base: %lf\n", (log10(numero)));
				break;
			case 18: 
				printf("Seno: %lf\n", (sin(numero)));
				break;
			case 19: 
				printf("Seno hiperbolico: %lf\n", (sinh(numero)));
				break;
			case 20: 
				printf("Raiz cuadrada: %lf\n", (sqrt(numero)));
				break;
			case 21: 
				printf("Tangente: %lf\n", (tan(numero)));
				break;
			case 22: 
				printf("Tangente hiperbolica: %lf\n", (tanh(numero)));
				break;
			default: 
				break;
		}
	}
	else{
		printf("Estas loca Sandra ese numero no esta en el menu \n");
	}

}

int main(){
	int opcion;
	int numero;
	imprimeMenu();
	scanf("%d", &opcion);
	hasOperacion(opcion, numero);
	return 0;
}

