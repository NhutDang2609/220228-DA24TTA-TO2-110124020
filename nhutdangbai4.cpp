#include <stdio.h>
int main()
{
//Khai bao bien
	   int a,b;
	   char pheptoan;
	   
//Nhap gia tri cho bien
	   printf("Nhap so nguyen a: ");
	   scanf("%d",&a);
	   printf("Nhap so nguyen b: ");
	   scanf("%d",&b);
	   
//Nhap phep toan
	   printf("Nhap phep toan: ");
	   scanf("%c",&pheptoan);
	   
//Thuc hien phep toan
	   switch('pheptoan')
	   {
	   	case'+':
	   			printf("Tong %d+%d=%d",a,b,a+b);
	   			break;
		case'-':
				printf("Hieu %d-%d=%d",a,b,a-b);
				break;
		case'*':
				printf("Tich %d*%d=%d",a,b,a*b);
				break;
		case'/':
			if(b !=0)
			{
				printf("Thuong %d/%d=%d",a,b,(float)a/b);
			}					
			else
			{
				printf("Loi khong the chia cho 0");
			}
			break;
			default:
				printf("phep toan khong hop le!");
				break;
	   }
	   return 0;
}
