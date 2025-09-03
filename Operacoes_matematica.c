#include <stdio.h>

int main(){

    int numero1, numero2;
    int soma, divisao, multiplicacao, subtracao;

    printf("Entre com o número 1\n");
    scanf("%d", &numero1);
    printf("Entre com o número 2\n");
    scanf("%d", &numero2);

    //operação soma
    soma = numero1 + numero2;

    //operação subtração
    divisao = numero1 / numero2;

    //operação multiplicação
    multiplicacao = numero1 * numero2;
    
    //operação subtração
    subtracao = numero1 - numero2;

    printf("Soma: %d\n", soma);
    printf("Divisão: %d\n", divisao);
    printf("Multiplicação: %d\n", multiplicacao);
    printf("Subtração: %d\n", subtracao);

}