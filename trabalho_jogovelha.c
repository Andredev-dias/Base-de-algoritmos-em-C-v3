#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>


void mostra_velha();                 /* mostra o status atual do jogo na tela */
int jogadorX(char p_jogador[60]);
int jogadorO(char p_jogador[60]);
int vencedor();
int validador(int p_linha, int p_coluna);
void zerarmatriz();


char tab[3][3];                     /* Matriz de escopo GLOBAL para armazenamento das jogadas do jogo */


int main(){
	
	setlocale(LC_ALL, "");
	char jogadorx[60];
	char jogadoro[60];
	int cont, check = 0;
	
	zerarmatriz();
	
	printf("Informe o nome do jogador 1 (X): ");
	fflush(stdin);
	gets(jogadorx);
	
	printf("Informe o nome do jogador 2 (O): ");
	fflush(stdin);
	gets(jogadoro);


	mostra_velha();	

	for (cont=0; cont < 5; cont++){
		
		check = jogadorX(jogadorx);
		
		if (cont == 4 || check == 1) {
			break;			
		}
		
		check = jogadorO(jogadoro);
		
		if (check == 1) {
			break;
			
		}
	}
	
	if (check == 0) {
		printf("O jogo empatou.");
	}
	
		
		
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

int jogadorX(char p_jogador[60]){
	int linha = 0, coluna = 0, x = 0, check = 0;
	
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
	
	mostra_velha();	
	
	check = vencedor();
	if (check == 1) {
		printf("%s venceu o jogo.", p_jogador);
		return(1);
	} 
	else {
		return(0);
	}
}

int jogadorO(char p_jogador[60]){
	int linha = 0, coluna = 0, x = 0, check = 0;
	
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
	
	mostra_velha();	
	
	check = vencedor();
	if (check == 1) {
		printf("%s venceu o jogo.", p_jogador);
		return(1);
	} 
	else {
		return(0);
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

int vencedor(){
	if (tab[0][0] == tab[0][1] && tab[0][1] == tab[0][2] &&  tab[0][2] != 0 || 
		tab[1][0] == tab[1][1] && tab[1][1] == tab[1][2] &&  tab[1][2] != 0 ||  
		tab[2][0] == tab[2][1] && tab[2][1] == tab[2][2] &&  tab[2][2] != 0 ||
		tab[0][0] == tab[1][0] && tab[1][0] == tab[2][0] &&  tab[2][0] != 0 ||
		tab[0][1] == tab[1][1] && tab[1][1] == tab[2][1] &&  tab[2][1] != 0 ||
		tab[0][2] == tab[1][2] && tab[1][2] == tab[2][2] &&  tab[2][2] != 0 ||
		tab[0][0] == tab[1][1] && tab[1][1] == tab[2][2] &&  tab[2][2] != 0 ||
		tab[0][2] == tab[1][1] && tab[1][1] == tab[2][0] &&  tab[2][0] != 0)  {
			return(1);
			
	}
	else {
		return(0);
	}
	
}

void zerarmatriz(){
	
	int l =0, c=0, cont=0;
	
	for(l=0; l<3; l++){
		for(c=0; c<3; c++){
				
			tab[l][c]= 0;

		}
	}
}



