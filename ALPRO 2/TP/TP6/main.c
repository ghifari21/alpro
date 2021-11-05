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
    char ibnuSong[countIbnu][100];                  //deklarasi array of string judul lagu Ibnu
    float durationIbnuSong[countIbnu];              //deklarasi array durasi lagu Ibnu
    
    for ( i = 0; i < countIbnu; i++)                //looping untuk input durasi dan judul lagu Ibnu
    {
        scanf("%f", &durationIbnuSong[i]);          //input durasi lagu
        scanf(" %s", &ibnuSong[i]);                 //input judul lagu
    }

    scanf("%d", &countAdik);                        //input banyaknya elemen dalam array adik
    char adikSong[countAdik][100];                  //deklarasi array of string judul lagu adik
    float durationAdikSong[countAdik];              //deklarasi array durasi lagu adik

    for ( i = 0; i < countAdik; i++)                //looping untuk input durasi dan judul lagu adik
    {
        scanf("%f", &durationAdikSong[i]);          //input durasi lagu
        scanf(" %s", &adikSong[i]);                 //input judul lagu
    }
    
    scanf("%d", &countAyah);                        //input banyaknya elemen dalam array ayah
    char ayahSong[countAyah][100];                  //deklarasi array of string judul lagu ayah
    float durationAyahSong[countAyah];              //deklarasi array durasi lagu ayah

    for ( i = 0; i < countAyah; i++)                //looping untuk input durasi dan judul lagu ayah
    {
        scanf("%f", &durationAyahSong[i]);          //input durasi lagu
        scanf(" %s", &ayahSong[i]);                 //input judul lagu
    }

    scanf(" %c %c", &menthod, &mode);               //input metode dan mode
//================================================================  sorting array Ibnu berdasarkan durasi
    for ( i = 0; i < countIbnu; i++)                //looping untuk mengkopi judul lagu ibnu ke variabel global
    {
        strcpy(tempSongName1[i], ibnuSong[i]);      //copy string
    }
    if (menthod == 'b')                                     //jika input merupakan bubble sorting
    {
        bubbleSort(countIbnu, durationIbnuSong, mode);      //prosedur bubblesort akan dijalankan
    }else if (menthod == 'i')                               //jika input merupakan insertion sorting
    {
        insertionSort(countIbnu, durationIbnuSong, mode);   //prosedur insertionsort akan dijalankan
    }else if (menthod == 's')                               //jika input merupakan selection sorting
    {
        selectionSort(countIbnu, durationIbnuSong, mode);   //prosedur selectionsort akan dijalankan
    }else                                                   //jika input merupakan quick sorting
    {
        quickSort(durationIbnuSong, 0, countIbnu-1, mode);  //prosedur quicksort akan dijalankan
    }
    for ( i = 0; i < countIbnu; i++)                //looping untuk mengkopi judul lagu ibnu di variabel global ke variabel lokal
    {
        strcpy(ibnuSong[i], tempSongName1[i]);      //copy string
    }
//================================================================  sorting array adik berdasarkan durasi
    for ( i = 0; i < countAdik; i++)                //looping untuk mengkopi judul lagu adik ke variabel global
    {
        strcpy(tempSongName1[i], adikSong[i]);      //copy string
    }
    if (menthod == 'b')                                     //jika input merupakan bubble sorting
    {
        bubbleSort(countAdik, durationAdikSong, mode);      //prosedur bubblesort akan dijalankan
    }else if (menthod == 'i')                               //jika input merupakan insertion sorting
    {
        insertionSort(countAdik, durationAdikSong, mode);   //prosedur insertionsort akan dijalankan
    }else if (menthod == 's')                               //jika input merupakan selection sorting
    {
        selectionSort(countAdik, durationAdikSong, mode);   //prosedur selectionsort akan dijalankan
    }else                                                   //jika input merupakan quick sorting
    {
        quickSort(durationAdikSong, 0, countAdik-1, mode);  //prosedur quicksort akan dijalankan
    }
    for ( i = 0; i < countAdik; i++)                //looping untuk mengkopi judul lagu adik di variabel global ke variabel lokal
    {
        strcpy(adikSong[i], tempSongName1[i]);      //copy string
    }
