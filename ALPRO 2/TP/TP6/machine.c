/*
   ============================================================
   | Saya Ghifari Octaverin 2000952 mengerjakan TP6           |
   | dalam mata kuliah Algoritma dan Pemrograman II           |
   | untuk keberkahanNya maka saya tidak melakukan kecurangan |
   | seperti yang telah dispesifikasikan. Aamiin              |
   ============================================================
*/

#include "header.h"     //library header.h

void mergeSorted(int n, float duration1[], int m, float duration2[], float duration3[], char mode){     //prosedur merging array terurut
    int i=0, j=0, k=0, l=0;     //deklarasi iterator
    while (i < n && j < m)      //looping selama kondisi terpenuhi
    {
        if (mode == 'a')        //jika input mode adalah ascending
        {
            if (duration1[i] < duration2[j])    //jika durasi 1 lebih kecil daripada durasi 2
            {
                duration3[k] = duration1[i];    //maka durasi 1 akan dimasukan ke durasi 3
                strcpy(tempSongName3[k], tempSongName1[i]); //tempsongname1 akan di kopi ke tempsongname3
                i++;    //i bertambah 1
                k++;    //k bertambah 1
            }
            else if (duration2[j] < duration1[i])   //jika durasi 2 lebih kecil daripada durasi 1
            {
                duration3[k] = duration2[j];        //maka durasi 2 akan dimasukan ke durasi 3
                strcpy(tempSongName3[k], tempSongName2[j]); //tempsongname2 akan di kopi ke tempsongname3
                j++;    //j bertambah 1
                k++;    //k bertambah 1
            }
            else                                    //jika durasi 1 sama dengan durasi 2
            {
                duration3[k] = duration1[i];        //durasi 1 akan dimasukan ke durasi 3
                strcpy(tempSongName3[k], tempSongName1[i]); //tempsongname1 akan di kopi ke tempsongname3
                i++;    //i bertambah 1
                k++;    //k bertambah 1
                duration3[k] = duration2[j];        //durasi 2 akan dimasukan ke durasi 3
                strcpy(tempSongName3[k], tempSongName2[j]); //tempsongname2 akan di kopi ke tempsongname3
                j++;    //j bertambah 1
                k++;    //k bertmabah 1
            }
        }else                   //jika input mode adalah descending
        {
            if (duration1[i] > duration2[j])    //jika durasi 1 lebih besar daripada durasi 2
            {
                duration3[k] = duration1[i];    //maka durasi 1 akan dimasukan ke durasi 3
                strcpy(tempSongName3[k], tempSongName1[i]); //tempsongname1 akan di kopi ke tempsongname3
                i++;    //i bertambah 1
                k++;    //k bertambah 1
            }
            else if (duration2[j] > duration1[i])   //jika durasi 2 lebih besar daripada durasi 1
            {
                duration3[k] = duration2[j];        //maka durasi 2 akan dimasukan ke durasi 3
                strcpy(tempSongName3[k], tempSongName2[j]); //tempsongname2 akan di kopi ke tempsongname3
                j++;    //j bertambah 1
                k++;    //k bertambah 1
            }
            else                                    //jika durasi 1 sama dengan durasi 2
            {
                duration3[k] = duration1[i];        //maka durasi 1 akan dimasukan ke durasi 3
                strcpy(tempSongName3[k], tempSongName1[i]); //tempsongname1 akan di kopi ke tempsongname3
                i++;    //i bertambah 1
                k++;    //k bertambah 1
                duration3[k] = duration2[j];        //durasi 2 akan dimasukan ke durasi 3
                strcpy(tempSongName3[k], tempSongName2[j]); //tempsongname2 akan di kopi ke tempsongname3
                j++;    //j tertambah 1
                k++;    //k bertambah 1
            }
        }
    }
    if (i < n)      //jika array pertama memiliki sisa
    {
        for ( l = i; l < n; l++)    //looping untuk memasukan array pertama ke array gabungan
        {
            duration3[k] = duration1[l];    //memasukan durasi 1 ke durasi 3
            strcpy(tempSongName3[k], tempSongName1[l]); //tempsongname1 akan dikopi ke tempsongname3
            k++;    //k bertambah 1
        }
    }
    if (j < m)      //jika array kedua memiliki sisa
    {
        for ( l = j; l < m; l++)    //looping untuk memasukan array kedua ke array gabungan
        {
            duration3[k] = duration2[l];    //memasukan durasi 2 ke durasi 3
            strcpy(tempSongName3[k], tempSongName2[l]); //tempsongname2 akan dikopi ke tempsongname3
            k++;    //k bertambah 1
        }
    }
}

