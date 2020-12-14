/*
 Escrever a tabuada de multiplicação do um número lido na tela.
*/
#include<stdio.h>
	int main()
	{
		int tab = 0, i=0;

		printf("Qual tabuada voce quer?\n");
		scanf("%d",&tab);

		printf("\nMostrando Tabudada do %d ",tab);


		for(i=0; i<11; i++){

		
			printf("\n\n%d x %d = %d",tab,i,(tab * i));

			
			}		
		}
