from math import sqrt
alas,tinggi = 5,12
simir = sqrt((alas*alas)+(tinggi*tinggi))
keliling = alas+tinggi+simir
luas = 1/2*alas*tinggi
print("Diketahui:")
print("Alas : ",alas)
print("Tinggi :\n", tinggi)
print("Jawab: ")
print("Sisi A :",alas)
print("Sisi B :",tinggi)
print("Sisi C :",int(simir))
print("Keliling :",int(keliling))
print("Luas :", int(luas))