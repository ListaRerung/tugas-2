#include <stdio.h>
 
int main(){
	float a,b,hasil;
	
	printf("Masukkan Nilai Pertama : ");
	scanf("%f",&a);
	printf("Masukkan Nilai Kedua : ");
	scanf("%f",&b);
	
	hasil=a + b;
	printf("Hasilnya Penjumlahan Nilai pertama dan Nilai kedua adalah %.2f \n",hasil);
	
	return 0;
	
}