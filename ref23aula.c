#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


void somares (int p_a, int p_b, int *p, int *q);

int main(){
		setlocale(LC_ALL, "");
	int num1 = 0, num2 = 0, soma = 0, res = 0;
	
	printf("Informe um numero inteiro:");
	fflush(stdin);
	scanf("%d", &num1);
	
	printf("\nInforme um segundo numero inteiro:");
	fflush(stdin);
	scanf("%d", &num2);
	
	somares (num1, num2, &soma, &res);
	
	printf("%d  /  %d", soma, res);
	
	system("pause");
	return 0;
}

void somares (int p_n1, int p_n2, int *p, int *q){
	
	*p = p_n1 + p_n2;
	*q = p_n1 * p_n2;

}
