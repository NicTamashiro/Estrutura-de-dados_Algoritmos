#include <stdio.h>

int bin_search(int * arr, int tamanho, int num){
    int inicio = 0;
    int fim = tamanho - 1;
    int meio;

    while (inicio <= fim){
        meio = inicio + (fim - inicio) / 2;

        if(arr[meio] == num){
            return meio;
        }

        if (arr[inicio] <= arr[meio]){
            if(arr[inicio] <= num && num < arr[meio])
                fim = meio - 1;
            else
                inicio = meio + 1;
        } else {
            if(arr[meio] < num && num <= arr[fim])
                inicio = meio + 1;
            else
                fim = meio - 1;
        }
    }

    return 1;
}

int main(){

    int arr[] = {4, 5, 6, 7, 1, 2, 3};
    int tamanho = sizeof(arr) / sizeof(arr[0]);
    int n;

    printf("Qual numero deseja buscar: ");
    scanf("%d", &n);

    int resultado = bin_search(arr, tamanho, n);

    if (resultado == -1){
        printf("Numero nao encontrado.\n");
    } else {
        printf("posicao: %d\n", resultado);
    }

    return 0;
}