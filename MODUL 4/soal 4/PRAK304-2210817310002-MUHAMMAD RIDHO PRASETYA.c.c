#include<stdio.h>
int main()
{
    int a;
    scanf("%i", &a);
    if(a>=1 && a<=9){
        printf("satuan\n\n");
    }
    else if(a>10 && a<=19){
        printf("belasan\n\n");
    }
    else if(a>=20 && a<=99){
        printf("puluhan\n\n");
    }
    else if(a<1){
        printf("nol\n\n");
    }
    else{
        printf("Anda menginput melebihi limit bilangan\n\n");
    }
}
