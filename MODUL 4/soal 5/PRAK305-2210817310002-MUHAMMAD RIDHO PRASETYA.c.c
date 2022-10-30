#include <stdio.h>
#include <math.h>
int main()
{
    int hari,jam,menit,detik;

    scanf("%d",&detik);
    hari= floor(detik/86400);
    detik= detik % 86400;
    jam = floor(detik/3600);
    detik %= 3600;
    menit =floor(detik/60);
    detik %= 60;
    if ( hari >= 1){
        printf("%.2d hari %.2d:%.2d:%.2d",hari,jam,menit,detik);
    }
    else {
        printf("%.2d:%.2d:%.2d",jam,menit,detik);
    }
}
