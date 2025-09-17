#include <stdio.h>

int main() {
    int numerosinal = 3000000000; //Este valor escede o limite de um int normal
    unsigned int numerosemsinal = 3000000000;

    printf("Número com sinal: %d\n", numerosinal);
    printf("Número sem sinal %u\n", numerosemsinal);

    int numeronormal = 2147483647; //Valor maximo do int
    long long int numerogrande = 2147483647;

    printf("Número regular (int): %d\n", numeronormal);
    printf("Número grande (long int): %lld\n", numerogrande);

    long int numerogrande = 2147483648;
    printf("Número grande atualizado (long it): %lld\n", numerogrande);

    return 0;


}