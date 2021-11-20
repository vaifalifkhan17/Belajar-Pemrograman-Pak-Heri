#include <stdio.h>
#include <stdlib.h>

int main()
{
    int angka, jumlah, total;
while (1)
{
    printf ("Selamat Datang di Pusat Tiket Kereta Api\n");
    printf ("1. Ekonomi     (Rp 50000)  \n");
    printf ("2. Bisnis      (Rp 150000) \n");
    printf ("3. Eksekutif   (Rp 300000) \n");
    printf ("Silahkan pilih tiket yang ingin Anda beli (1/2/3) = "), scanf ("%d",&angka);

    switch (angka)
    {
    case 1 :
        printf ("\tHarga Tiket Ekonomi             = Rp 50000\n");
        printf ("\tMasukkan Jumlah Pembelian Tiket = ");
        scanf  ("%d", &jumlah);
        total = jumlah*50000;
        printf ("\tTotal yang harus dibayar sebesar Rp. %d\n\n",total);break;
    case 2 :
        printf ("\tHarga Tiket Bisnis              = Rp 150000\n");
        printf ("\tMasukkan Jumlah Pembelian Tiket = ");
        scanf  ("%d", &jumlah);
        total = jumlah*150000;
        printf ("\tTotal yang harus dibayar sebesar Rp. %d\n\n",total);break;
    case 3 :
        printf ("\tHarga Tiket Eksekutif           1= Rp 300000\n");
        printf ("\tMasukkan Jumlah Pembelian Tiket = ");
        scanf  ("%d", &jumlah);
        total = jumlah*300000;
        printf ("\tTotal yang harus dibayar sebesar Rp. %d\n\n",total);break;
    default : printf ("Mohon maaf! Tiket yang Anda pilih tidak tersedia, silahkan kembali ke daftar menu\n\n4");break;

    }
}
    return 0;


}
