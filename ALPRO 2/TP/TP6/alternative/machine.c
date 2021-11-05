/*
   ============================================================
   | Saya Ghifari Octaverin 2000952 mengerjakan TP6           |
   | dalam mata kuliah Algoritma dan Pemrograman II           |
   | untuk keberkahanNya maka saya tidak melakukan kecurangan |
   | seperti yang telah dispesifikasikan. Aamiin              |
   ============================================================
*/

#include "header.h"     //library header.h

void mergeSorted(int n, song arr1[], int m, song arr2[], song arr3[], char mode){   //prosedur merging array terurut
    int i=0, j=0, k=0, l=0;     //deklarasi iterator
    
    while (i < n && j < m)      //looping selama kondisi terpenuhi
    {
        if (mode == 'a')        //jika mode yang di input ascending
        {
            if (arr1[i].duration < arr2[j].duration)        //jika durasi array 1 lebih kecil daripada array 2
            {
                arr3[k].duration = arr1[i].duration;        //maka durasi array 1 akan dimasukan ke array 3
                strcpy(arr3[k].title, arr1[i].title);       //judul array 1 akan di kopi ke array 3
                i++;    //i bertambah 1
                k++;    //k bertambah 1
            }else if (arr2[j].duration < arr1[i].duration)  //jika durasi array 2 lebih kecil daripada array 1
            {
                arr3[k].duration = arr2[j].duration;        //maka durasi array 2 akan dimasukan ke array 3
                strcpy(arr3[k].title, arr2[j].title);       //judul array 2 alam di kopi ke array 3
                j++;    //j bertambah 1
                k++;    //k bertambah 1
            }else                                           //jika durasi array 1 sama dengan array 2
            {
                arr3[k].duration = arr1[i].duration;        //durasi array 1 akan dimasukan ke array 3
                strcpy(arr3[k].title, arr1[i].title);       //judul array 1 akan di kopi ke array 3
                i++;    //i bertambah 1
                k++;    //k bertambah 1
                arr3[k].duration = arr2[j].duration;        //durasi array 2 akan dimasukan ke array 3
                strcpy(arr3[k].title, arr2[j].title);       //judul array 2 akan di kopi ke array 3
                j++;    //j bertambah 1
                k++;    //k bertambah 1
            }
        }else                   //jika mode yang di input descending
        {
            if (arr1[i].duration > arr2[j].duration)        //jika durasi array 1 lebih besar daripada array 2
            {
                arr3[k].duration = arr1[i].duration;        //maka durasi array 1 akan dimasukan ke array 3
                strcpy(arr3[k].title, arr1[i].title);       //judul array 1 akan di kopi ke array 3
                i++;    //i bertambah 1
                k++;    //k bertambah 1
            }else if (arr2[j].duration > arr1[i].duration)  //jika durasi array 2 lebih besar daripada array 1
            {
                arr3[k].duration = arr2[j].duration;        //maka durasi array 2 akan dimasukan ke array 3
                strcpy(arr3[k].title, arr2[j].title);       //judul array 2 akan di kopi ke array 3
                j++;    //j bertambah 1
                k++;    //k bertambah 1
            }else                                           //jika durasi array 1 sama dengan array 2
            {
                arr3[k].duration = arr1[i].duration;        //maka durasi array 1 akan dimasukan ke array 3
                strcpy(arr3[k].title, arr1[i].title);       //judul array 1 akan di kopi ke array 3
                i++;    //i bertambah 1
                k++;    //k bertambah 1
                arr3[k].duration = arr2[j].duration;        //maka durasi array 2 akan dimasukan ke array 3
                strcpy(arr3[k].title, arr2[j].title);       //judul array 2 akan di kopi ke array 3
                j++;    //j bertambah 1
                k++;    //k bertambah 1
            }
        }
    }
    if (i < n)      //jika array 1 memiliki sisa
    {
        for ( l = i; l < n; l++)    //looping untuk memasukan sisa array 1 ke array 3
        {
            arr3[k].duration = arr1[l].duration;            //durasi array 1 akan dimasukan ke array 3
            strcpy(arr3[k].title, arr1[l].title);           //judul array 1 akan di kopi ke array 3
            k++;    //k bertambah 1
        }
    }
    if (j < m)      //jika array 2 memiliki sisa
    {
        for ( l = j; l < m; l++)    //looping untuk memasukan sisa array 2 ke array 3
        {
            arr3[k].duration = arr2[l].duration;            //durasi array 2 akan dimasukan ke array 3
            strcpy(arr3[k].title, arr2[l].title);           //judul array 2 akan di kopi ke array 3
            k++;    //k bertambah 1
        }
    }
}

