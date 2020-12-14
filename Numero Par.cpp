#include<stdio.h>
#include<stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int num;
	
	printf("Digite um número:\n");
	scanf("%d",&num);
	
	if(num%2 == 0){
		printf("\n%d é par.",num);
	}else{
		printf("\n%d é impar.",num);		
	}

	return 0;
}
