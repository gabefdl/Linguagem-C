#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int opcao;
    int numerosecreto, palpite;

    printf("Menu Principal!\n");
    printf("1. Iniciar Jogo!\n");
    printf("2. Ver Regras\n");
    printf("3. Sair do Jogo\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    switch (opcao){
        case 1: 
          srand(time(0));
          numerosecreto = rand() % 10;
          printf("Digite um número de 0 a 9: ");
          scanf("%d", palpite);

          if (numerosecreto == palpite){
            printf("Você acertou!\n");
            printf("O número secreto era %d", numerosecreto);
          } else {
            printf("Você errou!\n");
            printf("O número secreto era %d", numerosecreto);
          }
        break;

        case 2: 
          printf("As regras são as seguintes: ...");
        break;

        case 3: 
          printf("Encerrando o jogo");
        break;
    }

}