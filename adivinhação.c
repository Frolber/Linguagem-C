
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

	for(int i = 1; i <=3; i++){
		printf("Tu sabe qual � o n�mero que o jogo pensou?");
		scanf("%d", &chute);
		printf("Ent�o tu acha que o n�mero que jogo tem guardado � %d?\n", chute);
		system("pause");
		printf("Vou ver ser � verdade...\n");
		sleep(3);

		//Verifica��o se o jogador adivinhou o n�mero secreto:

		if(chute == numerosecreto){
			printf("Parab�ns!! Tu acertou o n�mero que o jogo pensou!\n");
			printf("Quer jogar mais uma vez?\n");
			system("pause");
		}
		else{
			printf("Hmmm... Voc� errou o n�mero que jogo pensou...\n");
			printf("Mas n�o desanime. Tente de novo!\n");

			if (chute > numerosecreto){
				printf("Dica: o seu chute foi maior que o n�mero pensado pelo jogo.\n");
			}

			if (chute < numerosecreto){
				printf("Dica: o seu chute foi menor que o n�mero pensado pelo jogo.\n");
			}
			system("pause");
		}
	}
}
