#include <stdio.h>

float calcularJurosSimples(float C, float I, float T) {
    return (C * I * T) / 100;
}

int main() {
    float C, I, T, M;

    printf("Sou uma calculadora de juros simples!\nCapital inicial:\n");
    scanf("%f", &C);

    printf("Taxa de juros:\n");
    scanf("%f", &I);

    printf("Período:\n");
    scanf("%f", &T);

    M = calcularJurosSimples(C, I, T);

    printf("O montante final é %.2f", M);

    return 0;
}
