
#include<stdio.h>
#include<stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int verde,amarela,branca;
	
	printf("Digite o n�mero de bolas verdes:");
	scanf("%d",&verde);
	verde=verde*10;
	
	printf("Digite o n�mero de bolas amarelas:");
	scanf("%d",&amarela);
	amarela=amarela*5;
	
	printf("Digite o numero de bolas brancas:");
	scanf("%d",&branca);
	branca=branca*3;
	
	printf("Sua pontua��o final foi de %d.",(verde+amarela+branca));


	return 0;
}
