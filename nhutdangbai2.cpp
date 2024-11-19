#include <stdio.h>
int main ()
{
//Khai bao bien
	   int a,b;
	   
//Nhap gia tri cho bien
	   printf("Nhap so nguen thu nhat: ");
	   scanf("%d",&a);
	   printf("Nhap so nguyen thu hai: ");
	   scanf("%d",&b);
	   
//Xuat gia tri ra man hinh
	   if(a<b)
	   		  printf("So nguyen nho hon la: %d",a);
	   else
	   	   	  printf("So nguyen nho hon la: %d",b);
			  return 0;			  
}
