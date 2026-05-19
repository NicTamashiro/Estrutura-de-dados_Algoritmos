#include <stdio.h>

void towers_of_hanoi(int n, char source, char auxiliary, char target){
    if(n == 1){
        printf("Mover disco %d da torre %c para a torre %c\n", n, source, target);
        return;
    }
    towers_of_hanoi(n - 1, source, target, auxiliary);
    printf("Mover disco %d da torre %c para a torre %c\n", n, source, target);
    towers_of_hanoi(n - 1, auxiliary, source, target);
}

int main(){

    int n_disks = 3;
    towers_of_hanoi(n_disks, 'A', 'B', 'C');

    return 0;
}