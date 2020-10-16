#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

char calcula(int n1, int n2, int *p_soma, int *p_multi);


int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int n1 = 0, n2 = 0, soma = 0, multi = 0, resp = 0;

	
	printf("DIGITE O PRIMEIRO NÚMERO:");
	fflush(stdin);
	scanf("%d",&n1);
		
	printf("DIGITE O SEGUNDO NÚMERO:");
	fflush(stdin);
	scanf("%d",&n2);
	
	resp = calcula(n1,n2, &soma, &multi);
	

	
	printf("\nA soma dos 2 números informados é = %d.\n", soma);
	printf("A multipicação dos 2 números informados é = %d.\n", multi);
	printf("%c.\n\n\n",resp);
	
	system("pause");
}
char calcula(int n1, int n2, int *p_soma, int *p_multi){
	
	*p_soma = n1 + n2;
	
	
	*p_multi = n1 * n2;
	
	
	char pi;
	
	if(*p_soma % 2 == 0){
		pi = 'P';
		return(pi);
	}
	else{
		pi = 'I';
		return(pi);
	}
	
	
}




