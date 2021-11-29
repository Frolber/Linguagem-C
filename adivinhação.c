#include <stdio.h>
#include <locale.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>

int main(){

	setlocale(LC_ALL, "");

	//imprime o cabeçalho do jogo:
	printf("*******************************************\n");
	printf("* Bem-vindo ao nosso jogo de adivinhação! *\n");
	printf("*******************************************\n");

	int segundos = time(0);
	srand(segundos);

	int numeroaleatorio = rand();

	int numerosecreto = numeroaleatorio % 100;

	int chute;
	int tentativas = 1;

	double pontuacao = 1000;


	//Esse while é loop para que o jogador não tenha limites de chances até acertar o número secreto:
	while(1){
		printf("Tentativa Nº %d no momento\n", tentativas);
		printf("Tu sabe qual é o número que o jogo pensou?");
		scanf("%d", &chute);

		//Quando o jogador tentar colocar número negativo:

		if (chute < 0){
			printf("Amigue, tudo não pode chutar com números negativos.\n");
			continue;
		}

		//Continuação do loop:

		printf("Então tu acha que o número que jogo tem guardado é %d?\n", chute);
		system("pause");
		printf("Vou ver ser é verdade...\n");
		sleep(2);

		//Verificação se o jogador adivinhou o número secreto:

		int acertou = (chute == numerosecreto);
		int chutemaior = (chute > numerosecreto);
		int chutemenor = (chute < numerosecreto);

		if(acertou){
			printf("Parabéns!! Tu acertou o número que o jogo pensou!\n");
			printf("Adivinhou com %d tentativas!\n", tentativas);
			printf("Quer jogar mais uma vez?\n");
			break;
			
		}
		else{
			printf("Hmmm... Você errou o número que jogo pensou...\n");
			printf("Mas não desanime. Tente de novo!\n");

		
			if (chutemaior){
				printf("Dica: o seu chute foi maior que o número pensado pelo jogo.\n");
			}

			else if (chutemenor){
				printf("Dica: o seu chute foi menor que o número pensado pelo jogo.\n");
			}		
			tentativas++;

			double pontosperdidos = abs(chute - numerosecreto) / (double)2;
			pontuacao = pontuacao - pontosperdidos;
		}
	}
	printf("Fim de jogo!!\n");
	printf("Pontuação desse jogo foi de %.2f\n", pontuacao);
	system("pause");
}

