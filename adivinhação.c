
#include <stdio.h>
#include <locale.h>

int main(){

	setlocale(LC_ALL, "");
	
	//imprime o cabeçalho do jogo:
	printf("*******************************************\n");
	printf("* Bem-vindo ao nosso jogo de adivinhação! *\n");
	printf("*******************************************\n");

	int numerosecreto = 42;

	int chute;

	printf("Tu sabe qual é o número que o jogo pensou?");
	scanf("%d", &chute);
	printf("Então tu acha que o número que jogo tem guardado é %d?", chute);
}
