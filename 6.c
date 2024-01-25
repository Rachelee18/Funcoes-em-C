#include <stdio.h>

int main() {
    char senha[50];
    int bole1 = 0, bole2 = 0, bole3 = 0, bole4 = 0, bole5 = 0;

    fgets(senha, sizeof(senha), stdin);

    for (int c = 0; senha[c] != '\0'; c++) {
        if (senha[c] >= 'a' && senha[c] <= 'z') bole2 = 1;
        else if (senha[c] >= 'A' && senha[c] <= 'Z') bole3 = 1;
        else if (senha[c] >= '0' && senha[c] <= '9') bole4 = 1;
        else if ((senha[c] >= 32 && senha[c] <= 47) || (senha[c] >= 58 && senha[c] <= 64) || (senha[c] >= 91 && senha[c] <= 96) || (senha[c] >= 123 && senha[c] <= 126)) bole5 = 1;
    }

    if (bole1 + bole2 + bole3 + bole4 + bole5 == 5) {
        printf("Senha valida\n");
    } else {
        printf("Senha invalida\n");
    }

    return 0;
}
