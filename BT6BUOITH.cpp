#include <stdio.h>

int main() {
    // Khai bao bien
    int a = 5, b = 6;
    float x;

    // Phep chia so nguyen
    x = a / b;
    printf("Ket qua phep chia so nguyen: x = %f\n", x);

    // Phep chia so thuc
    x = (float)a / b;
    printf("Ket qua phep chia so thuc: x = %f\n", x);

    return 0;
}
