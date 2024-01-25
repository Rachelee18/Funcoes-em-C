#include <stdio.h>
int main()
{
    int n;
    printf("Separe números pares e impares! Quantos numeros voce quer separar?\n");
    scanf("%d",&n);
    int numeros[n],par[n],impar[n];
    for (int c=0;c<n;c++){
        scanf ("%d",&numeros[c]);
    }
   
    for (int c=0;c<n;c++){
        if (numeros[c]%2==0){
          printf(" %d ",numeros[c]);  
        }
        if (c==n-1){
            printf("|");
        }
    }
    for (int c=0;c<n;c++){
        if (numeros[c]%2==1){
            printf(" %d ",numeros[c]);
        }
    }
    return 0;
}