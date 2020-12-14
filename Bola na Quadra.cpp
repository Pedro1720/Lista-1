
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int i,j;
	scanf("%d",&i);
	scanf("%d",&j);
	

	if(i>=0 && i<=432 && j>=0 && j<=468){
		printf("Dentro.");
	}else{
		printf("Fora.");
	}

	return 0;
	
}
