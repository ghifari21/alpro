/* 	(profun22) Prosedur Fungsi Ceria (Mesin)

	Saya Hilman Fauzi Herdiana 2000879 mengerjakan Kuis 3 dalam mata kuliah Algoritma dan Pemrograman.
	Untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/
#include "header.h"

void input()
{
	//input banyaknya string pada array of string pertama dan kedua
    scanf("%d", &n); 
    //input string pertama sebanyak n
    i=0;
    while (i < n)
    {
        scanf("%s", string1[i]); //masukan string pertama
        i++;
    }
    //input string kedua sebanyak n
    i=0;
    while (i < n)
    {
        scanf("%s", string2[i]); //masukan string kedua
        i++;
    }
    //input banyaknya huruf overlap antar string.
    scanf("%d", &m); //overlap
}

void output()
{
	i=0, j=0, k=0;
	int jarak = 0; //jaraknya nanti

	baris = 0;
	while (baris < n)
	{
		//==== POLA 1 ====
		kolom = 0;
		while (kolom < jarak)
		{
			printf(" ");
			kolom++;
		}
		printf("%s\n", string1[baris]); //print string 1
		jarak = jarak + strlen(string1[baris])-m; // jatak ditambah panjang string1 dikurang overlap

		//==== POLA 2 ====
		kolom = 0;
		while (kolom < jarak)
		{
			printf(" ");
			kolom++;
		}
		printf("%s\n", string2[baris]); //print string 2
		jarak = jarak + strlen(string2[baris])-m; //jarak sepanjang string 1 tadi ditambahkan sama panjang string2 dikurang overlap
		baris++;
	}
}