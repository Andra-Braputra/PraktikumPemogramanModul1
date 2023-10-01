#include <stdio.h>

int main() {
    int a = 5;
    int b = 10;
    int c = 3;

    printf("Variabel a bernilai %d\n", a);
    printf("Variabel b bernilai %d\n", b);
    printf("Variabel c bernilai %d\n", c);
    
    if (a == b) {
        printf("Apakah a sama dengan b ? jawabannya adalah 1\n");
    }else {
        printf("Apakah a sama dengan b ? jawabannya adalah 0\n");
    }

    if (b > c) {
        printf("Apakah b lebih besar c ? jawabannya adalah 1\n");
    }else {
        printf("Apakah b lebih besar c ? jawabannya adalah 0\n");
    }

    if (a != c) {
        printf("Apakah a tidak sama c ? jawabannya adalah 1\n");
    }else {
        printf("Apakah a tidak sama c ? jawabannya adalah 0\n");
    }
    return 0;
}