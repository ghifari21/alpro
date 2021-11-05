/*
   ============================================================
   | Saya Ghifari Octaverin 2000952 mengerjakan TP1           |
   | dalam mata kuliah Algoritma dan Pemrograman II           |
   | untuk keberkahanNya maka saya tidak melakukan kecurangan |
   | seperti yang telah dispesifikasikan. Aamiin              |
   ============================================================
*/

#include "header.h"     //Library header.h

void input(){          //PROSEDUR INPUT
    int i, j;
    scanf("%d %d", &row, &column);              //Meminta input baris dan kolom untuk ukuran matrix

    for ( i = 0; i < row; i++)                  //looping baris
    {
        for ( j = 0; j < column; j++)           //looping kolom
        {
            scanf("%d", &originalmatrix[i][j]); //meminta input isi matrix
        }
    }
}

int oddeven(int a){     //FUNGSI ODDEVEN
    int value;          //Deklarasi variabel integer lokal
    if (a % 2 == 0)     //Jika a merupakan genap
    {
        value=1;        //Value akan menjadi 1
    }else               //Jika a merupakan ganjil
    {
        value=0;        //Value menjadi 0
    }
    return value;       //Return nilai value
}

void processing(){      //PROSEDUR PROCESSING
    int i, j;           //Deklarasi variabel iterator
    int idx1=0, idx2=0; //Deklarasi variabel untuk index
    /*===================PROSES REFLEKSI==============*/
    for ( i = row-1; i >= 0; i--)       //looping baris dari belakang
    {
        for ( j = 0; j < column; j++)   //looping kolom
        {
            mirrormatrix[idx1][idx2] = originalmatrix[i][j]; //memasukan isi dari originalmatrix kedalam mirrormatrix
            idx2++;     //nilai idx2 akan terus bertambah sebanyak 1
        }
        idx2=0;         //mengembalikan nilai idx2 menjadi 0
        idx1++;         //nilai idx1 akan terus bertambah sebanyak 1
    }
    idx1=0;             //mengembalikan nilai idx1 menjadi 0
    idx2=0;             //mengembalikan nilai idx2 menjadi 0
    /*=================PROSES TRANSPOSE===============*/
    for ( i = 0; i < column; i++)       //looping kolom
    {
        for ( j = 0; j < row; j++)      //looping baris
        {
            transposematrix[idx1][idx2] = mirrormatrix[j][i];   //memasukan isi dari mirrormatrix kedalam transposematrix
            idx2++;     //nilai idx2 akan terus bertambah sebanyak 1
        }
        idx2=0;         //mengembalikan nilai idx2 menjadi 0
        idx1++;         //nilai idx1 akan terus bertambah sebanyak 1
    }
    idx1=0;             //mengembalikan nilai idx1 menjadi 0
    idx2=0;             //mengambalikan nilai idx2 menjadi 0
    int count=0;        //deklarasi variabel integer dan nilai awal sebesar 0
    /*================PROSES MENGHITUNG JUMLAH DARI KOLOM TERAKHIR==================*/
    for ( i = 0; i < column; i++)       //looping kolom
    {
        for ( j = 0; j < row; j++)      //looping baris
        {
            if (j == row-1)             //jika j sama dengan row dikurang 1
            {
                count += transposematrix[i][j]; //maka akan menghitung jumlah dari kolom terakhir
            }
        }
    }
    int temp=0;         //deklarasi variabel integer dan nilai awal sebesar 0 
    temp=row;           //memasukan nilai dari row kedalam temp
    row=column;         //memasukan nilai column kedalam row
    column=temp;        //memasukan nilai temp kedalam column
    
    if (oddeven(count) != 1) //Jika nilai dari kolom terakhir ganjil, maka matrix akan diputar kearah kanan
    {
        count %= 4;         //count akan dimodulus dengan 4 agar sisanya dipakai untuk memutar matrix
        switch (count)
        {
        case 0:             //jika hasil dari modulus jumlah kolom terakhir sama dengan 0
            for ( i = 0; i < row; i++)          //looping baris
            {
                for ( j = 0; j < column; j++)   //looping kolom
                {
                    rotatematrix[idx1][idx2] = transposematrix[i][j];   //memasukan isi matrix transposematrix kedalam rotatematrix
                    idx2++;     //nilai idx2 akan terus bertambah sebanyak 1
                }
                idx2=0;         //mengembalikan nilai idx2 menjadi 0
                idx1++;         //nilai idx1 akan terus bertambah sebanyak 1
            }
            break;
        case 1:             //jika hasil dari modulus jumlah kolom terakhir sama dengan 1
            temp=0;         //nilai awal temp
            temp=row;       //memasukan nilai row kedalanm temp
            row=column;     //memasukan nilai column kedalam row
            column=temp;    //memasukan nilai temp kedalam column
            for ( i = 0; i < row; i++)              //looping baris
            {
                for ( j = column-1; j >= 0; j--)    //looping kolom
                {
                    rotatematrix[idx1][idx2] = transposematrix[j][i];   //memasukan isi matrix transposematrix kedalam rotatematrix
                    idx2++;     //nilai idx2 akan terus bertambah sebanyak 1
                }
                idx2=0;         //mengembalikan nilai idx2 menjadi 0
                idx1++;         //nilai idx1 akan terus bertambah sebanyak 1
            }
            break;
        case 2:             //jika hasil dari modulus jumlah kolom terakhir sama dengan 2
            for ( i = row-1; i >= 0; i--)           //looping baris
            {
                for ( j = column-1; j >= 0; j--)    //looping kolom
                {
                    rotatematrix[idx1][idx2] = transposematrix[i][j];   //memasukan isi matrix transposematrix kedalam rotatematrix
                    idx2++;     //nilai idx2 akan terus bertambah sebanyak 1
                }
                idx2=0;         //mengembalikan nilai idx2 menjadi 0
                idx1++;         //nilai idx1 akan terus bertambah 1
            }
            break;
        case 3:             //jika hasil dari modulus jumlah kolom terakhir sama dengan 3
            temp=0;         //nilai awal temp
            temp=row;       //memasukan nilai row kedalam temp
            row=column;     //memasukan nilai column kedalam row
            column=temp;    //memasukan nilai temp kedalam column
            for ( i = row-1; i >= 0; i--)           //looping baris
            {
                for ( j = 0; j < column; j++)       //looping kolom
                {
                    rotatematrix[idx1][idx2] = transposematrix[j][i];   //memasukan isi matrix transposematrix kedalam rotatematrix
                    idx2++;     //nilai idx2 akan terus bertambah sebanyak 1
                }
                idx2=0;         //mengembalikan nilai idx2 menjadi 0
                idx1++;         //nilai idx1 akan terus bertambah sebanyak 1
            }
            break;
        default:
            break;
        }
    }else           //jika jumlah dari kolom terakhir genap, maka matrix akan diputar kearah kiri
    {
        count %= 4; //jumlah dari kolom terakhir dimodulus 4
        switch (count)
        {
        case 0:     //jika hasil dari modulus jumlah kolom terakhir adalah 0
            for ( i = 0; i < row; i++)          //looping baris
            {
                for ( j = 0; j < column; j++)   //looping kolom
                {
                    rotatematrix[idx1][idx2] = transposematrix[i][j];   //memasukan isi matrix transposematrix kedalam rotatematrix
                    idx2++;     //nilai idx2 akan terus bertambah sebanyak 1
                }
                idx2=0;         //mengembalikan nilai idx2 menjadi 0
                idx1++;         //nilai idx1 akan terus bertambah sebanyak 1
            }
            break;
        case 1:     //jika hasil dari modulus jumlah kolom terakhir adalah 1
            temp=0;         //nilai awal temp
            temp=row;       //memasukan nilai row kedalam temp
            row=column;     //memasukan nilai column kedalam row
            column=temp;    //memasukan nilai temp kedalam column
            for ( i = row-1; i >= 0; i--)       //looping baris
            {
                for ( j = 0; j < column; j++)   //looping kolom
                {
                    rotatematrix[idx1][idx2] = transposematrix[j][i];   //memasukan isi matrix transposematrix kedalam rotatematrix
                    idx2++;     //nilai idx2 akan terus bertambah sebanyak 1
                }
                idx2=0;         //mengembalikan nilai idx2 menjadi 0
                idx1++;         //nilai idx1 akan terus bertambah sebanyak 1
            }
            break;
        case 2:     //jika hasil dari modulus jumlah kolom terakhir adalah 2
            for ( i = row-1; i >= 0; i--)           //looping baris
            {
                for ( j = column-1; j >= 0; j--)    //looping kolom
                {
                    rotatematrix[idx1][idx2] = transposematrix[i][j];   //memasukan isi matrix transposematrix kedalam rotatematrix
                    idx2++;     //nilai idx2 akan terus bertambah sebanyak 1
                }
                idx2=0;         //mengembalikan nilai idx2 menjadi 0
                idx1++;         //nilai idx1 akan terus bertambah sebanyak 1
            }
            break;
        case 3:     //jika hasil dari modulus jumlah kolom terakhir adalah 3
            temp=0;         //nilai awal temp
            temp=row;       //memasukan nilai row kedalam temp
            row=column;     //memasukan nilai column kedalam row
            column=temp;    //memasukan nilai temp kedalam column
            for ( i = 0; i < row; i++)              //looping baris
            {
                for ( j = column-1; j >= 0; j--)    //looping kolom
                {
                    rotatematrix[idx1][idx2] = transposematrix[j][i];   //memasukan isi matrix transposematrix kedalam rotatematrix
                    idx2++;     //nilai idx2 akan terus bertambah sebanyak 1
                }
                idx2=0;         //mengembalikan nilai idx2 menjadi 0
                idx1++;         //nilai idx1 akan terus bertambah sebanyak 1
            }
            break;
        default:
            break;
        }
    }
}

