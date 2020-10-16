#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//trabalho pesquisa binaria.
//Alunos: André F. P. DIas e Andrey Suprano.

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int vet[10];
	int busca = 0;
	int cont = 0, medio = 0, alto = 0, baixo = 0;
	int achou = 0;
	
	for(cont = 0;cont < 10; cont ++ ){
		printf("informe o %dº valor:",cont+1);
		fflush(stdin);
		scanf("%d",&vet[cont]);
	}
	
	printf("\n Informe um valor pra ser procurado:");
	fflush(stdin);
	scanf("%d", &busca);
	achou = 0;
	baixo = 0;
	alto = 9;
	
		
while(baixo <= alto && achou == 0 ){
	medio = (baixo + alto )/ 2;
	
	if( busca < vet[medio]){
		alto = medio + 1;
	}
	else{
		if( busca > vet[medio]){
			baixo = medio + 1;
		}
		else{
			achou = 1;
		}
	}
}
if(achou == 1){
	printf("FOI ENCONTRADO.");
}
	else{
		printf("NÃO FOI ENCONTRADO.");
	}


	
	system("pause");
	return(0);
}
