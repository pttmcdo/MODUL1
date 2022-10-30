a=int(input())
if a>=1 and a<=10:
    print("SATUAN")
elif(a>=10 and a<=19):
    print("BELASAN")
elif(a>=20 and a<=99):
    print("PULUHAN")
elif a<1:
    print("NOL")
else:
    print("Anda menginput melebihi limit bilangan")                