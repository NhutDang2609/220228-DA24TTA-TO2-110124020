#include <stdio.h>
#include <stdbool.h>

int main() {
    int n;

    // Nhap so nguyen duong n (100 <= n < 10000)
    do {
        printf("Nhap so nguyen duong n (100 <= n < 10000): ");
        scanf("%d", &n);
    } while (n < 100 || n >= 10000);

    int tongChungSo = 0, tongChungSoLe = 0, tongChungSoNguyenTo = 0;
    int demSoChuSo0 = 0, demSoChuSoChiaHet3 = 0, demSoChuSoChiaHet5 = 0;

    int temp = n; 

    // a. tinh tong cac chu so cua n
    while (temp > 0) {
        tongChungSo += temp % 10;
        temp /= 10;
    }

    // b. Tinh tong cac chu so le cua n
    temp = n;  
    while (temp > 0) {
        int digit = temp % 10;
        if (digit % 2 != 0) {
            tongChungSoLe += digit;
        }
        temp /= 10;
    }

    // c. tinh tong cac chu so la so nguyen to cua cua n
    temp = n;
    while (temp > 0) {
        int digit = temp % 10;
        if (digit == 2 || digit == 3 || digit == 5 || digit == 7) {
            tongChungSoNguyenTo += digit;
        }
        temp /= 10;
    }

    // d. dem so chu so 0 cua n
    temp = n;
    while (temp > 0) {
        if (temp % 10 == 0) {
            demSoChuSo0++;
        }
        temp /= 10;
    }

    // e. dem so chu so chia het cho 3 cua n
    temp = n;
    while (temp > 0) {
        if ((temp % 10) % 3 == 0) {
            demSoChuSoChiaHet3++;
        }
        temp /= 10;
    }

    // f. dem so chu so chia het cho 5 cua n
    temp = n;
    while (temp > 0) {
        if ((temp % 10) % 5 == 0) {
            demSoChuSoChiaHet5++;
        }
        temp /= 10;
    }

    // In ket qua
    printf("Tong cac chu so cua %d: %d\n", n, tongChungSo);
    printf("Tong cac chu so le cua %d: %d\n", n, tongChungSoLe);
    printf("Tong cac chu so la so nguyen to cua %d: %d\n", n, tongChungSoNguyenTo);
    printf("So chu so 0 cua %d: %d\n", n, demSoChuSo0);
    printf("So chu so chia het cho 3 cua %d: %d\n", n, demSoChuSoChiaHet3);
    printf("So chu so chia het cho 5 cua %d: %d\n", n, demSoChuSoChiaHet5);

    return 0;
}
