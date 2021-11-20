#include <stdio.h>
#include <stdlib.h>


int main()
{
    char Username [100];
	char Password [100];

	printf  ("\t=============================================\n");
	printf  ("\t\t\t SILAHKAN LOGIN             \n");
	printf  ("\t=============================================\n\n");

while(3)
{

    printf  ("\tUsername : ");scanf   ("%s",&Username);
	printf  ("\tPassword : ");scanf   ("%s",&Password);

	if ((strcmp(Username, "vaif")== 0)&&(strcmp(Password,"alifkhan17")==0)){
		printf("\n\t---------Hello! %s Selamat Datang-------------\n\n", Username);

	}else
	{
		printf("\n\t--------Mohon maaf! Data Akun Anda Salah---------\n\n");
	}
}
	return 0;

}
