#include <stdio.h>
#include <math.h>
#define _USE_MATH_DEFINES

int main () {
    M_PI;
    float jari, tinggi, volume, keliling, luas;
    
    printf("Masukan Jari-Jari Bejana : ");
    scanf("%f", &jari);

    printf("Masukan Tinggi Bejana : ");
    scanf("%f", &tinggi);

    luas = 2 * M_PI * jari * (jari + tinggi);
    printf("Luas Bejana : %.2f\n", luas);

    volume = M_PI * jari * jari * tinggi ;
    printf("Volume Bejana : %.2f\n", volume);

    keliling = 2 * ((M_PI * jari) + tinggi);
    printf("Keliling Bejana : %.2f\n", keliling);

    return 0;
}