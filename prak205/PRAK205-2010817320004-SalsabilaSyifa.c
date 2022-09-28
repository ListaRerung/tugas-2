#include <stdio.h>
#include <math.h>

int main(){

    float a,b,keliling,luas;
	printf("Masukkan Nilai tinggi segitiga : ");
	scanf("%f",&a);
	printf("Masukkan Nilai sisi miring segitiga : ");
	scanf("%f",&b);

    float hypotenusa;
     hypotenusa=sqrt(b*b-a*a);
    keliling = a + b + hypotenusa;
    luas = a * hypotenusa / 2;

    printf("Alas = %.0f \n",hypotenusa);
    printf("Tinggi = %.0f \n",a);
    printf("Keliling = %.0f \n",keliling);
    printf("Luas = %.0f \n",luas);

     return 0;
}