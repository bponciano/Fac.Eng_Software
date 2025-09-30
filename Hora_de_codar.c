#include <stdio.h>

int main(){
    char produtoA[30] = "Produto A";
    char produtoB[30] = "Produto B";

    unsigned int estoqueA = 1000;
    unsigned int estoqueB = 2000;

    float valorA = 10.50;
    float valorB = 20.40;

    unsigned int est_min_a = 500;
    unsigned int est_min_b = 2500;

    double valortotalA;
    double valortotalB;

    int resultadoA;
    int resultadoB;

    printf("Produto %s tem estoque %u e valor unitario e R$ %.2f\n", produtoA, estoqueA, valorA);
    printf("Produto %s tem estoque %u e valor unitario e R$ %.2f\n", produtoB, estoqueB, valorB);

    resultadoA = estoqueA > est_min_a;
    resultadoB = estoqueB > est_min_b;

    printf("O produto %s tem o estoque minimo %d\n", produtoA,resultadoA);
    printf("O produto %s tem o estoque minimo %d\n", produtoB,resultadoB);

    printf("O valor total de A (R$ %.2f) é maior que o valor total de B (R$ %.2f): %d\n", (estoqueA*valorA),(estoqueB*valorB),(estoqueA*valorA)>(estoqueB*valorB));

}