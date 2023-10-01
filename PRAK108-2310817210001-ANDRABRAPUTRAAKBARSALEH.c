#include <stdio.h>

int main() {
    float a = 14;
    float b = 5;
    float c = 3.14 * 2;
    float d = a / b;
    float r = d / c;

    printf("Diketahui :\n");
    printf("Pak Dengklek mengelilingi taman = %.f Putaran\n", b);
    printf("Jarak tempuh Pak Dengklek = %.f Kilometer\n", a);
    
    printf("Jawaban :\n");
    printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah %.2f Kilometer\n", r);
    
    return 0;
}