void output(){          //PROSEDUR OUTPUT
    int i, j, idx1=0, idx2=0;   //deklarasi variabel lokal dan nilai awal
    int count=0;                //deklarasi variabel lokal dan nilai awal
    for ( i = 0; i < row; i++)          //looping baris
    {
        for ( j = 0; j < column; j++)   //looping kolom
        {
            if (rotatematrix[i][j] == originalmatrix[idx1][idx2])   //memeriksa apakah matrix yang telah diproses sesuai dengan soal sama dengan matrix semula
            {
                count++;    //nilai count akan terus bertambah sebanyak 1
            }
            idx2++;         //nilai idx2 akan terus bertambah sebanyak 1
        }
        idx2=0;             //mengembalikan nilai idx2 menjadi 0
        idx1++;             //nilai idx1 akan terus bertambah sebanyak 1
    }
    for ( i = 0; i < row; i++)              //looping baris
    {
        for ( j = 0; j < column; j++)       //looping kolom
        {
            printf("%d", rotatematrix[i][j]);   //mengeluarkan isi matrix
            if (j != column-1)                  //jika j tidak sama dengan kolom dikurang 1
            {
                printf(" ");                    //mengeluarkan spasi
            }
        }
        printf("\n");                           //mengeluarkan newline
    }
    if (count == (row*column))                  //jika nilai count sama dengan baris dikali kolom (banyaknya isi matrix)
    {
        printf("Coba lagi besok!\n");           //mengeluarkan output
    }else                                       //jika nilai count tidak sama dengan baris dikali kolom (banyaknya isi matrix)
    {
        printf("Wihh matrix yang seru!\n");     //mengeluarkan output
    }
}