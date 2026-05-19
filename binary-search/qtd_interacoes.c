#include <stdio.h>

int binary_search(int *arr, int tamanho, int n){
    int inicio = 0;
    int fim = tamanho - 1;
    int meio;
    int contador = 1;

    while(inicio <= fim){
        meio = inicio + (fim - inicio) / 2;

        if(arr[meio] == n) return contador;

        if(arr[meio] > n) {
            fim = meio - 1;
            contador++;
        } else {
            inicio = meio + 1;
            contador++;
        }
    }
    return 0;
}

int main(){
    
    int n;
    int arr[] = {1,3,5,7,11,23,43};
    int tamanho = sizeof(arr) / sizeof(arr[0]);
    
    scanf("%d", &n);

    int qtd_interacoes = binary_search(arr, tamanho, n);

    if(!qtd_interacoes) printf("Elemento nao encontrado!\n");
    else printf("%d interacoes\n", qtd_interacoes);

    return 0;
}