#include <stdio.h> 

int main(){
    int variavel;


    printf("Digite um número: ");
    scanf("%i", &variavel);

    switch (variavel){
    case 1:
        printf("Escolheu o 1");
    break;
    
    case 2:
        printf("Escolheu o 2");
    break;

    case 3:
        printf("Escolheu o 3");
    break;
    
    default:
        printf("Não escolheu nenhum ");
    break;
    }
}