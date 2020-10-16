#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void imprime (int *p_num);

int main(){
		setlocale(LC_ALL, "");
	int num = 0;
	
	printf("Informe um numero inteiro:");
	fflush(stdin);
	scanf("%d", &num);
	
	imprime(&num);
	
	printf("\n %d valor da alteração.\n", num);
	
	system("pause");
	return 0;
}

void imprime (int *p_num){
	
	printf("\n %d foi o numero informado.", *p_num);
	
	*p_num = 333;
}

