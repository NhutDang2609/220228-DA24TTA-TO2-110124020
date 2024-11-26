#include <stdio.h>
#define SIZE 100

void nhapMang(float A[], int n);
void xuatMang(float A[], int n);
float tinhTong(float A[], int n);
float tinhTBCViTriLe(float A[], int n);
int demPhanTuDuong(float A[], int n);
void sapXepTangDan(float A[], int n);
void inGiaTriViTriLe(float A[], int n);
void inViTriCoGiaTriBang0(float A[], int n);
float timMax(float A[], int n);
int timViTriMaxDauTien(float A[], int n);
void inViTriGiaTriLonNhat(float A[], int n);
int kiemTraToanSoAm(float A[], int n);

int main() {
    float A[SIZE];
    int n, soPhanTuDuong;
    float kq, kqTBC;

    do {
        printf("Nhap vao so phan tu: ");
        scanf("%d", &n);
    } while (n <= 0 || n > SIZE);

    // n hop le 
    // Goi ham cau a
    nhapMang(A, n);
    
    // Goi ham cau b
    printf("\nMang vua nhap la: ");
    xuatMang(A, n);
    
    // Goi ham cau c
    kq = tinhTong(A, n);
    printf("\nTong cac phan tu trong A la %.2f", kq);
    
    // Goi ham cau d
    kqTBC = tinhTBCViTriLe(A, n);
    printf("\nTrung binh cong cac gia tri vi tri le la %.2f", kqTBC);
    
    // Goi ham cau e
    soPhanTuDuong = demPhanTuDuong(A, n);
    printf("\nSo luong phan tu duong la: %d", soPhanTuDuong);
    
    // Goi ham cau f
    sapXepTangDan(A, n);
    printf("\nMang sau khi sap xep tang dan la: ");
    xuatMang(A, n);
    
    // Goi ham cau g
    printf("\nCac gia tri tai vi tri le la: ");
    inGiaTriViTriLe(A, n);
    
    // Goi ham cau h
    printf("\nVi tri co gia tri bang 0 la: ");
    inViTriCoGiaTriBang0(A, n);
    
    // Goi ham cau i
    printf("\nGia tri lon nhat trong mang la: %.2f", timMax(A, n));
    
    // Goi ham cau j
    printf("\nGia tri lon nhat dau tien la: %d", timViTriMaxDauTien(A, n));
    
    // Goi ham cau k
    inViTriGiaTriLonNhat(A, n);
    
    // Goi ham cau l
    if (kiemTraToanSoAm(A, n)) 
	{
        printf("\nMang co toan so am.");
    } else {
        printf("\nMang khong co toan so am.");
    }

    return 0;
}

void nhapMang(float A[], int n) 
{
    for (int i = 0; i < n; i++) 
	{
        printf("Nhap phan tu A[%d]: ", i);
        scanf("%f", &A[i]);
    }
}

void xuatMang(float A[], int n) 
{
    for (int i = 0; i < n; i++) 
	{
        printf("\n%.2f", A[i]);
    }
}

float tinhTong(float A[], int n) 
{
    float tong = 0;
    for (int i = 0; i < n; i++) 
	{
        tong += A[i];
    }
    return tong;
}

float tinhTBCViTriLe(float A[], int n) 
{
    float tong = 0;
    int dem = 0;
    for (int i = 1; i < n; i += 2) 
	{
        tong += A[i];
        dem++;
    }
    if (dem == 0) return 0; 
    return tong / dem;
}

int demPhanTuDuong(float A[], int n)
{
    int dem = 0;
    for (int i = 0; i < n; i++) 
	{
        if (A[i] > 0) 
		{
            dem++;
        }
    }
    return dem;
}

void sapXepTangDan(float A[], int n) 
{
    for (int i = 0; i < n - 1; i++) 
	{
        for (int j = i + 1; j < n; j++) 
		{
            if (A[i] > A[j]) 
			{
                float temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
    }
}

void inGiaTriViTriLe(float A[], int n) 
{
    for (int i = 1; i < n; i += 2) 
	{  
        printf("%.2f ", A[i]);
    }
}

void inViTriCoGiaTriBang0(float A[], int n) 
{
    int coGiaTriBang0 = 0;
    for (int i = 0; i < n; i++) 
	{
        if (A[i] == 0) 
		{
            printf("%d ", i);
            coGiaTriBang0 = 1;
        }
    }
    if (!coGiaTriBang0)
	{
        printf("Khong co gia tri nao bang 0.\n");
    }
}

float timMax(float A[], int n) 
{
    float max = A[0];
    for (int i = 1; i < n; i++) 
	{
        if (A[i] > max) 
		{
            max = A[i];
        }
    }
    return max;
}

int timViTriMaxDauTien(float A[], int n) 
{
    float max = timMax(A, n);
    for (int i = 0; i < n; i++) 
	{
        if (A[i] == max) 
		{
            return i;  
        }
    }
    return -1;  
}

void inViTriGiaTriLonNhat(float A[], int n) 
{
    float max = timMax(A, n);
    printf("Cac vi tri co gia tri lon nhat (%.2f): ", max);
    for (int i = 0; i < n; i++) 
	{
        if (A[i] == max) 
		{
            printf("%d ", i);
        }
    }
    printf("\n");
}

int kiemTraToanSoAm(float A[], int n) 
{
    for (int i = 0; i < n; i++) 
	{
        if (A[i] >= 0) 
		{
            return 0;  
        }
    }
    return 1; 
}

