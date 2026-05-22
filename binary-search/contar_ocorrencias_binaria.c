#include <stdio.h>

int bin_search_left(int * arr, int tamanho, int num){
    int inicio = 0;
    int fim = tamanho - 1;
    int meio;
    int resultado = -1;

    while(inicio <= fim){
        meio = inicio + (fim - inicio) / 2;

        if(arr[meio] == num){
            resultado = meio;
            fim = meio - 1;
        } else if(arr[meio] > num){
            fim = meio - 1;
        } else {
            inicio = meio + 1;
        }
    }

    return resultado;
}

int bin_search_right(int * arr, int tamanho, int num){
    int inicio = 0;
    int fim = tamanho - 1;
    int meio;
    int resultado = -1;

    while(inicio <= fim){
        meio = inicio + (fim - inicio) / 2;

        if(arr[meio] == num){
            resultado = meio;
            inicio = meio + 1;
        } else if(arr[meio] > num){
            fim = meio - 1;
        } else {
            inicio = meio + 1;
        }
    }

    return resultado;
}

int main(){

    int arr[] = {1,3,3,3,4,5,5};
    int tamanho = sizeof(arr) / sizeof(arr[0]);
    int num;

    printf("Qual numero deseja saber quantas vezes aparece no vetor? ");
    scanf("%d", &num);

    int left = bin_search_left(arr, tamanho, num);
    int right = bin_search_right(arr, tamanho, num);

    if(left == - 1){
        printf("O numero '%d' nao apararece nesse vetor.\n", num);
    } else {
        printf("O numero '%d' apareceu [%d] vez(es)!\n", num, right - left + 1);
    }

    return 0;
}