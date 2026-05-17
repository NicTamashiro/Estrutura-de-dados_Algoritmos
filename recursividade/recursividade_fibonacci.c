#include <stdio.h>

int fibonacci(int n){
    if(n == 1){
        return 0;
    } else if(n == 2){
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main(){

    int n;

    printf("Digite a posicao do fibonacci que voce quer saber: ");
    scanf("%d", &n);
    int fib = fibonacci(n);
    printf("%d", fib);

    return 0;
}


// 0 1 1 2 3 5 8 13 21 34 55
