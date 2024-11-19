#include <stdio.h>
int main()
{
//Khai bao bien
	int namsinh;
	float diem;
	char hoten[30],mssv[10],lop[10];
	
//Nhap gia tri cho bien
	printf("Nhap mssv: ");
	fflush(stdin);
	scanf("%s",mssv);
	
	printf("Nhap ho ten: ");
	fflush(stdin);
	gets(hoten);
	
	printf("Nhap nam snh: ");
	scanf("%d",&namsinh);
	
	printf("Diem xet tuyen: ");
	scanf("%f",&diem);
	
	printf("Nhap lop: ");
	fflush(stdin);
	scanf("%s",lop);
	
//thong tin xuat ra man hinh
	printf("mssv: %s \n",&mssv);
	printf("ho ten: %s \n",&hoten);
	printf("nam sinh: %d \n",&namsinh);
	printf("diem xet tuyen: %f \n",&diem);
	printf("lop: %s \n",&lop);
	return 0;	
	
}
