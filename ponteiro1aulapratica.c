#include<stdio.h>

int main(){
	int num, *p;
	num = 55;
	
	p = &num; /*pega o endereço de num */
	printf("\n Valor inicial: %d \n", num);
	
	*p = 100; /*muda o valor de num de uma maneira indireta */
	printf("\n Valor final:",num);
	
	system("pause");
	return(0);
}
