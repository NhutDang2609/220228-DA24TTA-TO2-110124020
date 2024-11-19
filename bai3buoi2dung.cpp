#include <stdio.h>
int main() {
    int n, sum = 0;

    // Nhap gia tri cho n
    printf("Nhap n: ");
    scanf("%d", &n);

    // Tinh tong cac chu so
    while (n > 0) {
        int chuso = n % 10;
        sum += chuso;
        n /= 10;
    }

    printf("Tong cac chu so trong so nguyen la: %d", sum);
    return 0;
}
