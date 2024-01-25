
#include <stdio.h>
#include <string.h>
int main()
{   
    int boleano=1, n, ret, RET, Ret, reT;
    char novamente[4];
    printf("Calculadora de quadrado:\n");
    while(boleano==1){
        printf("Digite um numero:");
        scanf("%d",&n);
        fflush(stdin);
        n=n*n;
        
        printf("Resultado = %d\n",n);
        printf("Deseja fazer outro calculo?[S/N]\n");
        scanf("%s",novamente);
        
         fflush(stdin);
         ret=strcmp(novamente,"Nao");
         RET=strcmp(novamente,"nao");
         Ret=strcmp(novamente,"N");
         reT=strcmp(novamente,"NAO");
         
        if (ret==0 || RET==0||Ret==0||reT==0){
            boleano=0;
        }
    }
    return 0;
}