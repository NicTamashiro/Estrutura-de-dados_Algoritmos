#include <stdio.h>

int fatorial(int n){
    if (n == 1){
        return 1;
    }
    return fatorial(n - 1) * n;
}

int main(){
    int n;

    printf("Digite o numero que voce quer saber o fatorial: ");
    scanf("%d", &n);
    int fat = fatorial(n);
    printf("%d", fat);

    return 0;
}

