#include <stdio.h>

struct Pessoa {
    char nome[50];
    int idade;
};

void ordenar(struct Pessoa arr[] , int n){
    for (int i = 1; i < n; i++){
        struct Pessoa temp = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j].idade > temp.idade){
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
}

int main(){

    struct Pessoa arr[] = {
        {"Ana", 30},
        {"Bob", 22},
        {"Leo", 25}
    }; 

    int tamanho = sizeof(arr) / sizeof(arr[0]);

    ordenar(arr, tamanho);

    for(int i = 0; i < tamanho; i++){
        printf("Nome: %s\n", arr[i].nome);
        printf("Idade: %d\n\n", arr[i].idade);
    }

    return 0;
}