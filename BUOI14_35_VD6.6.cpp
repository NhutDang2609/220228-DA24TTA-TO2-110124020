#include <stdio.h>
#include<stdlib.h>

main(){
	float *a, s;
	int n=5, i=0;
	/* Cap phat bo nho dong co tro */
	a = (float*)malloc(sizeof(float)*n);
	/* Nhap du lieu */
	for (i=0; i<4;i++)
	{
		printf("\nNhap a[%d] =", i);
		scanf("%f", a+i);
	}
	/* Tinh tong cac gia tri */
	 for (i =0;i<4; i++)
	 	s = s + *(a+i);
	 	printf("\nTong ca so thuc: %8.2f",s);
	 	free(a);
}

