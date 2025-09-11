#include <stdio.h>

int main() {

    //Operações com Números Inteiros
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

    // Operações com Números float
    float x = 5.5;
    float y = 2.2;
    float soma_float = x + y;
    float diferenca_float = x - y;
    float produto_float = x * y;
    float quociente_float = x / y; // Note que a divisão de inteiros resulta em número inteiro

    printf("Soma: %.2f\n", soma_float);
    printf("Diferença: %.2f\n", diferenca_float);
    printf("Produto: %.2f\n", produto_float);
    printf("Quociente: %.2f\n", quociente_float);

    // Conversão implicita
    int c = 10;
    float d = 3.5;
    float resultado = c + d; // "c" é convertido implicitamente para float

    printf("Resultado: %.2f\n", resultado);

    //Conversão Explicita
    int e = 10;
    int f = 3;
    float quociente_conv = (float) e / f; // 'f' é explicitamente convrtido para float

    printf("Quociente: %.2f\n", quociente_conv);

    return 0;
}