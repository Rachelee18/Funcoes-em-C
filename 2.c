#include <stdio.h>
#include <string.h>
int paridade(char c);
int main()
{
    char stringnumero[100];
    char ultimodigito;
    int boleano;
    printf("Olá, verificarei se o número que você me informou é par ou impar:\n");
    scanf("%s",stringnumero);
    ultimodigito=stringnumero[strlen(stringnumero)-1];
    boleano=paridade(stringnumero[strlen(stringnumero)-1]);
    if (boleano==1) {
        printf("Numero par.\n");
    } else {
        printf("Numero ímpar.\n");
    }
}

int paridade(char ultimodigito){
    int boleano;
     if (ultimodigito == '0' || ultimodigito == '2' || ultimodigito == '4' || ultimodigito == '6' || ultimodigito == '8') {
        boleano=1;
    } else {
        int boleano=0;
    }
    return boleano;
}