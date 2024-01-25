
#include <stdio.h>
int resultado(int N);

int main()
{
    int N,boleano;
    scanf("%d",&N);
    boleano = resultado(N);
    if (boleano == 1){
        printf("Nao é primo.\n");
    } else{
        printf("Primo.\n");
    }
}
int resultado(int N){
    int cont,boleano;
    for(int c = 1 ; c < N ; c++){
        if(N % c == 0){
            cont += 1;
        }
    }
if(cont > 1){
   boleano = 1;
}
return boleano;
}