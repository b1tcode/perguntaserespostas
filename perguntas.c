#include <stdio.h>

int main() {
    int a = 10;
    int b = 5;
    int soma = a + b;
    int subtracao = a - b;
    int multiplicacao = a * b;
    float divisao = (float)a / b;
    
    printf("A soma de %d e %d é %d\n", a, b, soma);
    printf("A subtração de %d e %d é %d\n", a, b, subtracao);
    printf("A multiplicação de %d e %d é %d\n", a, b, multiplicacao);
    printf("A divisão de %d por %d é %.2f\n", a, b, divisao);
    
    return 0;
}
