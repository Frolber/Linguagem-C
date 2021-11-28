#include <stdio.h>
#include <locale.h>
#include <unistd.h>

int main(){

	setlocale(LC_ALL, "");
	
	//imprime o cabe�alho do jogo:
	printf("*******************************************\n");
	printf("* Bem-vindo ao nosso jogo de adivinha��o! *\n");
	printf("*******************************************\n");

	int numerosecreto = 42;

	int chute;
	int venceu = 0;
	int tentativas = 0;


	//Esse while � loop para que o jogador n�o tenha limites de chances at� acertar o n�mero secreto:
	while(venceu == 0){
		printf("Tentativa N� %d no momento\n", tentativas + 1);
		printf("Tu sabe qual � o n�mero que o jogo pensou?");
		scanf("%d", &chute);

		//Quando o jogador tentar colocar n�mero negativo:

		if (chute < 0){
			printf("Amigue, tudo n�o pode chutar com n�meros negativos.\n");
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
			printf("Adivinhou com %d tentativas!\n", tentativas+1);
			printf("Quer jogar mais uma vez?\n");
			venceu = 1;
			
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
			tentativas = tentativas+1;
		}
	}
	printf("Fim de jogo!!\n");
	system("pause");
}

