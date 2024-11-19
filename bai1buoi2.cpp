#include <stdio.h>
int main()
{
//Khai bao bien
	int n, S=0, P=1;
	
//Nhap gia tri cho bien
	printf("Nhap n: ");
	scanf("%d",&n);
	for(int i=1; i<=n;i++)
	{
		S+=i;
	}
	
//Tinh tong
	printf("Tong S(n)=1+2+3+...+n : %d \n",S);
	for (int i=1; i<=n;i++)
	{
		P*=i;
	}
	
//Tinh tich
	printf("Tich P(n)=1*2*3*...*n: %d \n",P);
	return 0;
}
