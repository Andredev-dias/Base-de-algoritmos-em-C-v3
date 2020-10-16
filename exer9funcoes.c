#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int soma();



int main(){
	setlocale(LC_ALL,"Portuguese");
	
	 int num1 = 0, num2 = 0, res = 0;
	
	printf("SOMA\n");
	
	printf("Informe o primeiro número:\n");
	fflush(stdin);
	scanf("%d",&num1);
	
	printf("Informe o segundo número:\n");
	fflush(stdin);
	scanf("%d",&num2);
	
	res = soma();
	printf("O resultado entre %d + %d = %d\n",num1,num2,res);
	
system("pause");
return 0;
}

int soma(){
	int valor;
	
	valor = num1 + num2;
	
	return valor;
}
