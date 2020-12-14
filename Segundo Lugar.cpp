#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int num[3],i,m,posicaoM,segundoM;
	

	for(i=0; i<3; i++){
		scanf("%d",&num[i]);
		if(m<=num[i]){
			m=num[i];
			posicaoM= i;
		}
	}
	
	for(i=0; i<3; i++){
		if(i!=posicaoM){
			if(segundoM<=num[i]){
			segundoM=num[i];

		}
		}
		
	}	
	
	printf("\n\n%d",segundoM);
	
	
	

	return 0;
	
}
