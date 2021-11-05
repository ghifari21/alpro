#include <stdio.h>
int main()
{
	//Deklarasi variable
	int angka;

	//meminta masukan user
	printf("masukan angka : ");
	scanf("%d", &angka);

	//pemilihan satu kondisi
	if (angka < 10){
		printf("nilai nya kurang dari 10\n");
	}else{
		printf("nilai nya lebih besar dari 10\n");
	}

	return 0;
}