#include<stdio.h>
#include<stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float temp,v, lt, dist;
	printf("Tempo gasto na viagem:");
	scanf("%f",&temp);
	
	printf("\nVelocidade m�dia:");
	scanf("%f",&v);
	
	printf("\nSeu ve�culo faz quantos Km/L?");
	scanf("%f",&lt);
	
	dist = v* temp;
	
	printf("\n\nDist�ncia percorrida: %.2f",dist);
	printf("\nLitros utilizados na viagem: %.2f",dist/lt);	
	
	
	

	
	
	return 0;
}
