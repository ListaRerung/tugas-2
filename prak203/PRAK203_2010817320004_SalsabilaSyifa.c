#include <stdio.h>
#include <math.h>

int main () {
    float a,b,c,d,e,f,hasil;

    printf("Masukan nilai a : ");
    scanf("%f", &a);
    printf("Masukan nilai b : ");
    scanf("%f", &b);
    printf("Masukan nilai c : ");
    scanf("%f", &c);
    printf("Masukan nilai d : ");
    scanf("%f", &d);
    printf("Masukan nilai e : ");
    scanf("%f", &e);
    printf("Masukan nilai f : ");
    scanf("%f", &f);

    hasil = (a-b)*(c/d)-(e+f);
    printf("hasil = %.3f\n", hasil);


    return 0;
}