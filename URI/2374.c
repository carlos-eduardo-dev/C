#include <stdio.h>
 
int main() {
    
    int N, M;
    
    scanf("%d", &N);
    
    if(N >= 1 && N <= 40) {
        scanf("%d", &M);
        if(M >= 1 && M <= 40){
            printf("%d\n", N - M);    
        }
    }
 
    return (0);
}