/*
   ============================================================
   | Saya Ghifari Octaverin 2000952 mengerjakan TP7           |
   | dalam mata kuliah Algoritma dan Pemrograman II           |
   | untuk keberkahanNya maka saya tidak melakukan kecurangan |
   | seperti yang telah dispesifikasikan. Aamiin              |
   ============================================================
*/

#include "header.h"

int checkSorted(float arr[], int count){        //fungsi pengecekan urutan array
    int i=0, sorted=1;  //deklarasi variabel

    while (i < count-1 && sorted == 1)  //looping selama array masih berurutan
    {
        if (arr[i] < arr[i+1])  //jika array masih berurutan
        {
            sorted = 1; //nilai sorted tetap 1
        }else                   //jika array sudah tidak berurutan
        {
            sorted = 0; //nilai sorted menjadi 0
        }
        i++;    //i bertambah 1
    }
    return sorted;  //return nilai sorted
}

void sorting(int count, float arr[], data student[]){       //prosedur sorting menggunakan selection sorting secara ascending
    int i, j, tempInt, idx;     //deklarasi variabel
    char tempChar[100];         //deklarasi variabel
    
    for ( i = 0; i < count - 1; i++)    //looping pengecekan
    {
        idx = i;                //nilai idx adalah i
        for ( j = i+1; j < count; j++)  //looping pengecekan
        {
            if (arr[idx] > arr[j])  //jika array dengan indeks idx lebih besar daripada array dengan indeks j
            {
                idx = j;            //maka j menjadi nilai baru idx
            }
        }
        tempInt = arr[i];   //>>
        arr[i] = arr[idx];  //>>> swap nilai rata rata
        arr[idx] = tempInt; //>>
        
        strcpy(tempChar, student[i].name);          //>>
        strcpy(student[i].name, student[idx].name); //>>> swap nama siswa
        strcpy(student[idx].name, tempChar);        //>>
        
        if (student[i].activity > student[idx].activity)    //jika banyak kegiatan di indeks i lebih besar daripada banyak kegiatan di indeks idx
        {
            for ( j = 0; j < student[i].activity; j++)      //looping untuk swap nilai kegiatan
            {
                tempInt = student[i].activityGrade[j];                          //>>
                student[i].activityGrade[j] = student[idx].activityGrade[j];    //>>> swap nilai kegiatan
                student[idx].activityGrade[j] = tempInt;                        //>>
            }
        }else                                               //jika banyak kegiatan di indeks i lebih besar daripada banyak kegiatan di indeks idx
        {
            for ( j = 0; j < student[idx].activity; j++)    //looping untuk swap nilai kegiatan
            {
                tempInt = student[i].activityGrade[j];                          //>>
                student[i].activityGrade[j] = student[idx].activityGrade[j];    //>>> swap nilai kegiatan
                student[idx].activityGrade[j] = tempInt;                        //>>
            }
        }

        tempInt = student[i].activity;                  //>>
        student[i].activity = student[idx].activity;    //>>> swap banyaknya kegiatan
        student[idx].activity = tempInt;                //>>
    }
}

void seqSearch(data student[], int count, int search){      //prosedur sequantial search
    int i=0, found=0;   //deklarasi variabel

    while (i < count && found == 0) //looping sampai indeks yang dicari ketemu
    {
        if (i == search)    //jika nilai indeks i sama dengan indeks yang dicari
        {
            found = 1;  //found manjadi 1
        }else   //jika belum/tidak ketemu
        {
            i++;    //i bertambah 1
        }
    }
    if (found == 1) //jika indeks yang dicari ketemu
    {
        printf("Yang Diminta : %s\n", student[i].name); //output
    }
}

void binSearch(data student[], int count, int search){      //prosedur binary search
    int i=0, j, found=0;    //deklarasi variabel
    count--;    //count berkurang 1

    while (i <= count && found == 0)    //looping sampai indeks yang dicari ketemu
    {
        j = (int)(i+count)/2;   //j merupakan hasil pembulatan (i+count)/2
        if (j == search)    //jika indeks j sama dengan yang dicari
        {
            found = 1;  //found menjadi 1
        }else   //jika belum/tidak ketemu
        {
            if (j > search) //jika j nilainya lebih besar daripada yang dicari
            {
                count = j - 1;  //maka nilai count menjadi j - 1;
            }else           //jika j nilainya lebih kecil daripada yang dicari
            {
                i = j + 1;  //maka nilai i menjadi j + 1
            }
        }        
    }
    if (found == 1) //jika indeks yang dicari ketemu
    {
        printf("Yang Diminta : %s\n", student[i].name); //output
    }
}

void output(data student[], int count){     //prosedur output
    int i;  //deklarasi variabel
    
    for ( i = 0; i < count; i++)        //looping untuk output
    {
        printf("%s\n", student[i].name);    //output
    }
    printf("\n");   //newline
}