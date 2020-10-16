#include<stdio.h>
#include<locale.h>

char par_impar (int p_num);

void main(){
		setlocale(LC_ALL,"Portuguese");
	
	char resp;
	int num = 0;
	
	printf("Informe um Número:");
	fflush(stdin);
	scanf("%d",&num);
	
	resp = par_impar(num);
	printf("%c\n", resp);
	
	system("pause");
}

char par_impar (int p_num){
	
	char pi;
	
	if(p_num % 2 == 0){
		pi = 'P';
		printf("PAR\n");
	}
	else{
		pi = 'I';
		printf("IMPAR\n");
	}
	
	return pi;
}
