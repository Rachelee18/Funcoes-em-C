#include <stdio.h>
#include <string.h>

int ehPalindromo(char frase[]) {
    int n = strlen(frase) - 1;
    for (int c = 0; c < n; c++) {
        if (!(frase[c] == frase[n])) {
            return 0;
        }
        n -= 1;
    }
    return 1;
}

int main() {
    char frase[128];
    printf("Sou um verificador de palíndromos\nEscreva uma sentença que direi se é um palíndromo ou não!\n");
    scanf(" %[^\n]", frase);

    if (ehPalindromo(frase)) {
        printf("É palíndromo\n");
    } else {
        printf("Não é palíndromo\n");
    }

    return 0;
}
