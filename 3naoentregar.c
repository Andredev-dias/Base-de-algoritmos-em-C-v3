#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

float Calcula(float *p1, float *p2);
void Mostra(float p_Sal_10, float p_Sal_15, float p_Sal_20);

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	float Sal_10 = 0, Sal_15 = 0, Sal_20 = 0;
	printf("informe:");
	scanf("%f", &Sal_15);
	
	Sal_10 = Calcula(&Sal_15, &Sal_20);
	Mostra(Sal_10, Sal_15, Sal_20);
	
	system("pause");
	return 0;
}

float Calcula(float *p1, float *p2){
	float Aux = 0;
	Aux = *p1 + (*p1 * ((float)10/100));
	*p2= *p1 + (*p1 *((float)20/100));
	*p1 = *p1 + (*p1 * ((float)15/100));
	return Aux;
}
void Mostra(float p_Sal_10, float p_Sal_15, float p_Sal_20){
	printf("O salario 1 é %.2f \n", p_Sal_10);
		printf("O salario 2 é %.2f \n", p_Sal_15);
			printf("O salario 3 é %.2f \n", p_Sal_20);
	
}
