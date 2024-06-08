#include <iostream>
#include <time.h>

int handPlayer, handMachine, valuePlayer, valueMachine;
int sumHand, novoGame=1;

int main() {
    printf("\n Olá Bem-Vindo(a) ao jogo Impar ou Par");
    getchar();

    do {
        printf("\n Escolha sua mão: [0]Impar [1]Par: ");
        scanf("%d", &handPlayer);

        if (handPlayer == 0){
            printf("\n > Sua mão e Impar < \n");
                printf("\n Escolha um numero: ");
                scanf("%d", &valuePlayer);
        } else if (handPlayer == 1) {
            printf("\n > Sua mão e Par < \n");
                printf("\n Escolha um numero: ");
                scanf("%d", &valuePlayer);
        } else {
            printf("\n Sua escolha e invalida \n");
            return main();
        }
        srand(time(0));
        valueMachine = rand() % 20 + 1;
        handMachine = (handPlayer == 0) ? 1:0;

        sumHand = valuePlayer + valueMachine;
        if (sumHand % 2 == handPlayer){
            printf("\n Sua mão Ganhou!! \n");
            printf("\n A mão da maquina escolheu!!, Numero: %d", valueMachine);
        } else {
            printf("\n A mão da maquina Ganhou!!, Numero: %d", valueMachine);
        }
        printf("\n Vamos jogar novamente? [1]Sim [0]Não: ");
        scanf("%d", &novoGame);
    } while(novoGame == 1);

    return 0;
}