void quickSort(song arr[], int left, int right, char mode){     //prosedur quicksort
    int i, j;               //deklarasi iterator
    float tempDuration;     //deklarasi variabel untuk menampung nilai temporary
    char tempTitle[100];    //deklarasi variabel untuk menampung nilai temporary

    i=left;     //nilai i adalah left
    j=right;    //nilai j adalah right

    do          //akan menjalankan kode yang ada didalam selama syarat terpenuhi
    {
        if (mode == 'a')    //jika mode yang di input ascending
        {
            while (arr[i].duration < arr[right].duration && i <= j) //jika durasi dengan indeks i lebih kecil daripada indeks right dan i lebih kecil sama dengan j
            {
                i++;    //i bertambah 1
            }
            while (arr[j].duration > arr[left].duration && i <= j)  //jika durasi dengan indeks j lebih besar daripada indeks left dan i lebih kecil sama dengan j
            {
                j--;    //j berkurang 1
            }
        }else               //jika mode yang di input descending
        {
            while (arr[i].duration > arr[right].duration && i <= j) //jika durasi dengan indeks i lebih besar daripada indeks right dan i lebih kecil sama dengan j
            {
                i++;    //i bertambah 1
            }
            while (arr[j].duration < arr[left].duration && i <= j)  //jika durasi dengan indeks j lebih kecil daripada indeks left dan i lebih kecil sama dengan j
            {
                j--;    //j berkurang 1
            }
        }
        if (i < j)      //jika i lebih kecil daripada j
        {
            tempDuration = arr[i].duration;     //>>
            arr[i].duration = arr[j].duration;  //>>>   swap durasi
            arr[j].duration = tempDuration;     //>>
            
            strcpy(tempTitle, arr[i].title);    //>>
            strcpy(arr[i].title, arr[j].title); //>>>   swap judul
            strcpy(arr[j].title, tempTitle);    //>>

            i++;    //i bertambah 1
            j--;    //j berkurang 1
        }
    } while (i < j);
    
    if (left < j)   //jika left lebih kecil daripada j
    {
        quickSort(arr, left, j, mode);      //rekursif
    }
    if (i < right)  //jika i lebih kecil daripada right
    {
        quickSort(arr, i, right, mode);     //rekursif
    }
}

void bubbleSort(int count, song arr[], char mode){      //prosedur bubblesort
    int i, swap;            //deklarasi iterator dan variabel penanda swap
    float tempDuration;     //deklarasi variabel untuk menampung nilai temporary
    char tempTitle[100];    //deklarasi variabel untuk menampung nilai temporary

    do                  //akan menjalankan kode yang ada didalam sampai tidak ada pertukaran nilai lagi
    {
        swap=0;
        for ( i = 0; i < count - 1; i++)    //looping pengecekan
        {
            if (mode == 'a')    //jika mode yang di input ascending
            {
                if (arr[i].duration > arr[i+1].duration)    //jika durasi dengan indeks i lebih besar daripada elemen didepannya
                {
                    tempDuration = arr[i].duration;         //>>
                    arr[i].duration = arr[i+1].duration;    //>>>   swap durasi
                    arr[i+1].duration = tempDuration;       //>>

                    strcpy(tempTitle, arr[i].title);        //>>
                    strcpy(arr[i].title, arr[i+1].title);   //>>>   swap judul
                    strcpy(arr[i+1].title, tempTitle);      //>>

                    swap = 1;   //nilai swap menjadi 1
                }
            }else               //jika mode yang di input descending
            {
                if (arr[i].duration < arr[i+1].duration)    //jika durasi dengan indeks i lebih kecil daripada elemen didepannya
                {
                    tempDuration = arr[i].duration;         //>>
                    arr[i].duration = arr[i+1].duration;    //>>>   swap durasi
                    arr[i+1].duration = tempDuration;       //>>

                    strcpy(tempTitle, arr[i].title);        //>>
                    strcpy(arr[i].title, arr[i+1].title);   //>>>   swap judul
                    strcpy(arr[i+1].title, tempTitle);      //>>

                    swap = 1;   //nilai swap menjadi 1
                }
            }
        }
    } while (swap == 1);
}

