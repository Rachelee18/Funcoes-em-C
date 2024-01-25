#include <stdio.h>
int fatorial(int n);
int main() {
 
    int n,N;
    scanf("%d",&n);
    N = fatorial(n);
    printf("%d\n",N);
    return 0;
}
int fatorial(int n){
    int N;
    N = n;
    for(n = n - 1 ; n > 1 ; --n){
        N = N * n;
    }
    return N;
}