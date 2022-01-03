#include <stdio.h>
#include <stdlib.h>


int main ()
{
    int hasil_perkalian;

    printf ("                                                                        PROGRAM PERKALIAN\n");
    printf ("========================================================================================================================================================================\n");

    for (int i=1;i<=10;i++)
    {
        for (int x=1;x<=10;x++)
      {
         hasil_perkalian = i*x;
         printf ("\t%d x %d = %d",x,i,hasil_perkalian);
      }
      printf ("\n");

    }

}
