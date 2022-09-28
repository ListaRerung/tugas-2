import math

jari = float(input("Masukan Jari-jari Bejana : "))
tinggi = float(input("Masukan Tinggi Bejana : "))

luas = 2 * math.pi * jari * (jari + tinggi)
volume = math.pi * jari * jari * tinggi
keliling = 2 * ((2*math.pi*jari) + tinggi)

print("Luas Tabung = ",format(luas,'.2f'))
print("Volume Tabung = ",format(volume,'.2f'))
print("Keliling Tabung = ",format(keliling,'.2f'))