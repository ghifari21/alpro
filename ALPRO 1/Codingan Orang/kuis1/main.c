/*
    Saya Sekar Madu Kusumawardani [2007703] mengerjakan 
    soal Kuis 1
    dalam mata kuliah Algoritma dan Pemrograman 1
    untuk keberkahanNya maka saya tidak melakukan kecurangan
    seperti yang telah dispesifikasikan. Aamiin
*/

#include "header.h"

int main(){
    int i;
    int n1 = 0, n2 = 0;
    char str1[100][100], str2[100][100], sub[100];
    scanf("%d", &n1);
    for ( i = 0; i < n1; i++)
    {
        scanf("%s", str1[i]);
    }
    scanf("%d", &n2);
    for ( i = 0; i < n2; i++)
    {
        scanf("%s", str2[i]);
    }
    scanf("%s", sub);
    printf("%d\n", Cari(n1, str1, sub));
    printf("%d\n", Cari(n2, str2, sub));
    printf("---\n");
    //Cari1(n2, str2, sub);
    return 0;
}