void quickSort(float duration[], int left, int right, char mode){   //prosedur quicksort pivot pinggir
    int i, j;               //deklarasi iterator
    float temp;             //deklarasi variabel temporary
    char tempSong[100];     //deklarasi variabel temporary

    i = left;       //nilai i adalah left
    j = right;      //nilai j aadalah right

    do      //akan menjalankan kode yang ada didalam selama syarat terpenuhi
    {
        if (mode == 'a')    //jika input mode ascending
        {
            while (duration[i] < duration[right] && i <= j)     //selama durasi[i] lebih kecil daripada durasi[right] dan i <= j
            {
                i++;    //i bertambah 1
            }
            while (duration[j] > duration[left] && i <= j)      //selama durasi[j] lebih besar daripada durasi[left] dan i <= j
            {
                j--;    //j berkurang 1
            }
        }else               //jika input mode descending
        {
            while (duration[i] > duration[right] && i <= j)     //selama durasi[i] lebih besar daripada durasi[right] dan i <= j
            {
                i++;    //i bertambah 1
            }
            while (duration[j] < duration[left] && i <= j)      //selama durasi[j] lebih kecil daripada durasi[left] dam i <= j
            {
                j--;    //j berkurang 1
            }
        }
        if (i < j)      //jika i lebih kecil daripada j
        {
            temp = duration[i];         //>>
            duration[i] =duration[j];   //>>> swap durasi lagu
            duration[j] = temp;         //>>

            strcpy(tempSong, tempSongName1[i]);         //>>
            strcpy(tempSongName1[i], tempSongName1[j]); //>>> swap judul lagu
            strcpy(tempSongName1[j], tempSong);         //>>
            
            i++;    //i bertambah 1
            j--;    //j berkurang 1
        }
    } while (i < j);

    if (left < j)   //jika left lebih kecil daripada j
    {
        quickSort(duration, left, j, mode); //rekursif
    }
    if (i < right)  //jika right lebih besar daripada i
    {
        quickSort(duration, i, right, mode);    //rekursif
    }
}

void bubbleSort(int count, float duration[], char mode){    //prosedur bubblesort
    int i, swap;        //deklarasi iterator dan variabel penanda swap
    float temp;         //deklarasi variabel temporary
    char tempSong[100]; //deklarasi variabel temporary

    do                  //akan menjalankan kode yang ada didalam sampai tidak ada pertukaran nilai lagi
    {
        swap = 0;       //nilai awal swap
        for ( i = 0; i < count - 1; i++)    //looping pengecekan
        {
            if (mode == 'a')        //jika input mode ascending
            {
                if (duration[i] > duration[i+1])    //jika durasi[i] lebih besar daripada elemen didepannya
                {
                    temp = duration[i];             //>>
                    duration[i] = duration[i+1];    //>>> swap durasi lagu
                    duration[i+1] = temp;           //>>

                    strcpy(tempSong, tempSongName1[i]);             //>>
                    strcpy(tempSongName1[i], tempSongName1[i+1]);   //>>> swap judul lagu
                    strcpy(tempSongName1[i+1], tempSong);           //>>
                    
                    swap = 1;   //nilai swap menjadi 1
                }
            }else                   //jika input mode descending
            {
                if (duration[i] < duration[i+1])    //jika durasi[i] lebih kecil daripada elemen didepannya
                {
                    temp = duration[i];             //>>
                    duration[i] = duration[i+1];    //>>> swap durasi lagu
                    duration[i+1] = temp;           //>>

                    strcpy(tempSong, tempSongName1[i]);             //>>
                    strcpy(tempSongName1[i], tempSongName1[i+1]);   //>>> swap judul lagu
                    strcpy(tempSongName1[i+1], tempSong);           //>>

                    swap = 1;   //nilai swap menjadi 1
                }
            }
        }
    } while (swap == 1);
}

