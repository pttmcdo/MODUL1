#include<stdio.h>
int main()
{
    int n;
    scanf("%i",&n);
    if (n>0)
    {
        printf("Positif\n\n");
    }
    else if (n<0)
    {
        printf("Negatif\n\n");
    }
    else
    {
        printf("Nol");
    }
}
