#include <stdio.h>

int main(){

    int numero1 = 1, numero2 = 2;
    int resultado = 10;

    // resultado = resultado + numero1
    resultado += numero1;
    printf("resultado: %d\n", resultado);

    // resultado = resultado - numero2
    resultado -= numero2;
    printf("resultado: %d\n", resultado);

    // resultado = resultado * numero2
    resultado *= numero2;
    printf("resultado: %d\n", resultado);

    // resultado = resultado * numero2
    resultado /= numero2;
    printf("resultado: %d\n", resultado);
    return 0;
}