
#include <stdio.h>
#include <string.h>
 int div4b(int ano){
        int div4;
        if(ano%4==0){
            div4=1;
        }
        return div4;
    }
    int div100b(int ano){
        int div100;
    if(ano%100==0){
            div100=1;
        }
        return div100;
    }
    int div400b(int ano){
        int div400;
        if(ano%400==0){
            div400=1;
        }
        return div400;
    }
int main()
{
     int boleano=1,ret,RET,reT,Ret,ano,div4,div100,div400;
     char novamente[4];
     while(boleano==1){
         printf("Vamos calcular se o ano é bissexto! Informe um ano:\n");
         scanf("%d", &ano);
         div4=div4b(ano);
         div100=div100b(ano);
         div400=div400b(ano);
         if (div4==1 && !(div100==1)){
            printf("E ano bissexto!\n");
         } else if(div4==1 && div400==1){
            printf("E ano bissexto!\n");
         }else {
             printf("Nao é ano bissexto\n");
         }
         printf("Quer calcular novamente?[S/N]\n");
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