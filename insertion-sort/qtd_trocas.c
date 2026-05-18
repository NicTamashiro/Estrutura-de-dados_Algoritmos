#include <stdio.h>

int ordenar(int *arr, int n){
    int contador = 0;

    for(int i = 1; i < n; i++){
        int temp = arr[i];
        int j = i - 1;

        while(j >= 0 && arr[j] > temp){
            arr[j + 1] = arr[j];
            j--;
            contador++;
        }
        arr[j + 1] = temp;
    }
    return contador;
}

int main(){

    int arr[] = {3,1,5,4,9,7};

    int tamanho = sizeof(arr) / sizeof(arr[0]);

    int qtd = ordenar(arr, tamanho);

    printf("%d", qtd);

    return 0;
}