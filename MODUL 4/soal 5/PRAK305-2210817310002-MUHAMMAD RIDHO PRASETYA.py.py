detik = int(input(""))

Hari = detik // 86400 
detik= detik % 86400 
Jam= detik//3600 
detik %= 3600 
Menit = detik // 60 
detik %= 60

if Hari >= 1: 
    print (f"{Hari} hari {Jam:02d}:{Menit:02d}:{detik:02d}")
else : 
    print(f"{Jam:02d}:{Menit:02d}:{detik:02d}")    