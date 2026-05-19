#include <stdio.h>

int bin_search(int *arr, int n, int x){
    int inicio = 0;
    int fim = n - 1;
    int meio;
    int resultado = -1;

    while(inicio <= fim){
        meio = inicio + (fim - inicio) / 2;

        if(arr[meio] == x){
            resultado = meio;
            fim = meio - 1;
        }else if(arr[meio] > x){
            fim = meio - 1;
        } else {
            inicio = meio + 1;
        }
    }
    return resultado;
}

int main(){

    int arr[] = {1,2,2,2,3,3,4};
    int tamanho = sizeof(arr) / sizeof(arr[0]);

    int elemento;
    printf("Qual elemento deseja procurar: ");
    scanf("%d", &elemento);

    int resultado = bin_search(arr, tamanho, elemento);

    if(resultado == -1){
        printf("Elemento nao encontrado!\n");
    } else {
        printf("A primeira ocorrencia eh no indice %d\n", resultado);
    }

    return 0;
}
