#include<stdio.h>
#include<stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int idade;
	
	printf("Digite sua idade:\n");
	scanf("%d",&idade);
	
	if(idade<16){
		printf("\nN�o Eleitor.");
	}else if( (idade>=16 && idade<18) || (idade>=65)){
		printf("Eleitor Facultativo.");
	}else if(idade>=18 && idade<65){
		printf("Eleitor Obrigat�rio");
	}

	return 0;
}
