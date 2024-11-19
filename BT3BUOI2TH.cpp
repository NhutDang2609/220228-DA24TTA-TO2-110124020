#include <stdio.h>

#define PI 3.1415

int main()

{

//Khai bao bien

float daylon =50;

float daybe=23;

float chieucao=30;

float CVhinhtron=12.56;

// Tình DT hình thang

float DThinhthang=((daylon +daybe)/2)*chieucao;

//Tình DT hình tron

float DThinhtron=(CVhinhtron* CVhinhtron)/(4*PI);

//Tình DT con lai

float DTconlai=(DThinhthang-DThinhtron);

//Xuat ket qua ra man hinh

printf("Dien tich hinh thang: %.2f m2\n", DThinhthang);

printf("Dien tich hinh tron: %.2f m2\n", DThinhtron);

printf("Dien tich con lai: %.2fm2\n", DTconlai);

return 0;

}
