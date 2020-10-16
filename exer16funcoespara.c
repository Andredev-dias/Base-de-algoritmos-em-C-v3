#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int soma(int p_n1, int p_n2);

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int num1, num2, res;
	
	printf("SOMA\n");
	
	printf("Informe o primeiro número:\n");
	fflush(stdin);
	scanf("%d",num1);
	
	printf("Informe o segundo número:\n");
	fflush(stdin);
	scanf("%d",num2);
	
	res = soma(num1, num2);
	printf("O resultado entre %d + %d = %d\n",num1,num2,res);
	
system("pause");
return 0;
}

int soma(int p_n1, int p_n2){
	int valor;
	
	valor = p_n1 + p_n2;
	return valor;
}
