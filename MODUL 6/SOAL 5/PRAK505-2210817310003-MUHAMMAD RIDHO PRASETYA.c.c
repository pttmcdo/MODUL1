#include<stdio.h>

void Biodata(int TahunLahir, char *Namaku, char *Asal){
     int tahun_sekarang = 2020;
     printf("\nPerkenalkan Nama Saya : %s\n", Namaku);
     printf("Umur Saya : %d\n", tahun_sekarang - TahunLahir);
     printf("Saya adalah angkatan : %d\n", tahun_sekarang);
     printf("Asal Saya dari : %s", Asal);
}
int main(){
    int TahunLahir;
    char Namaku[20], Asal [15];
    scanf("%d", &TahunLahir);
    scanf(" %[^\n]%*c", Namaku);
    scanf(" %[^\n]%*c", &Asal);
    Biodata(TahunLahir, Namaku, Asal);
    return 0;
}
