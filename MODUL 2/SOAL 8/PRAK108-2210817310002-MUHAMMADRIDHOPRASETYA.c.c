#include <stdio.h>

int main()
{
    float phi,putaran,jaraktempuh,jarijari,keliling;
    phi=3.14;
    putaran=5;
    jaraktempuh=14;
    keliling=jaraktempuh/putaran;
    jarijari=keliling/(2*phi);
    printf("Diketahui :\n");
    printf("Pak Dengklek mengelilingi taman = %.f putaran\n", putaran);
    printf("Jarak tempuh Pak Dengklek = %.f kilometer\n\n", jaraktempuh);
    printf("jawaban :\n");
    printf("Jari jari taman yang dikelilingi Pak Dengklek adalah : %.2f kilometer\n", jarijari);
}

