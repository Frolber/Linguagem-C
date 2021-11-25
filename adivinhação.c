
#include <stdio.h>
#include <locale.h>
#include <unistd.h>

int main(){

	setlocale(LC_ALL, "");
	
	//imprime o cabeçalho do jogo:
	printf("*******************************************\n");
	printf("* Bem-vindo ao nosso jogo de adivinhação! *\n");
	printf("*******************************************\n");

	int numerosecreto = 42;

	int chute;

	for(int i = 1; i <=3; i++){
		printf("Tu sabe qual é o número que o jogo pensou?");
		scanf("%d", &chute);
		printf("Então tu acha que o número que jogo tem guardado é %d?\n", chute);
		system("pause");
		printf("Vou ver ser é verdade...\n");
		sleep(3);

		//Verificação se o jogador adivinhou o número secreto:

		if(chute == numerosecreto){
			printf("Parabéns!! Tu acertou o número que o jogo pensou!\n");
			printf("Quer jogar mais uma vez?\n");
			system("pause");
		}
		else{
			printf("Hmmm... Você errou o número que jogo pensou...\n");
			printf("Mas não desanime. Tente de novo!\n");

			if (chute > numerosecreto){
				printf("Dica: o seu chute foi maior que o número pensado pelo jogo.\n");
			}

			if (chute < numerosecreto){
				printf("Dica: o seu chute foi menor que o número pensado pelo jogo.\n");
			}
			system("pause");
		}
	}
}
