#include<stdio.h>
int main(void)
{
    int S,i;
    scanf("%i",&S);
    for ( i = 1; i <= S; i++)
        {
            if (i%2!=0){
            printf("%i ",i);
            }
            else{}
        }
        printf("\n");
        for ( i = S; i >=1; i--)
        {
            if (i%2==0){
                    printf("%i ",i);
        }
        else {}
        }
}
