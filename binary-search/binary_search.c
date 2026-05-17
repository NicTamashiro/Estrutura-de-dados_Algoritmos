#include <stdio.h>

int binary_search(int *vet, int n, int tamanho){
    int inicio = 0;
    int fim = tamanho - 1;
    int meio;

    while (inicio <= fim){
        meio = inicio + (fim - inicio) / 2;
        if (n == vet[meio]){
            printf("[%d] encontra-se na posicao %d\n", n, meio);
            return 0;
        } else if (vet[meio] > n){
            fim = meio - 1;
        } else {
            inicio = meio + 1;
        }
    }
    printf("O valor [%d] nao foi encontrado.\n", n);
    return 1;
}

int main(){
    int n;
    int vet[] = {2,5,6,8,10,14,55,73,87,93};
    int tamanho = sizeof(vet) / sizeof(vet[0]);

    printf("Qual valor deseja saber a posicao: ");
    scanf("%d", &n);

    binary_search(vet, n, tamanho);

    return 0;
}