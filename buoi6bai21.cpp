#include <stdio.h>
#include <stdbool.h>
#include <math.h>

#define ROW 3
#define COL 3 

//Khai bao nguyen mau ham 
void nhapMang(int A[ROW][COL],int n,int m);
void xuatMang( int A[ROW][COL], int n,int m);
int tinhTongMang(int A[ROW][COL], int m, int n);
int tinhTongDong(int A[ROW][COL], int m, int n, int k);
int tinhTongCot(int A[ROW][COL], int m, int n, int k);
bool kiemTraDongCoSoAm(int A[ROW][COL], int m, int n, int k);
bool kiemTraCotCoNguyenTo(int A[ROW][COL], int m, int n, int k);
void sapXepDongGiamDan(int A[ROW][COL], int m, int n, int k);
bool kiemTraCotToanLe(int A[ROW][COL],int m, int n,int k);
bool kiemTraGiaTriX(int A[ROW][COL], int m, int n, int x); 
void timViTriX(int A[ROW][COL], int m, int n, int x);
int timMaxDong(int A[ROW][COL], int m, int n, int k); 
int timMinDong(int A[ROW][COL], int m, int n, int k); 
void inSoNguyenToTrenDong(int A[ROW][COL], int m, int n, int k); 
bool laSoNguyenTo(int x); 

int main()
{
	int n,m;
	int A[ROW][COL];
	int k;
	int x;
	
	do 
	{
        printf("Nhap so dong m (1-%d): ",ROW);
        scanf("%d", &m);
    } while (m <= 0 || m > ROW);

    do 
	{
        printf("Nhap so cot n (1-%d): ", COL);
        scanf("%d", &n);
    } while (n <= 0 || n > COL);
    
    //Goi ham cau a
	nhapMang (A,n,m);
	
	//Goi ham cau b
	printf("\nMang ban dau la: ");
	xuatMang(A, n, m);
	
	//Goi ham cau c
	printf("\nTong cac phan tu trong mang :%d ",tinhTongMang (A, n, m));
	
	//Goi ham cau d
    printf("\nNhap dong k (0-%d): ", m-1);
    scanf("%d", &k);
    printf("\nTong phan tu tren dong %d: %d", k, tinhTongDong(A, m, n, k));
    
    //Goi ham cau e
    printf("\nNhap cot k (0-%d): ", n-1);
    scanf("%d", &k);
    printf("\nTong phan tu tren cot %d: %d", k, tinhTongCot(A, m, n, k));
    
    //Goi ham cau f
     if (kiemTraDongCoSoAm(A, m, n, k))
        printf("\nDong %d co so am:", k);
    else
        printf("\nDong %d khong co so am:", k);
        
        
	//Goi ham cau g
	 if (kiemTraCotCoNguyenTo(A, m, n, k))
        printf("\nCot %d co so nguyen to.", k);
    else
        printf("\nCot %d khong co so nguyen to.", k);

	 //Goi ham cau h
	 printf("\nSap xep dong %d giam dan",k);
	 xuatMang(A,m,n);
	 
	 //Goi ham cau i
	 if (kiemTraCotToanLe(A, m, n, k))
        printf("\nCot %d co toan gia tri le.", k);
    else
        printf("\nCot %d khong co toan gia tri le.", k);
	 
	 //Goi ham cau j
    printf("Nhap gia tri x de kiem tra: ");
    scanf("%d", &x);
    if (kiemTraGiaTriX(A, m, n, x))
        printf("Gia tri %d ton tai trong mang.\n", x);
    else
        printf("Gia tri %d khong ton tai trong mang.\n", x);
        

    // Goi ham cau k
    timViTriX(A, m, n, x);
    

    // Goi ham cau cau l
    printf("\nGia tri lon nhat tren dong %d: %d", k, timMaxDong(A, m, n, k));

    // Goi ham cau m
    printf("\nGia tri nho nhat tren dong %d: %d", k, timMinDong(A, m, n, k));

    // Goi ham cau n
    printf("\nCac so nguyen to tren dong %d:", k);
    inSoNguyenToTrenDong(A, m, n, k);
	 
	return 0;
}

