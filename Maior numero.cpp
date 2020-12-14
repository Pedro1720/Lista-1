#include<stdio.h>
#include<stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float numero1,numero2;
	
	printf("Digite um número:");
	scanf("%f",&numero1);
	
	printf("\nDigite outro número:");
	scanf("%f",&numero2);
	
	if(numero1>numero2){
		printf("\n%.3f é maior que %.3f",numero1,numero2);
	}else if(numero2>numero1){
		printf("\n%.3f é maior que %.3f",numero2,numero1);	
	}else{
		printf("\n%.3f é %.3f são iguais",numero1,numero2);
	}
	
	
	
	
	return 0;
}
