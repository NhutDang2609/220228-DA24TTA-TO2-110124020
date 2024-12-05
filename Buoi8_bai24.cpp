#include <stdio.h>

struct PHAN_SO{
    int tuSo;  
    int mauSo; 
};
typedef struct PHAN_SO ps;

void nhapPhanSo(PHAN_SO *ps);
void xuatPhanSo(PHAN_SO ps);
int uocchunglon(int a, int b);
void rutGonPhanSo(PHAN_SO *ps);
PHAN_SO congPhanSo(PHAN_SO ps1, PHAN_SO ps2);
PHAN_SO truPhanSo(PHAN_SO ps1, PHAN_SO ps2);
PHAN_SO nhanPhanSo(PHAN_SO ps1, PHAN_SO ps2);
PHAN_SO chiaPhanSo(PHAN_SO ps1, PHAN_SO ps2);

int main()
{
    PHAN_SO ps1, ps2, psKetQua;
    
    // Goi ham cau a
    printf("Nhap phan so thu nhat: ");
    nhapPhanSo(&ps1);
    
    //Goi ham cau b
    printf("\nNhap phan so thu hai: ");
    nhapPhanSo(&ps2);
    
    // Goi ham cau c
    rutGonPhanSo(&ps1);
    printf("Phan so thu nhat sau khi rut gon: ");
    xuatPhanSo(ps1);
    
    rutGonPhanSo(&ps2);
    printf("\nPhan so thu hai sau khi rut gon: ");
    xuatPhanSo(ps2);

    // Goi ham cau d
    psKetQua = congPhanSo(ps1, ps2);
    printf("\nKet qua cua phep cong: ");
    xuatPhanSo(psKetQua);
   
   //Goi ham cau e
    psKetQua = truPhanSo(ps1, ps2);
    printf("\nKet qua cua phep tru: ");
    xuatPhanSo(psKetQua);
    
    //Goi ham cau f
    psKetQua = nhanPhanSo(ps1, ps2);
    printf("\nKet qua cua phep nhan: ");
    xuatPhanSo(psKetQua);
    
  //Goi ham cau g
    psKetQua = chiaPhanSo(ps1, ps2);
    printf("\nKet qua cua phep chia: ");
    xuatPhanSo(psKetQua);

    return 0;
}

void xuatPhanSo(PHAN_SO ps) 
{
    printf("%d/%d", ps.tuSo, ps.mauSo);
}

void nhapPhanSo(PHAN_SO *ps) 
{
    printf("Nhap tu so: ");
    scanf("%d", &ps->tuSo);
    do {
        printf("Nhap mau so (mau so phai khac 0): ");
        scanf("%d", &ps->mauSo);
    } while (ps->mauSo == 0);
}

int uocchunglon(int a, int b) 
{
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

void rutGonPhanSo(PHAN_SO *ps) 
{
    int uocchunglon_val = uocchunglon(ps->tuSo, ps->mauSo);
    ps->tuSo /= uocchunglon_val;
    ps->mauSo /= uocchunglon_val;

    
    if (ps->mauSo < 0) 
    {
        ps->tuSo = -ps->tuSo;
        ps->mauSo = -ps->mauSo;
    }
}

PHAN_SO congPhanSo(PHAN_SO ps1, PHAN_SO ps2) 
{
    PHAN_SO psKetQua;
    psKetQua.tuSo = ps1.tuSo * ps2.mauSo + ps2.tuSo * ps1.mauSo;
    psKetQua.mauSo = ps1.mauSo * ps2.mauSo;
    rutGonPhanSo(&psKetQua);
    return psKetQua;
}

PHAN_SO truPhanSo(PHAN_SO ps1, PHAN_SO ps2) 
{
    PHAN_SO psKetQua;
    psKetQua.tuSo = ps1.tuSo * ps2.mauSo - ps2.tuSo * ps1.mauSo;
    psKetQua.mauSo = ps1.mauSo * ps2.mauSo;
    rutGonPhanSo(&psKetQua);
    return psKetQua;
}

PHAN_SO nhanPhanSo(PHAN_SO ps1, PHAN_SO ps2) 
{
    PHAN_SO psKetQua;
    psKetQua.tuSo = ps1.tuSo * ps2.tuSo;
    psKetQua.mauSo = ps1.mauSo * ps2.mauSo;
    rutGonPhanSo(&psKetQua);
    return psKetQua;
}

PHAN_SO chiaPhanSo(PHAN_SO ps1, PHAN_SO ps2) 
{
    PHAN_SO psKetQua;
    psKetQua.tuSo = ps1.tuSo * ps2.mauSo;
    psKetQua.mauSo = ps1.mauSo * ps2.tuSo;
    rutGonPhanSo(&psKetQua);
    return psKetQua;
}

