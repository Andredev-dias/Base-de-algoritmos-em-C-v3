#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
	
	int a;
	int *p;
	
	p = &a;
	a = 6;
	printf("%d \n", a);
	
	*p = 2;
	printf("%d \n", a);
	
	printf("%p \n", p);
	printf("%p \n", &a);
	
	system("pause");
	return 0;
}
