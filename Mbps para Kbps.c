#include<stdio.h>
#include<stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int mbps;
	
	printf("Quantos Mbps? \n");
	scanf("%d",&mbps);

	printf("\n\n%d Mbps equivale a %d kbps",mbps,(mbps*1000));
	
	return 0;
}