void nhapMang(int A[ROW][COL], int m, int n)
{
    for (int i = 0; i < m; i++) 
	{
        for (int j = 0; j < n; j++) 
		{
            printf("Nhap A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }
}

void xuatMang(int A[ROW][COL], int m, int n) 
{
    for (int i = 0; i < m; i++) 
	{
        for (int j = 0; j < n; j++) 
		{
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
}

int tinhTongMang(int A[ROW][COL], int m, int n) 
{
    int tong = 0;
    for (int i = 0; i < m; i++) 
	{
        for (int j = 0; j < n; j++) 
		{
            tong += A[i][j];
        }
    }
    return tong;
}

int tinhTongDong(int A[ROW][COL], int m, int n, int k) 
{
    int tong = 0;
    for (int j = 0; j < n; j++) 
	{
        tong += A[k][j];
    }
    return tong;
}

int tinhTongCot(int A[ROW][COL], int m, int n, int k)
{
	int tong = 0;
	for(int j = 0;j < n; j++)
	{
		tong += A[k][j];
	}
	return tong;
}

bool kiemTraDongCoSoAm(int A[ROW][COL], int m, int n, int k) 
{
    for (int j = 0; j < n; j++) 
	{
        if (A[k][j] < 0) 
		return true;
    }
    return false;
}

bool kiemTraCotCoNguyenTo(int A[ROW][COL], int m, int n, int k) 
{
    for (int i = 0; i < m; i++) 
	{
        if (laSoNguyenTo(A[i][k])) 
		return true;
    }
    return false;
}

void sapXepDongGiamDan(int A[ROW][COL], int m, int n, int k) 
{
    for (int i = 0; i < n - 1; i++) 
	{
        for (int j = i + 1; j < n; j++) 
		{
            if (A[k][i] < A[k][j]) 
			{
                int temp = A[k][i];
                A[k][i] = A[k][j];
                A[k][j] = temp;
            }
        }
    }
}

bool kiemTraCotToanLe(int A[ROW][COL],int m, int n,int k)
{
	for (int i = 0;i< m; i++)
	{
		if (A[i][k] % 2 == 0)
		return false;
    }
    return true;
}


bool kiemTraGiaTriX(int A[ROW][COL], int m, int n, int x) 
{
    for (int i = 0; i < m; i++) 
	{
        for (int j = 0; j < n; j++) 
		{
            if (A[i][j] == x) 
			return true;
        }
    }
    return false;
}

void timViTriX(int A[ROW][COL], int m, int n, int x) 
{
    for (int i = 0; i < m; i++) 
	{
        for (int j = 0; j < n; j++) 
		{
            if (A[i][j] == x) 
			{
                printf("Gia tri %d found at A[%d][%d]\n", x, i, j);
                return;
            }
        }
    }
    printf("Gia tri %d khong ton tai trong mang.\n", x);
}


int timMaxDong(int A[ROW][COL], int m, int n, int k) 
{
    int max = A[k][0];
    for (int j = 1; j < n; j++) 
	{
        if (A[k][j] > max) 
		{
            max = A[k][j];
        }
    }
    return max;
}

int timMinDong(int A[ROW][COL], int m, int n, int k) 
{
    int min = A[k][0];
    for (int j = 1; j < n; j++) 
	{
        if (A[k][j] < min) 
		{
            min = A[k][j];
        }
    }
    return min;
}

void inSoNguyenToTrenDong(int A[ROW][COL], int m, int n, int k) 
{
    bool coSoNguyenTo = false;
    for (int j = 0; j < n; j++) 
	{
        if (laSoNguyenTo(A[k][j])) 
		{
            printf("%d ", A[k][j]);
            coSoNguyenTo = true;
        }
    }
    if (!coSoNguyenTo) 
	{
        printf("Khong co so nguyen to nao tren dong %d.\n", k);
    } else {
        printf("\n");
    }
}

bool laSoNguyenTo(int x) 
{
    if (x <= 1) return false;
    for (int i = 2; i <= sqrt(x); i++) 
	{
        if (x % i == 0) return false;
    }
    return true;
}
	
	

