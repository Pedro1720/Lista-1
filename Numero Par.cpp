#include<stdio.h>
#include<stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int num;
	
	printf("Digite um n�mero:\n");
	scanf("%d",&num);
	
	if(num%2 == 0){
		printf("\n%d � par.",num);
	}else{
		printf("\n%d � impar.",num);		
	}

	return 0;
}
