#include <stdio.h>

int ceil_bin_search(int *arr, int tamanho, int target){
    int inicio = 0;
    int fim = tamanho - 1;
    int resultado = - 1;
    int meio;

    while(inicio <= fim){
        meio = inicio + (fim - inicio) / 2;

        if(arr[meio] == target){
            inicio = meio + 1;
        } else if(arr[meio] > target){
            resultado = arr[meio];
            fim = meio - 1;
        } else {
            inicio = meio + 1;
        }
    }
    return resultado;
        
}

int main(){

    int arr[] = {1, 3, 5, 7, 9};
    int tamanho = sizeof(arr) / sizeof(arr[0]);
    int target;

    printf("Qual o alvo: ");
    scanf("%d", &target);

    int resultado = ceil_bin_search(arr, tamanho, target);

    if(resultado == -1) printf("Nao existe numero maior\n");
    else printf("%d eh o menor elemento maior que %d\n", resultado, target);

    return 0;
}