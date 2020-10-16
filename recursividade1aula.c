#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void teste (int x);

int main(){
	
	int num;
	
	scanf("%d", &num);
	teste(num);
	
	system("pause");
	return 0;
	
}

void teste (int x){
	
	
	printf("%d \n", x);
	teste(x); /*laço infinito pois fica chamando ele memso*/
}
