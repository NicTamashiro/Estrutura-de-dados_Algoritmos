#include <stdio.h>
#include <string.h>

int palindromo(char *text, int n){
    if (n <= 0) return 1;

    if(text[0] != text[n - 1]) return 0;

    return palindromo(text + 1, n - 2);

}

int main(){

    char text[] = "arara";
    int tamanho = strlen(text);

    int resultado = palindromo(text, tamanho);

    if(!resultado) printf("Nao eh palindromo\n");
    else printf("Eh palindromo\n");

    return 0;
}