#include<stdio.h>

int main() {

    int a = 9;
    int b = 6;
    int x = 10;
    int y = 7;

    float hasil = (float)((a + b) * x) / y;

    printf("Variabel a bernilai %d\n", a);
    printf("Variabel b bernilai %d\n", b);
    printf("Variabel x bernilai %d\n", x);
    printf("Variabel y bernilai %d\n", y);
    printf("Hasil dari %d ditambah %d dikali %d dibagi %d adalah %.2f\n", a, b, x, y, hasil);

    return 0;
}