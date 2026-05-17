#include <stdio.h>

int soma(int *arr, int n){
    if(n == 0) return 0;

    return arr[0] + soma(arr + 1, n - 1);
}

int main(){

    int arr[] = {1,3,5,7,8};
    int tamanho = sizeof(arr) / sizeof(arr[0]);

    int resultado = soma(arr, tamanho);
    printf("%d", resultado);

    return 0;
}

/*

1 + soma({2,4,8}, 3)
1 + 2 + soma({4,8}, 2)
1 + 2 + 4 + soma({8}, 1)
1 + 2 + 4 + 8 + soma({}, 0)
1 + 2 + 4 + 8 + 0
= 15                

*/