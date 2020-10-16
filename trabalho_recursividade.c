#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
#include<string.h>

/* Prototipo da função */
int soma(int x, int y);


int main() {
    setlocale(LC_ALL,"");
    
    int multiplicando, multiplicador, produto;
    
    printf("Informe o multiplicando: ");
    scanf("%d", &multiplicando);
    
    printf("Informe o multiplicador: ");
    scanf("%d", &multiplicador);
    
    produto = soma(multiplicando, multiplicador);
    
    printf("\nA Soma do multiplicando pelo número de vezes do multiplicador é: %d\n\n", produto);
    
    return (0);
    system("pause");
}


/* 
    A Funcao recursiva soma diminui o multiplicador até 1.
    O numero de vezes reduzido é a quantidade de vezes
    que vai somar o multiplicando por ele mesmo  
*/

int soma(int x, int y){
    
    if(y == 1){
        return x;
    } else {
        return x + soma(x, y-1);
    } 
}
