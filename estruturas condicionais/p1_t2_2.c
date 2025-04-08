#include <stdio.h>

int main(){
    float temperatura, umidade;
    unsigned int estoque;
    unsigned int estoqueminimo = 100;

    printf("Dê o valor da temperatura: \n");
    scanf("%f", &temperatura);
    printf("Dê o valor da umidade: \n");
    scanf("%f", &umidade);
    printf("Dê o valor do estoque: \n");
    scanf("%u", &estoque);

    if (temperatura > 30) {
        printf("A temperatura está alta \n");
    } else {
        printf("A temperatura está idela \n");
    }
    
    if (umidade > 50){
        printf("Umidade elevada \n");
    } else {
        printf("Umidade dentro do parâmetro \n");
    }

    if (estoque < estoqueminimo) {
        printf("Estoque abaixo do minimo \n");
    } else {
        printf("Estoque normal \n");
    }

}