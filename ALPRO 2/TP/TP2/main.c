/*
   ============================================================
   | Saya Ghifari Octaverin 2000952 mengerjakan TP2           |
   | dalam mata kuliah Algoritma dan Pemrograman II           |
   | untuk keberkahanNya maka saya tidak melakukan kecurangan |
   | seperti yang telah dispesifikasikan. Aamiin              |
   ============================================================
*/

#include "header.h"                 //LIBRARY HEADER.H

int main(){
    int row, column, i, j, k, idx=0;    //deklarasi variable lokal dan nilai awal
    scanf("%d %d", &row, &column);      //meminta input untuk baris dan kolom matrix
    int count=0, lenmax[100];           //deklarasi variable lokal dan nilai awal
    data student[row][column];          //membuka bungkusan tipe data terstuktur
    
    for ( i = 0; i < row; i++)          //looping baris
    {
        for ( j = 0; j < column; j++)   //looping kolom
        {
            scanf("%s", &student[i][j].name);               //meminta input string nama
            scanf("%d %d %d", &student[i][j].grade1, &student[i][j].grade2, &student[i][j].grade3);
        }       // ^--^--^--> meminta input 3 nilai 
    }
    
    do      //akan menjalankan code program yang ada didalam selama syarat terpenuhi
    {
        scanf("%s", &search[count]);                //meminta input string yang akan di ganti
        if (strcmp(search[count], "stop") != 0)     //selama input string yang akan di ganti bukan "stop"
        {
            scanf("%s", &target[count]);            //meminta input string yang akan menjadi pengganti
            count++;                                //nilai count akan terus bertambah 1
        }
    } while (strcmp(search[count], "stop") != 0);   //kode diatas akan terus dijalankan selama string yang akan diganti bukan "stop"

    printf("Posisi Bangku Awal:\n");
    for ( i = 0; i < column; i++)       //looping kolom
    {
        lenmax[i] = 0;                  //mengisi nilai awal lenmax menjadi 0
    }       // ^-------> indeks sebanyak kolom
    for ( i = 0; i < row; i++)          //looping baris
    {
        for ( j = 0; j < column; j++)   //looping kolom
        {
            if (strlen(student[i][j].name) > lenmax[j])     //jika panjang string nama lebih panjang daripada lenmax
            {
                lenmax[j] = strlen(student[i][j].name);     //maka panjang string nama tersebut menjadi nilai baru lenmax
            }
        }
    }
    int spacing=0;                      //deklarasi variable lokal dan nilai awalnya
    for ( i = 0; i < row; i++)          //looping baris
    {
        for ( j = 0; j < column; j++)   //looping kolom
        {
            printf("%s", student[i][j].name);   //output string pada saat belum swap posisi
            if (j != column-1)                  //selama j bukan merupakan indeks dari string kolom terakhir
            {
                spacing = lenmax[idx] - strlen(student[i][j].name) + 2; //nilai spacing adalah panjang lenmax per kolom dikurang panjang string nama ditambah 2
                for ( k = 0; k < spacing; k++)      //looping sebanyak spacing
                {
                    printf(" ");                    //output spasi
                }
                idx++;          //nilai idx akan terus berambah 1
            }
        }
        idx=0;                  //mengembalikan nilai idx menjadi 0
        printf("\n");           //output newline
    }
    printf("\n");               //output newline
    dataSearch(row, column, student, count);        //memanggil prosedur dataSearch
    spacing=0;                  //mengembalikan nilai spacing menjadi 0
    printf("Posisi Bangku Setelah Nilai Dicek:\n");
    for ( i = 0; i < column; i++)       //looping kolom
    {
        lenmax[i]=0;                    //mengisi nilai awal lenmax menjadi 0
    }       // ^------> indeks sebanyak kolom
    for ( i = 0; i < row; i++)          //looping baris
    {
        for ( j = 0; j < column; j++)   //looping kolom
        {
            if (strlen(student[i][j].name) > lenmax[j])     //jika panjang string nama lebih panjang daripada lenmax
            {
                lenmax[j] = strlen(student[i][j].name);     //maka panjang string nama tersebut akan menjadi nilai lenmax baru
            }
        }
    }
    idx=0;                  //membuat nilai idx menjadi 0
    for ( i = 0; i < row; i++)          //looping baris
    {
        for ( j = 0; j < column; j++)   //looping kolom
        {
            printf("%s", student[i][j].name);       //output string nama
            if (j != column-1)                      //selama j bukan merupakan indeks dari string kolom terakhir
            {
                spacing = lenmax[idx] - strlen(student[i][j].name) + 2;     //nilai spacing adalah panjang lenmax per kolom dikurang panjang string nama ditambah 2
                for ( k = 0; k < spacing; k++)      //looping sebanyak spacing
                {
                    printf(" ");        //output spasi
                }
                idx++;          //nilai dari idx akan terus bertambah 1
            }
        }
        idx=0;              //mengembalikan nilai idx menjadi 0
        printf("\n");       //output newline
    }
    
    return 0;
}