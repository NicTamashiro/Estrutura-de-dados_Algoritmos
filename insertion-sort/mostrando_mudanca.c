#include <stdio.h>

void imprimir_mudanca(int *arr, int n){
    printf("[ ");
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("]");
    printf("\n\n");
}

void mostrando_mudanca(int *arr, int n){
    for(int i = 1; i < n; i++){
        int temp = arr[i];
        int j = i - 1;

        while(j >= 0 && arr[j] > temp){
            arr[j + 1] = arr[j];
            j--;
            imprimir_mudanca(arr, n);
        }
        arr[j + 1] = temp;
    }
}

int main(){

    int arr[] = {3,2,5,8,1,4};
    int tamanho = sizeof(arr) / sizeof(arr[0]);
    imprimir_mudanca(arr, tamanho);

    mostrando_mudanca(arr, tamanho);

    imprimir_mudanca(arr, tamanho);

    return 0;
}