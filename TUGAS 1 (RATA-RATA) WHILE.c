#include <stdio.h>
#include <stdlib.h>

int main()
{
    float angka2, rata2_akhir, jumlah=0;
    int i = 1, angka1;

    printf ("Masukkan Jumlah Bilangan: ");
    scanf  ("%d",&angka1 );

    while (i <= angka1)
    {
    printf ("Masukkan Angka (%d) = ", i);
    scanf  ("%f", &angka2);
    jumlah      = jumlah + angka2;
    i++;
    }

    rata2_akhir = jumlah/angka1;
    printf ("Rata-rata akhir = %.1f\n", rata2_akhir);

}
