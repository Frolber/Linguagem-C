#include <stdio.h>
#include <locale.h>
#include <unistd.h>

#define NUMEROS_DE_TENTATIVAS 5

int main(){

	setlocale(LC_ALL, "");
	
	//imprime o cabe�alho do jogo:
	printf("*******************************************\n");
	printf("* Bem-vindo ao nosso jogo de adivinha��o! *\n");
	printf("*******************************************\n");

	int numerosecreto = 42;

	int chute;

	//Esse for � loop para que o jogador tenha s� X chances para acertar o n�mero secreto:
	for(int i = 1; i <=NUMEROS_DE_TENTATIVAS; i++){
		printf("Sua %d tentativa de %d no momento\n", i, NUMEROS_DE_TENTATIVAS);
		printf("Tu sabe qual � o n�mero que o jogo pensou?");
		scanf("%d", &chute);

		//Quando o jogador tentar colocar n�mero negativo:

		if (chute < 0){
			printf("Amigue, tudo n�o pode chutar com n�meros negativos.\n");
			i--;
			continue;
		}

		//Continua��o do loop:

		printf("Ent�o tu acha que o n�mero que jogo tem guardado � %d?\n", chute);
		system("pause");
		printf("Vou ver ser � verdade...\n");
		sleep(2);

		//Verifica��o se o jogador adivinhou o n�mero secreto:

		int acertou = (chute == numerosecreto);
		int chutemaior = (chute > numerosecreto);
		int chutemenor = (chute < numerosecreto);

		if(acertou){
			printf("Parab�ns!! Tu acertou o n�mero que o jogo pensou!\n");
			printf("Quer jogar mais uma vez?\n");
			break;
		}
		else{
			printf("Hmmm... Voc� errou o n�mero que jogo pensou...\n");
			printf("Mas n�o desanime. Tente de novo!\n");

		
			if (chutemaior){
				printf("Dica: o seu chute foi maior que o n�mero pensado pelo jogo.\n");
			}

			else if (chutemenor){
				printf("Dica: o seu chute foi menor que o n�mero pensado pelo jogo.\n");
			}		
		}
	}
	printf("Fim de jogo!!\n");
	system("pause");
}

