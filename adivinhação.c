
#include <stdio.h>
#include <locale.h>
#include <unistd.h>

#define NUMEROS_DE_TENTATIVAS 5

int main(){

	setlocale(LC_ALL, "");
	
	//imprime o cabeçalho do jogo:
	printf("*******************************************\n");
	printf("* Bem-vindo ao nosso jogo de adivinhação! *\n");
	printf("*******************************************\n");

	int numerosecreto = 42;

	int chute;

	//Esse for é loop para que o jogador tenha só três chances para acertar o número secreto:
	for(int i = 1; i <=NUMEROS_DE_TENTATIVAS; i++){
		printf("Sua %d tentativa de %d no momento\n", i, NUMEROS_DE_TENTATIVAS);
		printf("Tu sabe qual é o número que o jogo pensou?");
		scanf("%d", &chute);
		printf("Então tu acha que o número que jogo tem guardado é %d?\n", chute);
		system("pause");
		printf("Vou ver ser é verdade...\n");
		sleep(2);

		//Verificação se o jogador adivinhou o número secreto:

		int acertou = (chute == numerosecreto);

		if(acertou){
			printf("Parabéns!! Tu acertou o número que o jogo pensou!\n");
			printf("Quer jogar mais uma vez?\n");
			break;
		}
		else{
			printf("Hmmm... Você errou o número que jogo pensou...\n");
			printf("Mas não desanime. Tente de novo!\n");

			int chutemaior = (chute > numerosecreto);

			if (chutemaior){
				printf("Dica: o seu chute foi maior que o número pensado pelo jogo.\n");
			}

			int chutemenor = (chute < numerosecreto);

			if (chutemenor){
				printf("Dica: o seu chute foi menor que o número pensado pelo jogo.\n");
			}		
		}
	}
	printf("Fim de jogo!!\n");
	system("pause");
}