//================================================================  sorting array ayah berdasarkan durasi
    for ( i = 0; i < countAyah; i++)                //looping untuk mengkopi judul lagu ayah ke variabel global
    {
        strcpy(tempSongName1[i], ayahSong[i]);      //copy string
    }
    if (menthod == 'b')                                     //jika input merupakan bubble sorting
    {
        bubbleSort(countAyah, durationAyahSong, mode);      //prosedur bubblesort akan dijalankan
    }else if (menthod == 'i')                               //jika input merupakan insertion sorting
    {
        insertionSort(countAyah, durationAyahSong, mode);   //prosedur insertionsort akan dijalankan
    }else if (menthod == 's')                               //jika input merupakan selection sorting
    {
        selectionSort(countAyah, durationAyahSong, mode);   //prosedur selectionsort akan dijalankan
    }else                                                   //jika input merupakan quick sorting
    {
        quickSort(durationAyahSong, 0, countAyah-1, mode);  //prosedur quicksort akan dijalankan
    }
    for ( i = 0; i < countAyah; i++)                //looping untuk mengkopi judul lagu ayah di variabel global ke variabel lokal
    {
        strcpy(ayahSong[i], tempSongName1[i]);      //copy string
    }
//================================================================  merging array Ibnu dan Adik
    char mergeIbnuAdikSong[countIbnu+countAdik][100];       //deklarasi array untuk menampung hasil merging array ibnu dan adik
    float mergeIbnuAdikDuration[countIbnu+countAdik], mergeFamilyDuration[countIbnu+countAdik+countAyah];   //deklarasi array untuk menampung hasil merging array ibnu dan adik, dan hasil merging ibnu adik dan ayah

    for ( i = 0; i < countIbnu; i++)            //looping untuk mengkopi array judul lagu ibnu ke variabel global
    {
        strcpy(tempSongName1[i], ibnuSong[i]);  //copy string
    }
    for ( i = 0; i < countAdik; i++)            //looping untuk mengkopi array judul lagu adik ke variabel global
    {
        strcpy(tempSongName2[i], adikSong[i]);  //copy string
    }
    mergeSorted(countIbnu, durationIbnuSong, countAdik, durationAdikSong, mergeIbnuAdikDuration, mode);     //menjalankan prosedur merging array terurut
    for ( i = 0; i < countIbnu+countAdik; i++)  //looping untuk mengkopi hasil sorting dari variabel global ke lokal
    {
        strcpy(mergeIbnuAdikSong[i], tempSongName3[i]);     //copy string
    }
//================================================================  merging array gabungan ibnu dan adik dengan array ayah
    for ( i = 0; i < countIbnu+countAdik; i++)  //looping untuk mengkopi array judul lagu gabungan ibnu dan adik ke variabel global
    {
        strcpy(tempSongName1[i], mergeIbnuAdikSong[i]);     //copy string
    }
    for ( i = 0; i < countAyah; i++)            //looping untuk mengkopi array judul lagu ayah ke variabel global
    {
        strcpy(tempSongName2[i], ayahSong[i]);              //copy string
    }
    mergeSorted(countIbnu+countAdik, mergeIbnuAdikDuration, countAyah, durationAyahSong, mergeFamilyDuration, mode);    //menjalankan prosedur merging array terurut
//================================================================  Output
    for ( i = 0; i < countIbnu; i++)            //looping untuk mengkopi judul lagu ibnu ke variabel global
    {
        strcpy(tempSongName1[i], ibnuSong[i]);  //copy string
    }
    pritnOutput(countIbnu+countAdik+countAyah, mergeFamilyDuration, countIbnu);     //menjalankan prosedur printOutput

    return 0;
}