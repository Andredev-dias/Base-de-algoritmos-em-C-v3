#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

void Calculo(int p_peq ,int p_med ,int p_grand,char p_name[30]);

int main(){
	setlocale(LC_ALL,"portuguese");
	
	int peq = 0,med = 0,grand = 0;
	int var_recebedora;
	char name[30];
	
	printf("LOJA DE CAMISETAS\n\n");
	printf("QUAL A QUTDADE DE CAMISETAS PEQUENAS($10,00):");
	fflush(stdin);
	scanf("%d",&peq);
	printf("QUAL A QUTDADE DE CAMISETAS MÉDIAS($12,00):");
	fflush(stdin);
	scanf("%d",&med);
	printf("QUAL A QUTDADE DE CAMISETAS GRANDES($15,00):");
	fflush(stdin);
	scanf("%d",&grand);
	printf("QUAL SEU NOME:");
	fflush(stdin);
	gets(name);
	
	Calculo(peq,med,grand,name);
	
	
	system("pause");
	return(0);
}

void Calculo(int p_peq ,int p_med ,int p_grand,char p_name[30]){
	
	int respp = 0, respm = 0, respg = 0;
	
	respp = p_peq * 10;
	respm = p_med * 12;
	respg = p_grand * 15;
	printf("Valor arrecadado é de:R$ %d,00 %s.\n\n\n",respp + respm + respg,p_name);
}
