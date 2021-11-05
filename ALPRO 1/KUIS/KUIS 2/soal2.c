/*
   ============================================================
   | Saya Ghifari Octaverin 2000952 mengerjakan KUIS SOAL 2   |
   | dalam mata kuliah Algoritma dan Pemrograman              |
   | untuk keberkahanNya maka saya tidak melakukan kecurangan |
   | seperti yang telah dispesifikasikan. Aamiin              |
   ============================================================
*/
#include <stdio.h>
#include <string.h>

typedef struct
{
    char kata[100]; //menampung string

}kotak;

int main(){
    int n, i, j, k; //deklarasi variabel
    int min=100; //menampung nilai minimal
    int tempindex[100]; //menampung index
    kotak input[50]; //membuka bungkusan
    scanf("%d", &n); //menampung banyak string
    i=0;
    //k=n;
    while (i < n)
    {
        scanf("%s", &input[i].kata); //meminta masukan string
        if (strlen(input[i].kata) < min) //jika panjang string lebih kecil daripada nilai minimal
        {
            min = strlen(input[i].kata); //maka panjang string tersebut menjadi nilai minimal baru
        }
        i++;
    }
    int kolom, baris;
    int index;
    baris=0;
    index=0;
    while (baris < min) //memulai membuat pola
    {
        kolom=0;
        while (kolom < 2 * baris)
        {
            printf(" "); 
            kolom++;
        }
        kolom=0;
        while (kolom < n)
        {
            printf("%c", input[kolom].kata[index]); //output string
            if (kolom != n-1) //agar diujung string tidak ada spasi
            {
                printf(" ");
            }
            kolom++;
        }
        index++;
        printf("\n");
        baris++;
    }
    i=0;
    while (i < n)
    {
       if (input[i].kata[min] != '\0')
       {
           j=min;
           while (j < strlen(input[i].kata))
           {
               printf("%c", input[i].kata[j++]);
           }
           printf("\n");
       }
       i++;
    }
    
    
    
    return 0;
}
// gcc soal2.c -o soal2.exe && soal2.exe