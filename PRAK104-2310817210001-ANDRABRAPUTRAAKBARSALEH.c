#include<stdio.h>

int main() {

    int A = 400000;
    int B = 350000;
    float x = 0.87;
    float y = 0.79;

    float hasilA = (float)(A * x);
    float hasilB = (float)(B * y);


    printf("Harga sepatu A adalah %d\n", A);
    printf("Harga sepatu A adalah %d\n", B);
    printf("Sepatu A mendapat diskon 13%% sehingga harganya menjadi %.f\n", hasilA);
    printf("Sepatu B mendapat diskon 21%% sehingga harganya menjadi %.f\n", hasilB);
    
    return 0;
}