void insertionSort(int count, float duration[], char mode){     //prosedur insertionsort
    int i, j;           //deklarasi iterator
    float key;          //deklarasi variabel kunci
    char keySong[100];  //deklarasi variabel kunci

    for ( i = 0; i < count; i++)    //looping pengecekan
    {
        key = duration[i];  //durasi[i] menjadi kunci
        strcpy(keySong, tempSongName1[i]);  //tempsongname1[i] menjadi kunci
        j = i - 1;      //nilai awal j
        if (mode == 'a')        //jika input mode ascending
        {
            while (j >= 0 && key < duration[j])             //selama nilai j lebih besar sama dengan 0 dan key lebih kecil daripada durasi[j]
            {
                duration[j+1] = duration[j];        //elemen didepan durasi[j] menjadi nilai baru durasi[j]
                strcpy(tempSongName1[j+1], tempSongName1[j]);   //elemen didepan tempsongname1[j] menjadi nilai baru tempsongname1[j]
                j--;    //j berkurang 1
            }
        }else                   //jika input mode descending
        {
            while (j >= 0 && key > duration[j])             //selama nilai j lebih besar sama dengan 0 dan key lebih besar daripada durasi[j]
            {
                duration[j+1] = duration[j];        //elemen didepan durasi [j] menjadi nilai baru durasi[j]
                strcpy(tempSongName1[j+1], tempSongName1[j]);   //elemen didepan tempsongname1[j] menjadi nilai baru tempsongname1[j]
                j--;    //j berkurang 1
            }
        }
        duration[j+1] = key;    //key menjadi nilai baru durasi[j+1]
        strcpy(tempSongName1[j+1], keySong);    //key menjadi nilai baru tempsongname1[j+1]
    }
}

void selectionSort(int count, float duration[], char mode){     //prosedur selectionsort
    int i, j, idx;          //deklarasi iterator dan variabel index
    float tempDuration;     //deklarasi variabel temporary
    char tempSong[100];     //deklarasi variabel temporary

    for ( i = 0; i < count - 1; i++)        //looping pengecekan
    {
        idx = i;    //i menjadi nilai idx
        for ( j = i + 1; j < count; j++)    //looping pengecekan
        {
            if (mode == 'a')    //jika input mode ascensing
            {
                if (duration[idx] > duration[j])    //jika durasi[idx] lebih besar daripada durasi[j]
                {
                    idx = j;    //j menjadi nilai baru idx
                }
            }else               //jika input mode descending
            {
                if (duration[idx] < duration[j])    //jika durasi[idx] lebih kecil daripada durasi[j]
                {
                    idx = j;    //j menjadi nilai baru idx
                }
            }
        }
        tempDuration = duration[i];     //>>
        duration[i] = duration[idx];    //>>> swap durasi lagu
        duration[idx] = tempDuration;   //>>

        strcpy(tempSong, tempSongName1[i]);             //>>
        strcpy(tempSongName1[i], tempSongName1[idx]);   //>>> swap judul lagu
        strcpy(tempSongName1[idx], tempSong);           //>>
    }
}

void pritnOutput(int count, float duration[], int countIbnu){       //prosedur printoutput
    int i, j, found=0;      //deklarasi iterator dan variabel found dengan nilai awal 0
    printf("Daftar Lagu Keluarga:\n");
    for ( i = 0; i < count; i++)    //looping
    {
        printf("%0.2f %s\n", duration[i], tempSongName3[i]);    //output durasi lagu dan judul lagu gabungan
    }
    printf("\n");
    printf("Lagunya Ibnu:\n");
    for ( i = 0; i < countIbnu; i++)    //looping
    {
        if (count % 2 != 0)     //jika nilai total banyaknya array lagu ganjil
        {
            for ( j = 0; j < (count/2)+1; j++)  //looping sampai (count/2)+1
            {
                if (strcmp(tempSongName1[i], tempSongName3[j]) == 0)    //jika ditemukan lagu ibnu di setengah array total dari depan
                {
                    printf("%s\n", tempSongName3[j]);   //output judul lagu
                    found++;    //found bertambah 1
                }
            }
        }else                   //jika nilai total banyaknya array lagu genap
        {
            for ( j = 0; j < count/2; j++)      //looping sampai count/2
            {
                if (strcmp(tempSongName1[i], tempSongName3[j]) == 0)    //jika ditemukan lagu ibnu di setengah array total dari depan
                {
                    printf("%s\n", tempSongName3[j]);   //output judul lagu
                    found++;    //found bertambah 1
                }
            }
        }
    }
    if (found == 0)     //jika disetengah array dari depan tidak ditemukan lagu ibnu
    {
        printf("Tidak memutar lagu Ibnu\n");    //output
    }
}