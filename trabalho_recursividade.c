#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
#include<string.h>

/* Prototipo da fun��o */
int soma(int x, int y);


int main() {
    setlocale(LC_ALL,"");
    
    int multiplicando, multiplicador, produto;
    
    printf("Informe o multiplicando: ");
    scanf("%d", &multiplicando);
    
    printf("Informe o multiplicador: ");
    scanf("%d", &multiplicador);
    
    produto = soma(multiplicando, multiplicador);
    
    printf("\nA Soma do multiplicando pelo n�mero de vezes do multiplicador �: %d\n\n", produto);
    
    return (0);
    system("pause");
}


/* 
    A Funcao recursiva soma diminui o multiplicador at� 1.
    O numero de vezes reduzido � a quantidade de vezes
    que vai somar o multiplicando por ele mesmo  
*/

int soma(int x, int y){
    
    if(y == 1){
        return x;
    } else {
        return x + soma(x, y-1);
    } 
}
