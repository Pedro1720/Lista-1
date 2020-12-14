#include<stdio.h>
#include<stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float num1,num2;
	char result;
	
	printf("Digite um valor:");
	scanf("%f",&num1);
	
	printf("\nDigite outro valor:");
	scanf("%f",&num2);
	
	printf("\nQual cálculo voçê deseja fazer? (+ - * /):");
	scanf("%s",&result);
	
	switch(result){
		case '*':
			
			printf("\n %.2f * %2.f = %.2f",num1,num2,(num1*num2));
			break;
			
		case '/':
			
			printf("\n %.2f / %2.f = %.2f",num1,num2,(num1/num2));
			break;
		
		case '+':
			
			printf("\n %.2f + %2.f = %.2f",num1,num2,(num1+num2));
			break;
		
		case '-':
			printf("\n %.2f - %2.f = %.2f",num1,num2,(num1-num2));
			break;
	}
	
	
	

	
	
	return 0;
}
