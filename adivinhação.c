
#include <stdio.h>
#include <locale.h>

int main(){

	setlocale(LC_ALL, "");
	
	//imprime o cabe�alho do jogo:
	printf("*******************************************\n");
	printf("* Bem-vindo ao nosso jogo de adivinha��o! *\n");
	printf("*******************************************\n");

	int numerosecreto = 42;

	int chute;

	printf("Tu sabe qual � o n�mero que o jogo pensou?");
	scanf("%d", &chute);
	printf("Ent�o tu acha que o n�mero que jogo tem guardado � %d?", chute);
}
