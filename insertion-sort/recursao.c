#include <stdio.h>

void ordenar(int *arr, int n){
    if(n <= 1) return;

    ordenar(arr, n - 1);

    int temp = arr[n - 1];
    int j = n - 2;

    while(j >= 0 && arr[j] > temp){
        arr[j + 1] = arr[j];
        j--;
    }
    arr[j + 1] = temp;
}

int main(){

    int arr[] = {4,1,2,8,9,3};
    int tamanho = sizeof(arr) / sizeof(arr[0]);

    ordenar(arr, tamanho);

    for (int i = 0; i < tamanho; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}

/*

ordenar(arr, 5)
            ordenar(arr, 4)
                        ordenar(arr, 3)
                                    ordenar(arr, 3)
                                                ordenar(arr, 2)
                                                            ordenar(arr, 1)

*/