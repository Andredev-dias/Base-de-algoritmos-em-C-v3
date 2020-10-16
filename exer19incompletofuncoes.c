#include<stdio.h>
#include<locale.h>

float ideal_homem ( float p_altH);
float ideal_mulher ( float p_altF);

void main(){
	setlocale(LC_ALL,"Portuguese");
	
	float alt = 0,resh = 0,resf = 0;
	char sexo;
	
	printf("Informe seu sexo(M MASC e F FEmin):");
	fflush(stdin);
	scanf("%c",&sexo);
	
	printf("Informe SUA ALTURA:");
	fflush(stdin);
	scanf("%f",&alt);
	
	if(sexo =='M'){
		resh = ideal_homem(alt);
		printf("\n\nSeu peso ideal é:%.2f",resh);
	}
	else{
		resf = ideal_mulher(alt);
		printf("\n\nSeu peso ideal é:%.2f",resf);
	}
	
	system("pause");

}


float ideal_homem ( float p_altH){
	float valorH;
	
	valorH = (72.7 * p_altH) - 58;
	return valorH;
}

float ideal_mulher ( float p_altF){
	float valorF;
	
	valorF = (62.1 * p_altF) - 44.7;
	return valorF;
}


