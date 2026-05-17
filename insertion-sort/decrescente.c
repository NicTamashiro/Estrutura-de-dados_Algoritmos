#include <stdio.h>

void decrescente(int *arr, int n){
    for (int i = 1; i < n; i++){
        int temp = arr[i];
        int j = i - 1;
        
        while(j >= 0 && arr[j] < temp){
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }

}

int main(){

    int arr[] = {1,3,2,5,9,4};
    int tamanho = sizeof(arr) / sizeof(arr[0]);

    for(int i = 0; i < tamanho; i++){
        printf("%d ", arr[i]);
    }

    printf("\n");

    decrescente(arr, tamanho);

    for(int i = 0; i < tamanho; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}