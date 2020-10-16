#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void imprime (int *p_numero_int);

int main(){
	setlocale(LC_ALL,"Portuguese");
	int numero_int;
	
	printf("Informe um número inteiro:");
	fflush(stdin);
	scanf("%d", &numero_int);
	
	imprime(&numero_int);
	
	printf("Numero inteiro: %d \n", numero_int);
	
	system("pause");
	return 0;
}

void imprime (int *p_numero_int){
	
	printf("%d \n", *p_numero_int);
	*p_numero_int = 0;
	
}
