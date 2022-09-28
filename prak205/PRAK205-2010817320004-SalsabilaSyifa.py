import math
from math import sqrt

A = float(input("Masukan nilai tinggi segitiga : "))
B = float(input("Masukan nilai sisi miring segitiga : "))

C = sqrt(B*B - A*A)

print("Alas =", format(C,'.0f'))
print("Tinggi =", format(A,'.0f'))

keliling = A + B + C
print("Keliling =", format(keliling,'.0f'))

luas = (C * A)/2
print("Luas =", format(luas,'.0f'))