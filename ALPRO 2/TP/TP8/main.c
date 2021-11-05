/*
   ============================================================
   | Saya Ghifari Octaverin 2000952 mengerjakan TP8           |
   | dalam mata kuliah Algoritma dan Pemrograman II           |
   | untuk keberkahanNya maka saya tidak melakukan kecurangan |
   | seperti yang telah dispesifikasikan. Aamiin              |
   ============================================================
*/

#include "header.h"

int main(){
    int i, j;   //variabel iterator

    readRecords();  //menjalankan prosedur membaca file

    //feature to add more records to listFilm, Sutradara, Genre, and Bioskop
    printf("Ingin Menambahkan Data Pada Records? (Y/N)\n");
    char choice;    //variabel untuk menyimpan pilihan user
    int record;     //variabel untuk menyimpan pilihan user
    scanf(" %c", &choice);      //meminta input pada user untuk ingin menambahkan data atau tidak
    if (choice == 'y' || choice == 'Y')     //jika pilihan user adalah untuk menambahkan data
    {
        do
        {
            printf("Data Manakah Yang Ingin Anda Tambahkan?\n1. ListFilm\n2. Sutradara\n3. Genre\n4. Bioskop\nMasukan Pilihan Anda : ");
            scanf("%d", &record);   //meminta input user untuk file mana yang akan ditambahkan data
            printf("Untuk Berhenti Memasukan Data, Ketik ""####""\nMasukan Data :\n");
            switch (record)
            {
            case 1: //jika pilihan user 1 atau ListFilm.dat
                appendListFilm();   //menjalankan prosedur appendListFilm
                break;
            case 2: //jika pilihan user 2 atau Sutradara.dat
                appendSutradara();  //menjalankan prosedur appendSutradara
                break;
            case 3: //jika pilihan user 3 atau Genre.dat
                appendGenre();      //menjalankan prosedur appendGenre
                break;
            case 4: //jika pilihan user 4 atau Bioskop.dat
                appendBioskop();    //menjalankan prosedur appendBioskop
                break;
            default:
                break;
            }
            printf("Apakah Anda Ingin Memasukan Data Pada Menu Lainnya? (Y/N)\n");
            scanf(" %c", &choice);  //meminta input user apakah ingin menambahkan data pada menu lainnya atau tidak
            system("cls");
        } while (choice == 'Y' || choice == 'y');   //akan looping selama inputan user 'Y' atau 'y'
    }

    int maxTitle=0, maxDirect=0, maxGenre=0, maxCinema=0;   //mendeklarasikan variabel untuk menampung panjang string maksimal
    for ( i = 0; i < countFilm; i++)    //looping pengecekan listFilm
    {
        if (strlen(listFilm[i].title) > maxTitle)   //jika panjang string lebih panjang daripada maxTitle
        {
            maxTitle = strlen(listFilm[i].title);   //maka panjang string tersebut menjadi nilai maxTitle baru
        }
        for ( j = 0; j < countDirector; j++)    //looping pengecekan Sutradara
        {
            if (strlen(listDirector[j].director) > maxDirect)   //jika panjang string nama Sutradara lebih panjang daripada maxDirect
            {
                maxDirect = strlen(listDirector[j].director);   //maka panjang string tersebut menjadi nilai maxDirect baru
            }
            if (strcmp(listFilm[i].director, listDirector[j].id) == 0)  //jika ID sutradara pada ListFilm.dat sama dengan ID di Sutradara.dat 
            {
                strcpy(listFilm[i].director, listDirector[j].director); //maka akan mengkopi nama sutradara di sutradara.dat ke ListFilm.dat
            }
        }
        for ( j = 0; j < countGenre; j++)       //looping pengecekan genre
        {
            if (strlen(listGenre[j].genre) > maxGenre)  //jika panjang string genre lebih panjang daripada maxGenre
            {
                maxGenre = strlen(listGenre[j].genre);  //maka panjang string tersebut menjadi nilai maxGenre baru
            }
            if (strcmp(listFilm[i].genre, listGenre[j].id) == 0)    //jika ID genre pada ListFilm.dat sama dengan ID di Genre.dat
            {
                strcpy(listFilm[i].genre, listGenre[j].genre);  //maka akan mengkopi genre di Genre.dat ke ListFilm.dat
            }
        }
        for ( j = 0; j < countCinema; j++)      //looping pengecekan bioskop
        {
            if (strlen(listCinema[j].cinema) > maxCinema)   //jika panjang string bioskop lebih panjang daripada maxCinema
            {
                maxCinema = strlen(listCinema[j].cinema);   //maka panjang string tersebut menjadi nilai maxCinema baru
            }
            if (strcmp(listFilm[i].cinema, listCinema[j].id) == 0)  //jika ID bioskop pada ListFilm.dat sama dengan ID di Bioskop.dat
            {
                strcpy(listFilm[i].cinema, listCinema[j].cinema);   //maka akan mengkopi nama bioskop di Bioskop.dat ke ListFilm.dat
            }
        }
    }

    output(maxTitle, maxDirect, maxGenre, maxCinema);   //memanggil prosedur output

    fList = fopen("ListFilmFinal.dat", "w");    //membuka file ListFilmDinal.dat dengan mode write
    for ( i = 0; i < countFilm; i++)    //looping untuk write data kedalam file ListFilmFinal.dat
    {
        fprintf(fList, "%s %s %s %s\n", listFilm[i].title, listFilm[i].director, listFilm[i].genre, listFilm[i].cinema);    //string yang akan di write kedalam file
    }
    fprintf(fList, "#### #### #### ####");  //END OF FILE
    fclose(fList);  //menutup file

    return 0;
}