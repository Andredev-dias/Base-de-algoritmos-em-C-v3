#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

float calculo(float p_n1, float p_n2, float p_n3, float p_n4);
void mostra(char p_nome[50], int p_mat, float p_media );

void main(){
	setlocale(LC_ALL,"Portuguese");
	
	char nome[50];
	int mat = 0;
	float media = 0, n1 = 0, n2 = 0, n3 = 0, n4 = 0;
	
	printf("QUAL SUA MATRÍCLUCA:\n");
	fflush(stdin);
	scanf("%d",&mat);
	
	while( mat != 0){
		
			printf("Informe seu nome:\n");
			fflush(stdin);
			gets(nome);
		
			printf("Informe a primeira nota:\n");
			fflush(stdin);
			scanf("%f",&n1);
	
			printf("Informe a segunda nota:\n");
			fflush(stdin);
			scanf("%f",&n2);
	
			printf("Informe a terceira nota:\n");
			fflush(stdin);
			scanf("%f",&n3);
	
			printf("Informe a quarta nota:\n");
			fflush(stdin);
			scanf("%f",&n4);
		
	media = calculo(n1,n2,n3,n4);
	mostra(nome,mat,media);
 	 
	
	printf("QUAL SUA MATRÍCLUCA:\n");
	fflush(stdin);
	scanf("%d",&mat);
	}
	
system("pause");

}

float calculo(float p_n1, float p_n2, float p_n3, float p_n4){
	float resp = 0;
	
	resp = (p_n1 + p_n2 + p_n3 + p_n4) / 4;
	return resp;
	
}

void mostra(char p_nome[50], int p_mat, float p_media ){
	
	printf("O aluno(a) %s com matrícula %d tem %.1f de média.\n\n\n",p_nome,p_mat,p_media);
	
}
