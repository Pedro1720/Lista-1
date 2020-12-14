
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float h, p, imc;

	printf("Digite sua altura: ");
	scanf("%f",&h);
	
	printf("Digite seu peso: ");
	scanf("%f",&p);
	
	imc = p / ( pow(h,2) );
	
	printf("Seu IMC é %.2f.\n\n",imc);
	
	if(imc < 20){
		printf("Abaixo do peso.");
	}else if(imc>= 20 && imc<25){
		printf("Peso normal.");
	}else if(imc>=25 && imc<30){
		printf("Sobre Peso.");
	}else if(imc>=30 && imc<40){
		printf("Obeso.");
	}else if(imc>=40){
		printf("Obeso Mórbido.");
	}
	
	
	
	return 0;
	
}
