#include <stdio.h>

int main()

{

//Khai bao bien

int soluong, doanhthu, dongia, chiphivanchuyen;

//Nhap gia tri
printf("Nhap so luong: ");
scanf("%d", &soluong);
printf("Nhap don gia: "); 
scanf("%d", &dongia);
printf("Nhap chi phi van chuyen: ");
scanf("%d",&chiphivanchuyen);
doanhthu=soluong * dongia - chiphivanchuyen;

//In ra man hinh

printf("Doanh thu trong ngay la: %d \n",doanhthu);
return 0;

}
