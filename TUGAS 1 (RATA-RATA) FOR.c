#include <stdio.h>
#include <stdlib.h>

int main()
{
    float i, angka1, angka2, rata2_akhir, jumlah;

    printf ("Masukkan Jumlah Bilangan: ");
    scanf  ("%f",&angka1 );

    for (i=1; i<=angka1 ; i++)
    {
    printf ("Masukkan Angka (%.f) = ", i);
    scanf  ("%f", &angka2);
    jumlah      = jumlah + angka2;
    }
    printf  ("Total penjumlahan = %.1f\n", jumlah);
    rata2_akhir = jumlah/angka1;
    printf ("Rata-rata akhir = %.1f\n", rata2_akhir);

}
