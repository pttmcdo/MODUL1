#include <stdio.h>

int main()
{
    int a,i,d=0;
    char simbol;
    while(d<=2){
    scanf("%d %c", &a,&simbol);
    for(i=1; i<=50; i++){
    if(i% a==0){
        printf("%c", simbol);
        }
    else{
        printf("%d", i);
        }
        }
    d++;
}
}










