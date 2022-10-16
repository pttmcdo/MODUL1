#include <stdio.h>

int main()
{
    int A,B,hasil1, hasil2;
    A=400000;
    B=350000;
    printf("Harga sepatu A adalah %d\n" ,A);
    printf("Harga sepatu B adalah %d\n", B);
    hasil1 = A-(A*13/100);
    hasil2 = B-(B*21/100);
    printf("Sepatu A mendapat diskon 13%% sehingga harganya %d\n", hasil1);
    printf("Sepatu B mendapat diskon 21%% sehingga harganya %d\n", hasil2);
}
