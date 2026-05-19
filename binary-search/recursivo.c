#include <stdio.h>

int bin_search(int *arr, int inicio, int fim, int n){
    if(inicio > fim) return -1;

    int meio = inicio + (fim - inicio) / 2;

    if(arr[meio] == n) return meio;
    if(arr[meio] > n) return bin_search(arr, inicio, meio - 1, n);
    else return bin_search(arr, meio + 1, fim, n);
}

int main(){
    int n;
    int arr[] = {1,3,5,7,11,23,43};
    int tamanho = sizeof(arr) / sizeof(arr[0]);
    int inicio = 0;
    int fim = tamanho - 1;
    
    scanf("%d", &n);

    int resultado = bin_search(arr, inicio, fim,n);

    if(resultado == -1) printf("Elemento nao encontrado!\n");
    else printf("Eelemento encontrado na posicao %d\n", resultado);

    return 0;
}