void insertionSort(int count, song arr[], char mode){       //prosedur insertionsort
    int i, j;           //deklarasi iterator
    float keyDuration;  //deklarasi variabel kunci
    char keyTitle[100]; //deklarasi variabel kunci

    for ( i = 0; i < count; i++)        //looping pengecekan
    {
        keyDuration = arr[i].duration;  //memasukan nilai durasi ke variabel kunci
        strcpy(keyTitle, arr[i].title); //memasukan judul ke variabel kunci
        j = i - 1;          //nilai awal j adalah i - 1
        if (mode == 'a')    //jika mode yang di input ascending
        {
            while (j >= 0 && keyDuration < arr[j].duration) //selama j nilainya lebih besar sama dengan 0 dan kunci lebih kecil daripada durasi
            {
                arr[j+1].duration = arr[j].duration;        //memasukan nilai array dengan indeks j+1 ke indeks j
                strcpy(arr[j+1].title, arr[j].title);       //memasukan nilai array dengan indeks j+1 ke indeks j
                j--;        //j berkurang 1
            }
        }else               //jika mode yang di input descending
        {
            while (j >= 0 && keyDuration > arr[j].duration) //selama j nilainya lebih besar sama dengan 0 dan kunci lebih besar daripada durasi
            {
                arr[j+1].duration = arr[j].duration;        //memasukan nilai array dengan indeks j+1 ke indeks j
                strcpy(arr[j+1].title, arr[j].title);       //memasukan nilai array dengan indeks j+1 ke indeks j
                j--;        //j berkurang 1
            }
        }
        arr[j+1].duration = keyDuration;    //memasukan nilai kunci ke array dengan indeks j+1
        strcpy(arr[j+1].title, keyTitle);   //memasukan nilai kunci ke array dengan indeks j+1
    }
}

void selectionSort(int count, song arr[], char mode){       //prosedur selectionsort
    int i, j, idx;          //deklarasi iterator dan variabel index
    float tempDuration;     //deklarasi variabel untuk menampung nilai temporary
    char tempTitle[100];    //deklarasi variabel untuk menampung nilai temporary

    for ( i = 0; i < count - 1; i++)    //looping pengecekan
    {
        idx = i;            //nilai awal idx adalah i
        for ( j = i+1; j < count; j++)  //looping pengecekan
        {
            if (mode == 'a')            //jika mode yang di input ascending
            {
                if (arr[idx].duration > arr[j].duration)    //saat durasi dengan indeks idx lebih besar daripada durasi dengan indeks j
                {
                    idx = j;            //j menjadi nilai baru idx
                }
            }else                       //jika mode yang di input descending
            {
                if (arr[idx].duration < arr[j].duration)    //saat durasi dengan indeks idx lebih kecil daripada durasi dengan indeks j
                {
                    idx = j;            //j menjadi nilai baru idx
                }
            }
        }
        tempDuration = arr[i].duration;         //>>
        arr[i].duration = arr[idx].duration;    //>>> swap durasi
        arr[idx].duration = tempDuration;       //>>

        strcpy(tempTitle, arr[i].title);        //>>
        strcpy(arr[i].title, arr[idx].title);   //>>> swap judul
        strcpy(arr[idx].title, tempTitle);      //>>
    }
}

void printOutput(int count, song arrMerge[], song Ibnu[], int countIbnu){     //prosedur printoutput
    int i, j, found=0;      //deklarasi iterator dan variabel found dengan nilai awal 0
    
    printf("Daftar Lagu Keluarga:\n");
    for ( i = 0; i < count; i++)        //looping untuk mengeluarkan output
    {
        printf("%0.2f %s\n", arrMerge[i].duration, arrMerge[i].title);    //output durasi dan judul lagu gabungan
    }
    printf("\n");
    printf("Lagunya Ibnu:\n");
    if (count % 2 != 0)             //jika jumlah indeks array gabungan ganjil
    {
        count = (count / 2) + 1;    //maka setekah di bagi dua akan digenapkan ke depan
    }else                           //jika jumlah indeks array gabungan genap
    {
        count/=2;                   //maka akan di bagi dua
    }
    for ( i = 0; i < countIbnu; i++)    //looping untuk mengeluarkan output
    {
        for ( j = 0; j < count; j++)    //looping untuk mengeluarkan output
        {
            if (strcmp(Ibnu[i].title, arrMerge[j].title) == 0)  //jika pada setelah array array gabungan terdapat judul lagu ibnu
            {
                printf("%s\n", arrMerge[j].title);      //akan mengeluarkan judul lagu ibnu
                found++;        //found bertambah 1
            }
        }
    }
    if (found == 0)     //jika pada setengah array gabungan tidak ditemukan judul lagu ibnu
    {
        printf("Tidak memutar lagu Ibnu\n");
    }
}