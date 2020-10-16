#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>


void mostra_velha();                 /* mostra o status atual do jogo na tela */
void jogadorX(char p_jogador[60]);
void jogadorO(char p_jogador[60]);
void vencedor();
int validador(int p_linha, int p_coluna);
void zerarmatriz();


char tab[3][3];                     /* Matriz de escopo GLOBAL para armazenamento das jogadas do jogo */


int main(){
		
	setlocale(LC_ALL, "");
	char jogadorx[60];
	char jogadoro[60];
	int cont;
	
	zerarmatriz();
	
	printf("Informe o nome do jogador 1 (X): ");
	fflush(stdin);
	gets(jogadorx);
	
	printf("Informe o nome do jogador 2 (O): ");
	fflush(stdin);
	gets(jogadoro);

	for (cont=0; cont < 4; cont++){

		mostra_velha();	
		
		jogadorX(jogadorx);
		
		mostra_velha();
		
		jogadorO(jogadoro);
		
		
	}	
	
	mostra_velha();	
		
	jogadorX(jogadorx);
	
	mostra_velha();	
		
		
	return 0;
	system("pause");
}


void mostra_velha(){
	
	printf("\n\n");
	printf(" 0     1     2 \n\n");
	printf("      |   |   \n");
	printf("0   %c | %c | %c \n", tab[0][0],tab[0][1],tab[0][2]);
	printf("   ___|___|___\n");
	printf("      |   |   \n");
	printf("1   %c | %c | %c \n", tab[1][0],tab[1][1],tab[1][2]);
	printf("   ___|___|___\n");
	printf("      |   |   \n");
	printf("2   %c | %c | %c \n", tab[2][0],tab[2][1],tab[2][2]);
	printf("      |   |   \n\n\n");
}

void jogadorX(char p_jogador[60]){
	int linha = 0, coluna = 0, x = 0;
	
	while (x == 0) {
		printf("%s, informe a linha e a coluna da jogada: ", p_jogador);
		
		printf("\nLinha: ");
		fflush(stdin);
		scanf("%d", &linha);
		
		printf("Coluna: ");
		fflush(stdin);
		scanf("%d", &coluna);
		
		x = validador(linha, coluna);
	}
	
	tab[linha][coluna] = 'X';
	
	vencedor();
}

void jogadorO(char p_jogador[60]){
	int linha = 0, coluna = 0, x = 0, y = 0;
	
	while (x == 0) {
		printf("%s, informe a linha e a coluna da jogada: ", p_jogador);
		
		printf("\nLinha: ");
		fflush(stdin);
		scanf("%d", &linha);
		
		printf("Coluna: ");
		fflush(stdin);
		scanf("%d", &coluna);
		
		x = validador(linha, coluna);
	}
	tab[linha][coluna] = 'O';
	
	y = vencedor();
	if (y == 1) {
		printf("%s venceu.", p_)
	}
}

int validador(int p_linha, int p_coluna){
	
	if(tab[p_linha][p_coluna] == 'X' || tab[p_linha][p_coluna] == 'O' ) {
		printf("\nLugar ocupado. ");
		return(0);
	} else {
		if (p_linha > 2 || p_coluna > 2 || p_linha < 0 || p_coluna < 0) {
			printf("Valor incorreto. ");
			return(0);
		} else {
			return(1);
		}

	}

	
	
}

void vencedor(){
	if (tab[0][0] == tab[0][1] && tab[0][1] == tab[0][2] || 
		tab[1][0] == tab[1][1] && tab[1][1] == tab[1][2] ||  
		tab[2][0] == tab[2][1] && tab[2][1] == tab[2][2] ||
		tab[0][0] == tab[1][0] && tab[1][0] == tab[2][0] ||
		tab[0][1] == tab[1][1] && tab[1][1] == tab[2][1] ||
		tab[0][2] == tab[1][2] && tab[1][2] == tab[2][2] ||
		tab[0][0] == tab[1][1] && tab[1][1] == tab[2][2] ||
		tab[0][2] == tab[1][1] && tab[1][1] == tab[2][0]) {
			printf("fulano ganho")
		
	}
	
}

void zerarmatriz(){
	
	int l, c;
	
	for(l=0; l<3; l++){
		for(c=0; c<3; c++){
				
			tab[l][c]=0;
		}
	}
}



