#include <stdio.h>

float calcularAtividades(int natp, int natf) {
    return ((float)natf / natp) * 10;
}

float calcularBimestre(float avs, float avp, float natv) {
    return (avs + avp + natv) / 3;
}

float calcularMediaFinal(float b1, float b2, float b3, float b4) {
    return (b1 * 2 + b2 * 3 + b3 * 2 + b4 * 3) / 10;
}

int main() {
    float b1, b2, b3, b4, avs, avp, natv, mfinal;
    int natf, natp;

    for (int c = 1; c <= 4; c++) {
        printf("Informe as notas de atividades do %dº bimestre:\nAvaliação escrita:\n", c);
        scanf("%f", &avs);
        printf("Avaliação prática:\n");
        scanf("%f", &avp);
        printf("Número de atividades propostas:\n");
        scanf("%d", &natp);
        printf("Número de atividades feitas:\n");
        scanf("%d", &natf);

        natv = calcularAtividades(natp, natf);

        switch (c) {
            case 1:
                b1 = calcularBimestre(avs, avp, natv);
                break;
            case 2:
                b2 = calcularBimestre(avs, avp, natv);
                break;
            case 3:
                b3 = calcularBimestre(avs, avp, natv);
                break;
            case 4:
                b4 = calcularBimestre(avs, avp, natv);
                break;
        }
    }

    mfinal = calcularMediaFinal(b1, b2, b3, b4);

    printf("Médias bimestrais:\nPrimeiro bimestre: %.2f\nSegundo bimestre: %.2f\nTerceiro bimestre: %.2f\nQuarto bimestre: %.2f\nMédia final: %.2f\n", b1, b2, b3, b4, mfinal);

    return 0;
}
