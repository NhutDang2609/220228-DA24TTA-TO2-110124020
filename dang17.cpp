#include <stdio.h>
#include <stdbool.h>

// Function prototypes
bool lasonguyento(int n);
void indayso(int n);
void insochan(int n);
void insochiahetcho5(int n);
void insonguyento(int n);
int tinhtongdayso(int n);
int tinhtongsole(int n);
int tinhtongsonguyento(int n);
float tinhTBCsole(int n);
float tinhTBCsonguyento(int n);

int main() {
    int n;
    
    // Nhap so nguyen duong
    do {
        printf("Nhap so nguyen duong n (n < 100): ");
        scanf("%d", &n);
    } while (n <= 0 || n >= 100);

    // a. In ra cac gia tri tu 1 den n
    printf("Cac gia tri tu 1 den %d: \n", n);
    indayso(n);
    
    // b. In cac gia tri chan tu 1 den n
    printf("Cac gia tri chan tu 1 den %d: \n", n);
    insochan(n);
    
    // c. In cac gia tri chia het cho 5 tu 1 den n
    printf("Cac gia tri chia het cho 5 tu 1 den %d: \n", n);
    insochiahetcho5(n);
    
    // d. In cac so nguyen to nho hon n
    printf("Cac so nguyen to nho hon %d: \n", n);
    insonguyento(n);
    
    // e. Tinh tong cac gia tri tu 1 den n
    printf("Tong cac gia tri tu 1 den %d: %d\n", n, tinhtongdayso(n));
    
    // f. Tinh tong cac so le tu 1 den n
    printf("Tinh tong cac so le tu 1 den %d: %d\n", n, tinhtongsole(n));
    
    // g. Tinh tong cac so nguyen to nho hon n
    printf("Tong cac so nguyen to nho hon %d: %d\n", n, tinhtongsonguyento(n));
    
    // h. Tinh trung binh cong cac so le
    printf("Trung binh cong cac so le: %.2f\n", tinhTBCsole(n));
    
    // i. Trung binh cong cac so nguyen to
    printf("Trung binh cong cac so nguyen to: %.2f\n", tinhTBCsonguyento(n));
    
    return 0;
}

// Function to check if a number is prime
bool lasonguyento(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

// Print numbers from 1 to n
void indayso(int n) {
    for (int i = 1; i <= n; i++) {
        printf("%d ", i);
    }
    printf("\n");
}

// Print even numbers from 1 to n
void insochan(int n) {
    for (int i = 2; i <= n; i += 2) {
        printf("%d ", i);
    }
    printf("\n");
}

// Print numbers divisible by 5 from 1 to n
void insochiahetcho5(int n) {
    for (int i = 5; i <= n; i += 5) {
        printf("%d ", i);
    }
    printf("\n");
}

// Print prime numbers less than n
void insonguyento(int n) {
    for (int i = 2; i < n; i++) {
        if (lasonguyento(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

// Calculate the sum of numbers from 1 to n
int tinhtongdayso(int n) {
    return n * (n + 1) / 2;
}

// Calculate the sum of odd numbers from 1 to n
int tinhtongsole(int n) {
    int tong = 0;
    for (int i = 1; i <= n; i += 2) {
        tong += i;
    }
    return tong;
}

// Calculate the sum of prime numbers less than n
int tinhtongsonguyento(int n) {
    int tong = 0;
    for (int i = 2; i < n; i++) {
        if (lasonguyento(i)) {
            tong += i;
        }
    }
    return tong;
}

// Calculate the average of odd numbers from 1 to n
float tinhTBCsole(int n) {
    int tongle = tinhtongsole(n);
    int demle = (n + 1) / 2;
    return (float) tongle / demle;
}

// Calculate the average of prime numbers less than n
float tinhTBCsonguyento(int n) {
    int tongnguyento = tinhtongsonguyento(n);
    int demnguyento = 0;
    for (int i = 2; i < n; i++) {
        if (lasonguyento(i)) {
            demnguyento++;
        }
    }
    return demnguyento == 0 ? 0 : (float) tongnguyento / demnguyento;
}

