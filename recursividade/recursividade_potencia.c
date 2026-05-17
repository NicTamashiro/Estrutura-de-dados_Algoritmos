#include <stdio.h>

int potencia(int base, int exp){
    if (exp == 0) return 1;

    return base * potencia(base, exp - 1);
}

int main(){

    int base, exp;
    printf("Escreva a base e o expoente: \n");
    scanf("%d %d", &base, &exp);

    int resultado = potencia(base, exp);

    printf("%d", resultado);

    return 0;
}