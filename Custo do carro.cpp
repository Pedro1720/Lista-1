#include<stdio.h>
#include<stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float custofabri;
	
	printf("Digite o custo de f�brica:\n");
	scanf("%f",&custofabri);
	
	custofabri = custofabri + (custofabri*0.25) + (custofabri * 0.42);
	
	printf("Custo ao consumidor � de  %.2f\n",custofabri);
	
	return 0;
}
