#include <stdio.h>

int main()
{
    int Harga_Barang=0, diskon_utama=0, total_keseluruhan=0;
    printf ("Masukkan Total Belanjaan Anda: ");
    scanf  ("%d" , &Harga_Barang);


    if (Harga_Barang >=100000 && Harga_Barang < 250000)
    {
      diskon_utama = 0.1*Harga_Barang;
    }
    else if (Harga_Barang >=250000)
    {
      diskon_utama = 0.15*Harga_Barang;
    }

    total_keseluruhan = Harga_Barang - diskon_utama;
    printf ("Selamat Anda Mendapatkan Diskon Sebesar %d \n", diskon_utama);
    printf ("Total Keseluruhan = %d \n", total_keseluruhan);

    return 0;
}
