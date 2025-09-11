#include <stdio.h>

int main() {
    int a = 10;
    int b = 3;
    int soma_int = a + b;
    int diferenca_int = a - b;
    int produto_int = a * b;
    int quociente_int = a / b; // Note que a divisão de inteiros resulta em número inteiro

    printf("Soma: %d\n", soma_int);
    printf("Diferença: %d\n", diferenca_int);
    printf("Produto: %d\n", produto_int);
    printf("Quociente: %d\n", quociente_int);

    float x = 5.5;
    float y = 2.2;
    float soma_float = x + y;
    float diferenca_float = x - y;
    float produto_float = x * y;
    float quociente_float = x / y; // Note que a divisão de inteiros resulta em número inteiro

    printf("Soma: %d\n", soma_float);
    printf("Diferença: %d\n", diferenca_float);
    printf("Produto: %d\n", produto_float);
    printf("Quociente: %d\n", quociente_float);

    return 0;



}