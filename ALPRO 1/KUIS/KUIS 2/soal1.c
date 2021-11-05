/*
   ============================================================
   | Saya Ghifari Octaverin 2000952 mengerjakan KUIS SOAL 1   |
   | dalam mata kuliah Algoritma dan Pemrograman              |
   | untuk keberkahanNya maka saya tidak melakukan kecurangan |
   | seperti yang telah dispesifikasikan. Aamiin              |
   ============================================================
*/
#include <stdio.h>
#include <string.h>

int main(){
    int n, i, j, k; //deklarasi variabel
    char huruf[100]; //huruf yang akan dicari
    int banyak[100]; //banyaknya huruf yang akan dicari
    char input[200]; //string masukan dari user
    int nilai[100]; //nilai tampungan
    scanf("%s", &input); //meminta user memasukan string
    scanf("%d", &n); //meminta user memasukan berapa banyak baris
    i=0;
    while (i < n)
    {
        scanf(" %c %d", &huruf[i], &banyak[i]); //meminta masukan huruf yang akan dicari beserta banyaknya
        i++;
    }
    int len=strlen(input); //panjang string
    i=0;
    while (i < n)
    {
        j=0;
        nilai[i]=0;
        while (j < len)
        {
            if (huruf[i] == input[j]) //cek apakah huruf yang dicari ada di string
            {
                nilai[i]++; //jika ada nilai akan ditambah 1
            }
            j++;
        }
        i++;
    }
    i=0;
    while (i < n)
    {
        if (nilai[i] >= banyak[i]) //jika nilai memenuhi syarat minimal
        {
            printf("aku sih yes\n");
        }
        else //jika nilai tidak memenuhi syarat
        {
            printf("aku sih no\n");
        }
        i++;
    }
    

    return 0;
}