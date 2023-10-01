#include <stdio.h>
#include <math.h>

int main() {
    int a = 5;
    int b = 12;
    int c = sqrt(pow(a, 2) + pow(b, 2));
    int k = a + b + c;
    int l = (a * b) / 2;

    printf("Sisi A = %d\n", b);
    printf("Sisi B = %d\n", c);
    printf("Sisi C = %d\n", a);
    printf("Keliling = %d\n", k);
    printf("luas = %d\n", l);

    return 0;
}