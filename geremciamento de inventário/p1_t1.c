#include <stdio.h>

int main(){

    // CADASTRANDO PRODUTOS
    char produtoA[30] = "Produto A";
    char produtoB[30] = "Produto B";



    unsigned int estoqueA = 1000;
    unsigned int estoqueB = 2000;

    float valorA = 10.50;
    float valorB = 20.40;

    unsigned int estoqueminimoA = 500;
    unsigned int estoqueminimoB = 2500;

    double valortotalA;
    double valortotalB;

    // EXIBINDO RESULTADOS
    printf("Produto %s tem em estoque %u unidades e o valor unitário é R$%.2f\n", produtoA, estoqueA, valorA);
    printf("Produto %s tem em estoque %u unidades e o valor unitário é R$%.2f\n", produtoB, estoqueB, valorB);

    // COMPARANDO VALORES
    int resultadoA = estoqueA > estoqueminimoA;
    int resultadoB = estoqueB > estoqueminimoB;

    printf("O %s tem o estoque minimo: %d\n", produtoA, resultadoA);
    printf("O %s tem o estoque minimo: %d\n", produtoB, resultadoB);

    printf("O %s tem %u unidades e o valor total alcançado é R$%.2f\n", produtoA, estoqueA, estoqueA * valorA);
    printf("O %s tem %u unidades e o valor total alcançado é R$%.2f\n", produtoB, estoqueB, estoqueB * valorB);

    printf("O %s com R$%.2f arrecadou mais que o %s com R$%.2f: %d", produtoA, (estoqueA * valorA), produtoB, (estoqueB * valorB), (estoqueA * valorA > estoqueB * valorB));


}