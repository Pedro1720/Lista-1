#include<stdio.h>
#include<stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	float real, dolar,x;
	
	printf("Qual a cota��o do dolar? \n");
	scanf("%f",&dolar);
	
	printf("Quantos reais voc� tem? \n");
	scanf("%f",&real);
	
	x= real/dolar;
	
	printf("\n\nCom o dolar valendo R$%.2f voc� pode comprar US$%.2f dolares com seus R$%.2f reais.",dolar,x,real);
	
	return 0;
}
