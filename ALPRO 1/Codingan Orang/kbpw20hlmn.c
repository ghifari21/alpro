/* 	(KBPW20) Kamus Besar Perusahaan While

	Saya Hilman Fauzi Herdiana 2000879 mengerjakan Tugas Praktikum 8 dalam mata kuliah Algoritma dan Pemrograman.
	Untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/

#include <stdio.h>
#include <string.h>

int main(){

    //deklarasi variabel
    int i, j, k, n; n = 0;
    int ascii[100];
    char diubah[100], pengubah[100], string[100][100];
    
    //input terus dilakukan jika tidak ada kata "santuy"
    do
    {
        scanf("%s",string[n]);
        if (strcmp(string[n], "santuy") != 0)
        {
            scanf(" %c", &diubah[n]);
            scanf(" %c", &pengubah[n]);
            n++;
        }
        //n++;
    } while (strcmp(string[n], "santuy") != 0);
    
    if (n > 0)
    {
        i = 0;
        while (i < n)
        {
            j = 0, k = 0;
            while (j < strlen(string[i]))
            {
                //jika ada kata yang sama dengan pengubah
                if (string[i][j] == pengubah[i])
                {
                    string[i][j] = pengubah[i];
                    k = 1;
                }
                //jika huruf yang diubah ada dibelakang huruf pengubah, maka tidak bisa diubah
                if ((k == 1) && (string[i][j] == diubah[i]))
                {
                    string[i][j] = diubah[i];
                }
                /*jika huruf pengubah posisinya didahului oleh 1 atau lebih huruf yang 
                diubah atau  huruf pengubah tidak ada pada string input, lalu langsung diubah*/
                if ((k == 0) && (string[i][j] == diubah[i]))
                {
                    string[i][j] = pengubah[i];
                }
                /*ika huruf pengubah ada pada string input dan posisinya mendahului 
                posisi huruf yang diubah, maka huruf tidak bisa diubah*/
                if ((string[i][j] != diubah[i]) && (string[i][j] != pengubah[i]))
                {
                   string[i][j] = string[i][j];
                }
                j++;
            }
            i++;
        }
    }
    
    /*
    i=0; //tes output
    while (i < n)
    {
        printf("%s\n", string[i]);
        i++;
    }*/
    
    //menambahkan ascii setiap huruf yang ada di dalam string
    i = 0, j = 0;
    if (i < n)
    {
        j = 0;
        while (j < strlen(string[i]))
        {
            ascii[i] += string[i][j];
            j++;
        }
        i++;
    }

    /*i = 0; //test output ascii
    while (i < strlen(string[i]))
    {
        printf("%d\n", ascii[i]);
        i++;
    }*/

    if (n > 0)
    {
        //jika hasil penjumlahan hurufnya genap
        printf("=== KATA BAKU ===\n");
        i = 0;
        while (i < n)
        {
            j = 0; k = 0;
            if (ascii[i] % 2 == 0)
            {
                k = 1; //jika penjumlahannya genap
                if (k == 1)
                {
                    printf("%s\n", string[i]);
                }
                //jika tidak ada sama sekali
                else
                {
                    printf("TIDAK ADA.\n");
                }
            }
            i++;
        }
               
        //jika hasil penjumlahan hurufnya ganjil
        printf("\n=== KATA NON BAKU ===\n");
        i = 0;
        while (i < n)
        {
            j = 0; k = 0;
            if (ascii[i] % 2 != 0)
            {
                k = 1; //jika penjumlahannya ganjil
                if (k == 1)
                {
                    printf("%s\n", string[i]);
                }
                //jika tidak ada sama sekali
                else
                {
                    printf("TIDAK ADA.\n");
                }
            }
            i++;
        }
    }
    
    
    
    return 0;
}

