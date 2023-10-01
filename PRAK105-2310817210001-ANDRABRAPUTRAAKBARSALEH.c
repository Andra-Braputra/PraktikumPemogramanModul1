#include<stdio.h>

int main() {

    int a = 9;
    int b = 5;
    int x = 8;
    int y = 8;
    int hasilab, hasilxy, hasil;

    hasilab = a % b;
    hasilxy = x % y;

    hasil = hasilab + hasilxy;

    printf("Variabel a bernilai %d\n", a);
    printf("Variabel b bernilai %d\n", b);
    printf("Variabel x bernilai %d\n", x);
    printf("Variabel y bernilai %d\n", y);
    printf("Total sisa bagi dari %d dibagi %d dan %d dibagi %d adalah %d\n", a, b, x, y, hasil);

    return 0;
}