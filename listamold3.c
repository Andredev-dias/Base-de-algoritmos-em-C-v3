#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

float soma(float p_n1,float p_n2);
float sub(float p_n1,float p_n2);
float divisao(float p_n1,float p_n2);
float multi(float p_n1,float p_n2);

void main(){
	setlocale(LC_ALL,"Portuguese");
	
	float n1 = 0, n2 = 0, res = 0;
	char op;
	
	printf("INFORME QUAL OPERAÇÃO DESEJA REALIZAR\n");
	printf("S - SOMA / U - SUBTRAÇÃO / X - MULTIPLICAÇÃO / D - DIVISÃO\n");
	printf("Ou digite # para sair do sistema\n");
	fflush(stdin);
	scanf("%c",&op);
	
	while(op != '#'){
		
	printf("Informe o primeiro número:\n");
	fflush(stdin);
	scanf("%f",&n1);
	
	printf("Informe o segundo número:\n");
	fflush(stdin);
	scanf("%f",&n2);
	
		switch(op){
			case 'S':
				res = soma(n1,n2);
				printf("RESPOSTA: %.3f + %.3f = %.3f \n\n\n",n1,n2,res);
				break;
			case 'U':
				res = sub(n1,n2);
				printf("RESPOSTA: %.3f - %.3f = %.3f \n\n\n",n1,n2,res);
				break;
			case 'X':
				res = multi(n1,n2);
				printf("RESPOSTA: %.3f x %.3f = %.3f \n\n\n",n1,n2,res);
				break;
			case 'D':
				res = divisao(n1,n2);
				printf("RESPOSTA: %.3f / %.3f = %.3f \n\n\n",n1,n2,res);
				break;
		}
	printf("INFORME QUAL OPERAÇÃO DESEJA REALIZAR\n");
	printf("S - SOMA / U - SUBTRAÇÃO / X - MULTIPLICAÇÃO / D - DIVISÃO\n");
	printf("Ou digite # para sair do sistema\n");
	fflush(stdin);
	scanf("%c",&op);
	}
	
	
	system("pause");
}
float soma(float p_n1,float p_n2){
	
	float calculo = 0;
	
	calculo = p_n1 + p_n2;
	
	return calculo;
}

float sub(float p_n1,float p_n2){
	
	float calculo = 0;
	
	calculo = p_n1 - p_n2;
	
	return calculo;
}

float divisao(float p_n1,float p_n2){
	
	float calculo = 0;
		
	calculo = p_n1 / p_n2;
	
	return calculo;
}

float multi(float p_n1,float p_n2){
	
	float calculo = 0;
	calculo = p_n1 * p_n2;
	
	return calculo;
}


