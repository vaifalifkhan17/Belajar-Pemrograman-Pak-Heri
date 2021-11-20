#include <stdio.h>
#include <stdlib.h>

int main()
{
    int activity;
    while (1)
{
    printf ("Daftar Kegiatan Vaif Pada Hari Jum'at\n");
    printf ("\t 1. Shubuh  (Pagi)  \n");
    printf ("\t 2. Dhuhur  (Siang) \n");
    printf ("\t 3. Ashar   (Sore)  \n");
    printf ("\t 4. Maghrib (Senja) \n");
    printf ("\t 5. Isya'   (Malam) \n");
    printf ("Masukkan angka pilihan: ");
    scanf  ("%d", &activity);

    if (activity == 1)
    {
        printf ("\nBerikut adalah kegiatan Vaif di waktu Shubuh/Pagi hari:                                   \n");
        printf ("\t 1. 04.05-04.20 = Vaif biasanya melakukan ibadah sholat Shubuh                          \n");
        printf ("\t 2. 04.20-04.30 = Vaif biasanya mengaji                                                 \n");
        printf ("\t 3. 04.30-05.00 = Vaif biasanya membantu orang tua membersihkan rumah                   \n");
        printf ("\t 4. 05.30-05.45 = Vaif biasanya bersiap-siap untuk melaksanakan kuliah                  \n");
        printf ("\t 5. 05.45-06.15 = Vaif melakukan sarapan terlebih dahulu                                \n");
        printf ("\t 6. 06.15-08.55 = Vaif sudah mulai kuliah Bahasa Inggris Laboratorium                   \n");
        printf ("\t 7. 08.55-09.15 = Vaif biasanya mengisi waktu ini untuk mengerjakan tugas dan makan     \n");
        printf ("\t 8. 09.15-11.20 = Waktu santai untuk Vaif sambil menunggu sholat Jum'at                 \n\n");

    }else if (activity == 2)
    {
        printf ("\nBerikut adalah kegiatan Vaif di waktu Dhuhur/Siang hari:                                  \n");
        printf ("\t 1. 11.20-12.30 = Sholat Jum'at                                                           \n");
        printf ("\t 2. 12.30-15.00 = Biasanya Vaif melakukan tidur siang                                   \n\n");

    }else if (activity == 3)
    {
        printf ("\nBerikut adalah kegiatan Vaif di waktu Ashar/Sore hari:                                    \n");
        printf ("\t 1. 15.00-16.30 = Vaif membantu orang tua membersihkan rumah                              \n");
        printf ("\t 2. 16.30-17.00 = Sholat Ashar  & mengaji                                               \n\n");

    }else if (activity == 4)
    {
        printf ("\nBerikut adalah kegiatan Vaif di waktu Maghrib/Senja:                                      \n");
        printf ("\t 1. 17.30-18.00 = Sholat Maghrib                                                          \n");
        printf ("\t 2. 18.00-19.00 = Vaif biasanya melakukan kegiatan santai                               \n\n");

    }else if (activity == 5)
    {
        printf ("\nBerikut adalah kegiatan Vaif di waktu Isya'/Malam:                                        \n");
        printf ("\t 1. 19.00- Lelah = Vaif biasanya makan, bermain game, mengerjakan tugas, nonton TV, belajar dan aktivis lain\n\n");
    }
}
    return (0);
}
