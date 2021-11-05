#include <stdio.h>
#include <string.h>

int main()
{
    //=== VARIABEL ===
    char strInput[100], string[100], keyword[100];
    int i, i0, i1, j, k, s1, s2, y, z, idxy, idxz;
    int kalimatAkhir, pkal, gabung, sisa, cek1;
    int baris, kolom;

    //=== INPUT ===
    scanf("%s", strInput);

    //=== KALIMAT ===
    /*i=0, j=0;
    do
    {
        string[j] = strInput[i];
        j++;
        i++;
    } while (strInput[i] != '|');

    pkal = i;
    
    int KalimatAkhir = pkal;*/

    /*printf("Tanpa kata kunci: ");
    i = 0;
    while (i < kalimatAkhir)
    {
        printf("%c", string[i]);
        i++;
    }*/
    
    //printf("\n\n");
    //======================================
    //|     MEMBUAT POLA X DARI STRING     |
    //======================================
    //=== JIKA TOTAL HURUF NYA ADA GENAP ===   
    if(strlen(strInput) % 2 == 1)
    {
        //=== BAGIAN ATAS ===
        k = strlen(strInput);
        j = k-1;
        i = 0;
        baris = 0;
        while(baris < k/2)
        {
            //=== POLA 1 ===
            kolom = 0;
            while(kolom < baris)
            {
                printf(" ");
                kolom++;
            }
             //=== POLA 2 ===
            printf("%c", strInput[i++]);
            
            //=== POLA 3 ===
            kolom = (k/2)-baris;
            while (kolom > 0)
            {
                printf(" ");
                kolom--;
            }

            //=== POLA 4 ===
            kolom = (k/2)-baris-1;
            while (kolom > 0 )
            {
                printf(" ");
                kolom--;
            }
            
             //=== POLA 5 ===
            printf("%c", strInput[j--]);
            printf("\n");
            baris++;
        }

        //=== BAGIAN TENGAH ===
        //=== POLA 1 ===
        baris = 0;
        while (baris < k/2)
        {
            printf(" ");
            baris++;
        }

        //=== POLA 2 ===
        printf("%c", strInput[k/2]);
        i++;
        j--;
        printf("\n");

        //=== BAGIAN BAWAH ===
        baris = 0;
        while(baris < k/2)
        {
            //=== POLA 1 ===
            kolom = k/2-baris;
            while (kolom > 1)
            {
                printf(" ");
                kolom--;
            }

            //=== POLA 2 ===
            printf("%c", strInput[j--]);

            //=== POLA 3 ===
            kolom = 0;
            while(kolom <= baris)
            {
                printf(" ");
                kolom++;
            }

            //=== POLA 4 ===
            kolom = 0;
            while(kolom < baris)
            {
                printf(" ");
                kolom++;
            }

            //=== POLA 5 ===
            printf("%c", strInput[i++]);
            printf("\n");
            baris++;
        }
    }

    //=== JIKA TOTAL HURUF NYA ADA GENAP ===
    else
    {
        //=== BAGIAN ATAS ===
        k = strlen(strInput);
        j = k-1;
        i = 0;
        baris = 0;
        while(baris < k/2-1)
        {
            //=== POLA 1 ===
            kolom = 0;
            while(kolom < baris)
            {
                printf(" ");
                kolom++;
            }
            //=== POLA 2 ===
            printf("%c", strInput[i++]);
            
            //=== POLA 3 ===
            kolom = (k/2)-baris-1;
            while (kolom > 0)
            {
                printf(" ");
                kolom--;
            }

            //=== POLA 4 ===
            kolom = (k/2)-baris-1;
            while (kolom > 0 )
            {
                printf(" ");
                kolom--;
            }
                
            //=== POLA 5 ===
            printf("%c", strInput[j--]);
            printf("\n");
            baris++;
        }

        //=== BAGIAN TENGAH ===
        //=== POLA 1 ===
        baris = 0;
        while (baris < k/2-1)
        {
            printf(" ");
            baris++;
        }

        //=== POLA 2 ===
        printf("%c%c", strInput[k/2-1],strInput[k/2]);
        i+=2;
        j-=2;
        printf("\n");

        //=== BAGIAN BAWAH ===
        baris = 0;
        while(baris < k/2-1)
        {
            //=== POLA 1 ===
            kolom = k/2-baris-1;
            while (kolom > 1)
            {
                printf(" ");
                kolom--;
            }

            //=== POLA 2 ===
            printf("%c", strInput[j--]);

            //=== POLA 3 ===
            kolom = 0;
            while(kolom <= baris)
            {
                printf(" ");
                kolom++;
            }

            //=== POLA 4 ===
            kolom = 0;
            while(kolom <= baris)
            {
                printf(" ");
                kolom++;
            }

            //=== POLA 5 ===
            printf("%c", strInput[i++]);
            printf("\n");
            baris++;
        }
    }

    return 0;
}