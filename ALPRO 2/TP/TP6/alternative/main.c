/*
   ============================================================
   | Saya Ghifari Octaverin 2000952 mengerjakan TP6           |
   | dalam mata kuliah Algoritma dan Pemrograman II           |
   | untuk keberkahanNya maka saya tidak melakukan kecurangan |
   | seperti yang telah dispesifikasikan. Aamiin              |
   ============================================================
*/

#include "header.h"     //library header.h

int main(){
    int i, countIbnu, countAyah, countAdik;         //deklarasi iterator dan variabel banyaknya elemen dalam array
    char menthod, mode;                             //deklarasi variabel untuk metode (bubblesort, insertionsort, selectionsort, quicksort) dan mode (ascending, descending)

    scanf("%d", &countIbnu);                        //input banyaknya elemen dalam array Ibnu
    song ibnu[countIbnu];                           //deklarasi array of bungkusan
    for ( i = 0; i < countIbnu; i++)                //looping untuk input
    {
        scanf("%f %s", &ibnu[i].duration, &ibnu[i].title);  //input data ibnu
    }
    
    scanf("%d", &countAdik);                        //input banyaknya elemen dalam array adik
    song adik[countAdik];                           //deklarasi array of bungkusan
    for ( i = 0; i < countAdik; i++)                //looping untuk input
    {
        scanf("%f %s", &adik[i].duration, &adik[i].title);  //input data adik
    }
    
    scanf("%d", &countAyah);                        //input banyaknya elemen dalam array ayah
    song ayah[countAyah];                           //deklarasi array of bungkusan
    for ( i = 0; i < countAyah; i++)                //looping untuk input
    {
        scanf("%f %s", &ayah[i].duration, &ayah[i].title);  //input data ayah
    }
    
    scanf(" %c %c", &menthod, &mode);               //input metode sorting dan mode sorting

    switch (menthod)
    {
    case 'b':   //jika input metode adalah bubblesort
        bubbleSort(countIbnu, ibnu, mode);      //>>
        bubbleSort(countAdik, adik, mode);      //>>>   menjalankan prosedur bubblesort
        bubbleSort(countAyah, ayah, mode);      //>>
        break;
    case 'i':   //jika input metode adalah insertionsort
        insertionSort(countIbnu, ibnu, mode);   //>>
        insertionSort(countAdik, adik, mode);   //>>>   menjalankan prosedur insertionsort
        insertionSort(countAyah, ayah, mode);   //>>
        break;
    case 's':   //jika input metode adalah selectionsort
        selectionSort(countIbnu, ibnu, mode);   //>>
        selectionSort(countAdik, adik, mode);   //>>>   menjalankan prosedur selectionsort
        selectionSort(countAyah, ayah, mode);   //>>
        break;
    case 'q':   //jika input metode adalah quicksort
        quickSort(ibnu, 0, countIbnu-1, mode);  //>>
        quickSort(adik, 0, countAdik-1, mode);  //>>>   menjalankan prosedur quicksort
        quickSort(ayah, 0, countAyah-1, mode);  //>>
        break;
    default:
        break;
    }

    song ibnuAdik[countIbnu+countAdik];         //deklarasi array of bungkusan
    song family[countIbnu+countAdik+countAyah]; //deklarasi array of bungkusan

    mergeSorted(countIbnu, ibnu, countAdik, adik, ibnuAdik, mode);              //menjalankan prosedur penggabungan array ibnu dan adik secara terurut
    mergeSorted(countIbnu+countAdik, ibnuAdik, countAyah, ayah, family, mode);  //menjalankan prosedur penggabungan array ibnu adik dan ayah secara terurut

    printOutput(countIbnu+countAdik+countAyah, family, ibnu, countIbnu);        //menjalankan prosedur printoutput

    return 0;
}