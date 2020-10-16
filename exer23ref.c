#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void somaprod( int p_a, int p_b, int *p, int *q);

int main(){
	
	int n1 = 0, n2 = 0;
	int soma = 0, prod = 0;
	
	scanf("%d  %d", &soma, &prod);
	
	somaprod(n1, n2, &soma, &prod);
	
	printf("%d ; %d", soma, prod);
	
system("pause");
return 0;
}

void somaprod(int p_n1, int p_n2, int *p, int *q){
	p_n1 = 2;
	*p = p_n1 + p_n2;
	*q = p_n1 * p_n2;	
}
