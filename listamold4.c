#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float calculo(float p_alt, float p_base);

void main(){
	setlocale(LC_ALL,"Portuguese");
	
	float alt = 0, base = 0,resp = 0;
	
	printf("INFORME A MEDIDA LATERAL DO TERRENO:");
	fflush(stdin);
	scanf("%f", &alt);
	
	printf("INFORME A BASE DO TERRENO:");
	fflush(stdin);
	scanf("%f", &base);

	resp = 	calculo(alt, base);
	
	printf("\n\nArea = %.2fm , referente as medidas: %.2fm e %.2fm.\n\n", resp, alt, base);

system("pause");
}
float calculo(float p_alt, float p_base){
	
	float resp = 0;
	
	resp = p_alt * p_base;
	
	return (resp);
}
