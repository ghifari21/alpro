/*
   ============================================================
   | Saya Ghifari Octaverin 2000952 mengerjakan TP5           |
   | dalam mata kuliah Algoritma dan Pemrograman II           |
   | untuk keberkahanNya maka saya tidak melakukan kecurangan |
   | seperti yang telah dispesifikasikan. Aamiin              |
   ============================================================
*/

#include "header.h"     //library header.h

int main(){
    int i, count, top[100], bot[100];   //deklarasi variabel integer
    float decimal[100];                 //deklarasi variabel float
    char menthod, mode;                 //deklarasi variabel char

    scanf("%d", &count);                //input banyaknya pecahan
    for ( i = 0; i < count; i++)        //looping untuk input pecahan
    {
        scanf("%d %d", &top[i], &bot[i]);       //input pembilang dan penyebut
        decimal[i] = (float) top[i] / bot[i];   //membuat pecahan yang telah di input menjadi desimal
    }
    
    scanf(" %c", &menthod);             //input metode sorting (quicksort / bubblesort)
    scanf(" %c", &mode);                //input mode sorting (ascending / descending)

    switch (menthod)
    {
    case 'b':   //jika input metode berupa b yang artinya memilih untuk menggunakan bubblesort
        bubbleSort(decimal, count, mode, top, bot);     //memanggil prosedur bubbleSort
        break;
    case 'q':   //jika input metode berupa q yang artinya memilih untuk menggunakan quicksort
        quickSort(decimal, 0, count-1, mode, top, bot); //memanggil prosedur quickSort
        break;
    default:
        break;
    }
    printResult(count, top, bot);       //memanggil prosedur printResult
    return 0;
}