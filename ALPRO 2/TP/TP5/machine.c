/*
   ============================================================
   | Saya Ghifari Octaverin 2000952 mengerjakan TP5           |
   | dalam mata kuliah Algoritma dan Pemrograman II           |
   | untuk keberkahanNya maka saya tidak melakukan kecurangan |
   | seperti yang telah dispesifikasikan. Aamiin              |
   ============================================================
*/

#include "header.h"

void quickSort(float decimal[], int left, int right, char mode, int top[], int bot[]){
    //prosedur quickSort dengan pivot tengah
    int i, j, intTemp;  //deklarasi variabel integer
    i=left;     //i akan dimulai dari kiri array
    j=right;    //i akan dimulai dari kanan array
    float floatTemp, pivot = decimal[(left+right)/2];   //deklarasi variabel float
                            //^^^^^  ----> pivot diambil dari tengah array
    do
    {
        switch (mode)
        {
        case 'a':   //jika inputan mode berupa a yang artinya ascending
            while (decimal[i] < pivot && i <= j)    //selama nilai decimal[i] < pivot dan i <= j
            {
                i++;    //maka nilai i akan bertambah 1
            }
            while (decimal[j] > pivot && i <= j)    //selama nilai decimal[j] < pivot dan i <= j
            {
                j--;    //maka nilai j akan berkurang 1
            }
            break;
        case 'd':   //jika inputan mode berupa d yang artinya descending
            while (decimal[i] > pivot && i <= j)    //selama nilai decimal[i] > pivot dan i <= j
            {
                i++;    //maka nilai i akan bertambah 1
            }
            while (decimal[j] < pivot && i <= j)    //selama nilai decimal[j] < pivot dan i <= j
            {
                j--;    //maka nilai j akan berkurang 1
            }
            break;
        default:
            break;
        }
        if (i < j)      //jika nilai i < j
        {
            floatTemp = decimal[i];     //>>>
            decimal[i] = decimal[j];    //>>>>> swap posisi
            decimal[j] = floatTemp;     //>>>

            intTemp = top[i];           //>>>
            top[i] = top[j];            //>>>>> swap posisi
            top[j] = intTemp;           //>>>

            intTemp = bot[i];           //>>>
            bot[i] = bot[j];            //>>>>> swap posisi
            bot[j] = intTemp;           //>>>

            i++;    //nilai i akan bertambah 1
            j--;    //nilai j akan berkurang 1
        }
    } while (i < j);    //akan menjalankan kode diatas selama nilai i < j
    
    if ((j > left) && (right > j))  //jika nilai j > left dan right > j
    {
        quickSort(decimal, left, j, mode, top, bot);    //memanggil prosedur quickSort (rekursif)
    }
    if ((i < right) && (left < i))  //jika nilai i < right dan left < i
    {
        quickSort(decimal, i, right, mode, top, bot);   //memanggil prosedur quickSort (rekursif)
    }
}

void bubbleSort(float decimal[], int count, char mode, int top[], int bot[]){
    //prosedur bubbleSort
    int i, swap, intTemp;   //deklarasi variabel integer
    float floatTemp;        //deklarasi variabel float
    
    do
    {
        swap = 0;   //membuat nilai swap menjadi 0 yang menjadi penanda pertukaran data
        for ( i = 0; i < count-1; i++)
        {
            switch (mode)
            {
            case 'a':   //jika inputan mode berupa a yang artinya ascending
                if (decimal[i] > decimal[i+1])  //jika nilai decimal[i] lebih besar daripada nilai di depannya
                {
                    floatTemp = decimal[i];     //>>>
                    decimal[i] = decimal[i+1];  //>>>>> swap posisi
                    decimal[i+1] = floatTemp;   //>>>

                    intTemp = top[i];           //>>>
                    top[i] = top[i+1];          //>>>>> swap posisi
                    top[i+1] = intTemp;         //>>>

                    intTemp = bot[i];           //>>>
                    bot[i] = bot[i+1];          //>>>>> swap posisi
                    bot[i+1] = intTemp;         //>>>

                    swap = 1;   //nilai swap menjadi 1, yaitu menandai adanya data yang ditukar
                }
                break;
            case 'd':   //jika inputan mode berupa d yang artinya descending
                if (decimal[i] < decimal[i+1])  //jika nilai decimal[i] lebih kecil daripada nilai di depannya
                {
                    floatTemp = decimal[i];     //>>>
                    decimal[i] = decimal[i+1];  //>>>>> swap posisi
                    decimal[i+1] = floatTemp;   //>>>

                    intTemp = top[i];           //>>>
                    top[i] = top[i+1];          //>>>>> swap posisi
                    top[i+1] = intTemp;         //>>>

                    intTemp = bot[i];           //>>>
                    bot[i] = bot[i+1];          //>>>>> swap posisi
                    bot[i+1] = intTemp;         //>>>
                    
                    swap = 1;   //nilai swap menjadi 1, yaitu menandai adanya data yang ditukar
                }
                break;
            default:
                break;
            }
        }
    } while (swap == 1);    //kode diatas akan terus dijalankan sampai tidak ada lagi pertukaran data
}

void printResult(int count, int top[], int bot[]){
    //prosedur printResult
    int i;      //deklarasi variabel integer
    for ( i = 0; i < count; i++)    //looping sebanyak count
    {
        printf("%d", top[i]);   //output pembilang
        if (i != count-1)       //jika i bukan indeks terakhir
        {
            printf("   ");      //output
        }
    }
    printf("\n");               //newline
    for ( i = 0; i < count; i++)    //looping sebanyak count
    {
        printf("-");            //output
        if (i != count-1)       //jika i bukan indeks terakhir
        {
            printf(" , ");      //output
        }
    }
    printf("\n");               //newline
    for ( i = 0; i < count; i++)    //looping sebanyak count
    {
        printf("%d", bot[i]);   //output penyebut
        if (i != count-1)       //jika i bukan indeks terakhir
        {
            printf("   ");      //output
        }
    }
    printf("\n");               //newline
}