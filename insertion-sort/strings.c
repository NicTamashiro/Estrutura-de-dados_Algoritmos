#include <stdio.h>
#include <string.h>

void ordenar(char *nomes[], int n){
    for (int i = 1; i < n; i++){
        char *temp = nomes[i];
        int j = i - 1;

        while(j >= 0 && strcmp(nomes[j], temp) > 0){
            nomes[j + 1] = nomes[j];
            j--; 
        }
        nomes[j + 1] = temp;
    }
}

int main(){

    char *nomes[] = {"banana", "uva", "abacaxi", "manga", "laranja"};

    int tamanho = sizeof(nomes) / sizeof(nomes[0]);

    ordenar(nomes, tamanho);

    for(int i = 0; i < tamanho; i++){
        printf("%s ", nomes[i]);
    }

    return 0;
}