#include <stdio.h>

void ordenar(int *arr, int n){
    for(int i = 1; i < n; i++){
        int temp = arr[i];
        int j = i - 1;

        while(j >= 0 && arr[j] > temp){
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
}

int main(){

    int arr[] = {3,1,5,8,4};
    int tamanho = sizeof(arr) / sizeof(arr[0]);
    ordenar(arr, tamanho);

    for(int i = 0; i < tamanho; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}