
#include <stdio.h>
#include <string.h>
int main()
{
    char tudo[127],frase[300];
    int cont[127]={0};
    for (int c=33;c<=126;c++){
        tudo[c]=c;
    }
    fgets(frase,sizeof(frase),stdin);
    
    for (int c=0;c<strlen(frase);c++){
        for (int i=33;i<=126;i++){
            if (frase[c]==tudo[i]){
                cont[i]=cont[i]+1;
            }
        }
    }
    for (int c=33;c<=126;c++){
        printf("%c | %d\n",tudo[c],cont[c]);
    }
    return 0;
}