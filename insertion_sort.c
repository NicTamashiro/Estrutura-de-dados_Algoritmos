#include <stdio.h>

void insertion_sort(int *vet, int tamanho){
    int i, j, temp;

    for(i = 1; i < tamanho; i++){
        temp = vet[i];
        for(j = i - 1; j >= 0 && temp < vet[j]; j--){
            vet[j + 1] = vet[j];
        }
        vet[j + 1] = temp;
    }
}

int main(){

    int vet[] = {55, 44, 12, 42};
    int tamanho = sizeof(vet) / sizeof(vet[0]);

    insertion_sort(vet, tamanho);

    for(int i = 0; i < tamanho; i++){
        printf("%d ", vet[i]);
    }

    return 0;
}


/*

55 44 12 42 | temp = 44
44 55 12 42 | temp = 12
44 55 55 42
44 44 55 42
12 44 55 42 | temp = 42
12 42 44 55
*/