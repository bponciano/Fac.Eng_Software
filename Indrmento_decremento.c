#include <stdio.h>

int main() {
/*
Incremento (++)
Pré Incremento ++a
Decremendot (--)
Pré Decremento --a
Pós Decremento a--
*/

int numero1 = 1, resultado;

printf("Antes do incremento: %d\n", numero1);

// numero1 = numero1 + 1;

numero1++;
printf("Após incremento: %d\n", numero1);

numero1--;
printf("Após decremento: %d\n", numero1);

//Pós incremento
//resultado = numero1;
//numero++;
resultado = numero1++;
printf("Após Pós incremento - Numero 1: %d - Resultado %d\n", numero1, resultado);

//Pre incremento
//numero1++;
//rusultado = numero1;
resultado = ++numero1;
printf("Após Pre incremento - Numero 1: %d - Resultado %d\n", numero1, resultado);
}