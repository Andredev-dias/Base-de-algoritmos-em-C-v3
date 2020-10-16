#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


float Sal_Bruto(float p_horasn, float p_horase);
float Sal_Liquido(float p_bruto);
void mostra(int p_cod,float p_horasn, float p_horase,float p_respbruto,float p_respliquido);

int main(){
		setlocale(LC_ALL,"Portuguese");
		
		float horasn = 0, horase = 0, respbruto = 0, respliquido = 0; /*o funcionario pode informar 2,5 de trabalho por exemplo, porisso float*/
		int cod = 0, cont = 0;
		
		for(cont = 1; cont < 11; cont++){
			printf("QUAL SEU CODIGO:");
			fflush(stdin);
			scanf("%d", &cod);
			
			printf("QUANTIDADE DE HORAS NORMAIS:");
			fflush(stdin);
			scanf("%f", &horasn);
			
			printf("QUANTIDADE DE HORAS EXTRAS:");
			fflush(stdin);
			scanf("%f", &horase);
			
			printf("_________________________________________\n");
			printf("\n%dº FUNCIONARIO CALCULADO:\n",cont);
			
			
			respbruto = Sal_Bruto(horasn, horase);
			respliquido = Sal_Liquido(respbruto);
			mostra(cod,horasn,horase,respbruto,respliquido);
			
		}
		
system("pause");
return(0);
}

float Sal_Bruto(float p_horasn, float p_horase){
	
	float respn = 0, respe = 0, bruto = 0;
	
	respn = p_horasn * 12;
	respe = p_horase * 15.50;
	bruto = respn + respe;
	
	return(bruto);
	
}
float Sal_Liquido(float p_respbruto){
	
	float respliquido = 0;
	
	respliquido = p_respbruto * 0.1;
	respliquido = p_respbruto - respliquido;
	
	return(respliquido);
	
}
void mostra(int p_cod,float p_horasn, float p_horase,float p_respbruto,float p_respliquido){
	
		printf("O funcionário %d trabalhou %.f horas normais e %.f horas extras.\n",p_cod,p_horasn,p_horase);
		printf("Irá receber R$ %.2f de salário bruto e R$ %.2f de salário liquido\n\n\n",p_respbruto,p_respliquido);
}

