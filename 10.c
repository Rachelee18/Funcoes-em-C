
#include <stdio.h>

int main()
{
    int menor,maior,valor,contador=0;
    printf("Digite valores, no fim (quando um valor negativo for digitado) direi qual o maior e menor.\n");

    do{
        scanf("%d",&valor);
        if (contador==0 && (valor>=0)){
            maior=valor;
            menor=valor;
        }
        if(valor>maior && (valor>=0)){
            maior=valor;
        }
        if(valor<menor && (valor>=0)){
            menor=valor;
        }
        contador+=1;
    }while(valor>=0);
    
    if(contador==1){
        printf("O unico valor digitado foi %d", valor);
    } else{
    printf("O maior valor digitado foi %d e o menor valor foi %d", maior, menor);
    }
    return 0;
}