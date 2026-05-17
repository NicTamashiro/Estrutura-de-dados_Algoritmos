#include <stdio.h>
#include <string.h>

void inverter(char *texto, int n){
    if (n == 0){
        return;
    }
    printf("%c", texto[n - 1]);
    inverter(texto, n - 1);
}

int main(){

    char texto[] = "abcd";
    int tamanho = strlen(texto);

    inverter(texto, tamanho);

    return 0;
}