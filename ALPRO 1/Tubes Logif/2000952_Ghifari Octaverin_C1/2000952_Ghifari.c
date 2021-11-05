/*

    Nama    : Ghifari Octaverin
    NIM     : 2000952
    Prodi   : Ilmu Komputer
    Kelas   : C1

*/

/*------------------LIBRARY----------------*/
#include <stdio.h>                  //LIBRARY STDIO.H
#include <stdlib.h>                 //LIBRARY STDLIB.H
#include <string.h>                 //LIBRARY STRING.H
#include <windows.h>                //LIBRARY WINDOWS.H
#include <math.h>                   //LIBRARY MATH.H

/*----------------VARIABEL GLOBAL------------------*/
int mode, choice;                   //VARIABEL PILIHAN MODE DAN MENU
char con;                           //VARIABEL UNTUK MENLANJUTKAN PROGRAM
int co = 0;                         //VARIABEL UNTUK LOOPING PERTAMA PROGRAM UTAMA

/*---------------DEKLARASI PROSEDUR DAN FUNGSI------------------*/
void homescreen();                  //PROSEDUR TAMPILAN LAYAR UTAMA
void caesarscreen();                //PROSEDUR TAMPILAN LAYAR CAESAR CIPHER
void caesarcipher();                //PROSEDUR MENU CAESAR CIPHER
void vigenerescreen();              //PROSEDUR TAMPILAN LAYAR UTAMA VIGENERE CIPHER
void vigenerecipher();              //PROSEDUR MENU VIGENERE CIPHER
void pbtscreen();                   //PROSEDUR TAMPILAN LAYAR PBT
void pbt();                         //PROSEDUR MENU PBT
int countpbt(int x, int y);         //FUNGSI MENGHITUNG PBT
void kpkscreen();                   //PROSEDUR TAMPILAN LAYAR KPK
void kpk();                         //PROSEDUR MENU KPK
int countkpk(int x, int y);         //FUNGSI MENGHITUNG KPK
void binaryconverterscreen();       //PROSEDUR TAMPILAN LAYAR BINARY/DECIMAL CONVERTER
void binaryconverter();             //PROSEDUR MENU BINARY/DECIMAL CONVERTER
void permutationscreen();           //PROSEDUR TAMPILAN LAYAR PERMUTASI 
void permutation();                 //PROSEDUR MENU PERMUTASI
void combinationscreen();           //PROSEDUR TAMPILAN LAYAR KOMBINASI
void combination();                 //PROSEDUR MENU KOMBINASI
void continuemenu();                //PROSEDUR UNTUK MELANJUTKAN PROGRAM
void clear();                       //PROSEDUR UNTUK CLEAR CMD DAN KEMBALI KE TAMPILAN LAYAR UTAMA

/*---------------MAIN PROGRAM------------*/
int main(){
    do
    {
        clear();
        switch (choice)
        {
        case 1:
            caesarcipher();
            continuemenu();
            break;
        case 2:
            vigenerecipher();
            continuemenu();
            break;
        case 3:
            pbt();
            continuemenu();
            break;
        case 4:
            kpk();
            continuemenu();
            break;
        case 5:
            binaryconverter();
            continuemenu();
            break;
        case 6:
            permutation();
            continuemenu();
            break;
        case 7:
            combination();
            continuemenu();
            break;
        default:
            break;
        }
        co++;
        if (con == 'n' || con == 'N')
        {
            exit(0);
        }
    } while (con != 'n' || con != 'N');
    return 0;
}

/*-------------PROSEDUR DAN FUNGSI----------------*/
/*-------------PROSEDUR LAYAR UTAMA-----------------*/
void homescreen(){
    printf("\n\n");
    printf("        =============================================\n");
    printf("        |   GHIFARI OCTAVERIN           2000952     |\n");
    printf("        |   ILMU KOMPUTER               C1          |\n");
    printf("        =============================================\n");
    printf("        |               PILIHAN MENU                |\n");
    printf("        =============================================\n");
    printf("        |   1. CAESAR CIPHER                        |\n");
    printf("        |   2. VIGENERE CIPHER                      |\n");
    printf("        |   3. PBT                                  |\n");
    printf("        |   4. KPK                                  |\n");
    printf("        |   5. BINARY / DECIMAL CONVERTER           |\n");
    printf("        |   6. PERMUTASI                            |\n");
    printf("        |   7. KOMBINASI                            |\n");
    printf("        =============================================\n");
    printf("        MASUKAN PILIHAN MENU    : ");
    scanf("%d", &choice);
    printf("        =============================================\n");
}
/*---------------PROSEDUR LAYAR PADA MENU CAESARCIPHER--------------*/
void caesarscreen(){
    system("cls");
    printf("\n\n");
    printf("        =============================================\n");
    printf("        |   GHIFARI OCTAVERIN           2000952     |\n");
    printf("        |   ILMU KOMPUTER               C1          |\n");
    printf("        =============================================\n");
    printf("        |               CRYPTOGRAPHY                |\n");
    printf("        =============================================\n");
    printf("        |   CAESAR CIPHER ENCRYPTER / DECRYPTER     |\n");
    printf("        =============================================\n");
    printf("        |   PILIHAN MODE :                          |\n");
    printf("        |   1. ENCRYPTER                            |\n");
    printf("        |   2. DECRYPTER                            |\n");
    printf("        =============================================\n");
    printf("        |   *MASUKAN TIDAK BOLEH MENGANDUNG SPASI   |\n");
    printf("        =============================================\n");
    printf("        MASUKKAN PILIHAN ANDA   : ");
    scanf("%d", &mode);
    printf("        =============================================\n");
}
/*--------------------PROSEDUR MENU CAESARCIPHER-----------------*/
void caesarcipher(){
    int i, j, shift;
    char plaintext[100];
    unsigned char processingtext[100];
    char ciphertext[100];
    mode = 0;
    caesarscreen();
    switch (mode)
    {
    case 1:
        printf("        MASUKKAN PLAIN TEXT     : ");
        scanf("%s", &plaintext);
        printf("        =============================================\n");
        printf("        MASUKKAN KUNCI          : ");
        scanf("%d", &shift);
        printf("        =============================================\n");
        strcpy(processingtext, plaintext);
        for ( i = 0; i < strlen(plaintext); i++)
        {
            if ((plaintext[i] >= 65 && plaintext[i] <= 90) || (plaintext[i] >= 97 && plaintext[i] <= 122))
            {
                if (shift > 26)
                {
                    shift %= 26;
                }
                processingtext[i] += shift;
                if ((processingtext[i] > 90 && processingtext[i] < 97) || (processingtext[i] > 122))
                {
                    processingtext[i] -= 26;
                }
            }
        }
        strcpy(ciphertext, processingtext);
        printf("        HASIL ENCRYPTION        : ");
        printf("%s", ciphertext);
        break;
    case 2:
        printf("        MASUKKAN CIPHER TEXT    : ");
        scanf("%s", &ciphertext);
        printf("        =============================================\n");
        printf("        MASUKKAN KUNCI          : ");
        scanf("%d", &shift);
        printf("        =============================================\n");
        strcpy(processingtext, ciphertext);
        for ( i = 0; i < strlen(ciphertext); i++)
        {
            if ((ciphertext[i] >= 65 && ciphertext[i] <= 90) || (ciphertext[i] >= 97 && ciphertext[i] <= 122))
            {
                if (shift > 26)
                {
                    shift %= 26;
                }
                processingtext[i] -= shift;
                if ((processingtext[i] < 65) || (processingtext[i] > 90 && processingtext[i] < 97))
                {
                    processingtext[i] += 26;
                }
            }
        }
        strcpy(plaintext, processingtext);
        printf("        HASIL DECRYPTION        : ");
        printf("%s", plaintext);
        break;
    default:
        break;
    }
}
/*-----------------PROSEDUR LAYAR PADA MENU VIGENERECIPHER-----------------*/
void vigenerescreen(){
    system("cls");
    printf("\n\n");
    printf("        =============================================\n");
    printf("        |   GHIFARI OCTAVERIN           2000952     |\n");
    printf("        |   ILMU KOMPUTER               C1          |\n");
    printf("        =============================================\n");
    printf("        |               CRYPTOGRAPHY                |\n");
    printf("        =============================================\n");
    printf("        |   VIGENERE CIPHER ENCRYPTER / DECRYPTER   |\n");
    printf("        =============================================\n");
    printf("        |   PILIHAN MODE :                          |\n");
    printf("        |   1. ENCRYPTER                            |\n");
    printf("        |   2. DECRYPTER                            |\n");
    printf("        =============================================\n");
    printf("        |   *MASUKAN TIDAK BOLEH MENGANDUNG SPASI   |\n");
    printf("        =============================================\n");
    printf("        MASUKKAN PILIHAN ANDA   : ");
    scanf("%d", &mode);
    printf("        =============================================\n");
}
/*--------------------PROSEDUR MENU VIGENERECIPHER--------------------*/
void vigenerecipher(){
    int i, j;
    unsigned char msg[100];
    unsigned char key[100];
    unsigned char new_key[100];
    unsigned char encrypted_msg[100];
    unsigned char decrypted_msg[100];
    int len_msg, len_key;
    mode = 0;
    vigenerescreen();
    switch (mode)
    {
    case 1:
        printf("        MASUKKAN PLAIN TEXT     : ");
        scanf("%s", &msg);
        printf("        =============================================\n");
        printf("        MASUKKAN KUNCI          : ");
        scanf("%s", &key);
        printf("        =============================================\n");
        len_msg = strlen(msg);
        len_key = strlen(key);
        for ( i = 0, j = 0; i < len_msg; i++, j++)
        {
            if (j == len_key)
            {
                j = 0;
            }
            new_key[i] = key[j];
        }
        new_key[len_msg] = '\0';
        for ( i = 0; i < strlen(new_key); i++)
        {
            if (new_key[i] >= 97 && new_key[i] <= 122)
            {
                new_key[i] -= 32;
            }
        }
        for ( i = 0; i < len_msg; i++)
        {
            if (msg[i] >= 97 && msg[i] <= 122)
            {
                msg[i] -= 32;
            }
            encrypted_msg[i] = ((msg[i] + new_key[i]) % 26) + 'A';
        }
        encrypted_msg[len_msg] = '\0';
        printf("        HASIL ENCRYPTION        : ");
        printf("%s", encrypted_msg);
        break;
    case 2:
        printf("        MASUKKAN CIPHER TEXT    : ");
        scanf("%s", &msg);
        printf("        =============================================\n");
        printf("        MASUKKAN KUNCI          : ");
        scanf("%s", &key);
        printf("        =============================================\n");
        len_msg = strlen(msg);
        len_key = strlen(key);
        for ( i = 0, j = 0; i < len_msg; i++, j++)
        {
            if (j == len_key)
            {
                j = 0;
            }
            new_key[i] = key[j];
        }
        new_key[len_msg] = '\0';
        for ( i = 0; i < strlen(new_key); i++)
        {
            if (new_key[i] >= 97 && new_key[i] <= 122)
            {
                new_key[i] -= 32;
            }
        }
        for ( i = 0; i < len_msg; i++)
        {
            if (msg[i] >= 97 && msg[i] <= 122)
            {
                msg[i] -= 32;
            }
            decrypted_msg[i] = ((msg[i] - new_key[i] + 26) % 26) + 'A';
        }
        decrypted_msg[len_msg] = '\0';
        printf("        HASIL DECRIPTION        : ");
        printf("%s", decrypted_msg);
        break;
    default:
        break;
    }
}
/*--------------------PROSDUR LAYAR PBT-------------------*/
void pbtscreen(){
    system("cls");
    printf("\n\n");
    printf("        =============================================\n");
    printf("        |   GHIFARI OCTAVERIN           2000952     |\n");
    printf("        |   ILMU KOMPUTER               C1          |\n");
    printf("        =============================================\n");
    printf("        |                     PBT                   |\n");
    printf("        |         PEMBAGIAN BERSAMA TERBESAR        |\n");
    printf("        =============================================\n");
    printf("        |        HANYA UNTUK 2 BILANGAN BULAT       |\n");
    printf("        |               CONTOH  : 45 36             |\n");
    printf("        =============================================\n");
}
/*-----------------FUNGSI MENGHITUNG PBT----------------*/
int countpbt(int x, int y){
    int i;
    if (x > y)
    {
        i = x;
        x = y;
        y = i;
    }
    while (x > 0)
    {
        i = y % x;
        y = x;
        x = i;
    }
    return y;
}
/*----------------PROSEDUR MENU PBT--------------------*/
void pbt(){
    int integer1, integer2;
    pbtscreen();
    printf("        MASUKKAN BILANGAN BULAT : ");
    scanf("%d %d", &integer1, &integer2);
    printf("        =============================================\n");
    printf("        PBT(%d, %d) = %d", integer1, integer2, countpbt(integer1, integer2));
}
/*-------------------PROSEDUR LAYAR KPK----------------------*/
void kpkscreen(){
    system("cls");
    printf("\n\n");
    printf("        =============================================\n");
    printf("        |   GHIFARI OCTAVERIN           2000952     |\n");
    printf("        |   ILMU KOMPUTER               C1          |\n");
    printf("        =============================================\n");
    printf("        |                     KPK                   |\n");
    printf("        |        KELIPATAN PERSEKUTUAN KECIL        |\n");
    printf("        =============================================\n");
    printf("        |        HANYA UNTUK 2 BILANGAN BULAT       |\n");
    printf("        |               CONTOH  : 45 36             |\n");
    printf("        =============================================\n");
}
/*-----------------FUNGSI MENGHITUNG KPK------------------*/
int countkpk(int x, int y){
    int i, result=0;
    if (x > y)
    {
        i = x;
        x = y;
        y = i;
    }
    do
    {
        result += y;
    } while (result % x != 0);
    return result;
}
/*-----------------PROSEDUR MENU KPK----------------------*/
void kpk(){
    int integer1, integer2;
    kpkscreen();
    printf("        MASUKKAN BILANGAN BULAT : ");
    scanf("%d %d", &integer1, &integer2);
    printf("        =============================================\n");
    printf("        KPK(%d, %d) = %d", integer1, integer2, countkpk(integer1, integer2));
}
/*-----------------PROSEDUR LAYAR BINER CONVERTER--------------------*/
void binaryconverterscreen(){
    system("cls");
    printf("\n\n");
    printf("        =============================================\n");
    printf("        |   GHIFARI OCTAVERIN           2000952     |\n");
    printf("        |   ILMU KOMPUTER               C1          |\n");
    printf("        =============================================\n");
    printf("        |                  CONVERTER                |\n");
    printf("        =============================================\n");
    printf("        |               BINERY / DECIMAL            |\n");
    printf("        =============================================\n");
    printf("        |   PILIHAN MODE :                          |\n");
    printf("        |   1. DECIMAL  ->  BINER                   |\n");
    printf("        |   2. BINER    ->  DECIMAL                 |\n");
    printf("        =============================================\n");
    printf("        MASUKKAN PILIHAN ANDA   : ");
    scanf("%d", &mode);
    printf("        =============================================\n");
}
/*------------------PROSEDUR MENU BINARY CONVERTER------------------*/
void binaryconverter(){
    unsigned long long int binary = 0, decimal = 0;
    int i = 0, rem;
    binaryconverterscreen();
    switch (mode)
    {
    case 1:
        printf("        MASUKKAN BILANGAN DESIMAL : ");
        scanf("%llu", &decimal);
        printf("        =============================================\n");
        i = 1;
        while (decimal != 0) {
            rem = decimal % 2;
            decimal /= 2;
            binary += rem * i;
            i *= 10;
        }
        printf("        BINERNYA ADALAH         : %llu", binary);
        break;
    case 2:
        printf("        MASUKAN BILANGAN BINER  : ");
        scanf("%llu", &binary);
        printf("        =============================================\n");
        i = 0;
        while (binary != 0) {
            rem = binary % 10;
            binary /= 10;
            decimal += rem * pow(2, i);
            ++i;
        }
        printf("        DESIMALNYA ADALAH       : %llu", decimal);
        decimal = 0, i = 0;
        break;
    default:
        break;
    }
}
/*------------------PROSEDUR LAYAR PERMUTASI----------------*/
void permutationscreen(){
    system("cls");
    printf("\n\n");
    printf("        =============================================\n");
    printf("        |   GHIFARI OCTAVERIN           2000952     |\n");
    printf("        |   ILMU KOMPUTER               C1          |\n");
    printf("        =============================================\n");
    printf("        |                  PERMUTASI                |\n");
    printf("        =============================================\n");
    printf("        |   PILIHAN RUMUS   :                       |\n");
    printf("        |   1. PERMUTASI N OBJEK        = N!        |\n");
    printf("        |   2. PERMUTASI R DARI N OBJEK = N!/(N-R)! |\n");
    printf("        |   3. PERMUTASI SIKLIS         = (N-1)!    |\n");
    printf("        =============================================\n");
    printf("        MASUKKAN PILIHAN ANDA   : ");
    scanf("%d", &mode);
    printf("        =============================================\n");
}
/*------------------PROSEDUR MENU PERMUTASI-------------------*/
void permutation(){
    int i;
    int n, r;
    int result = 1;
    int nfac = 1;
    int nminrfac = 1;
    permutationscreen();
    switch (mode)
    {
    case 1:
        printf("        MASUKKAN NILAI N        : ");
        scanf("%d", &n);
        printf("        =============================================\n");
        for ( i = 1; i <= n; i++)
        {
            result *= i;
        }
        printf("        HASILNYA ADALAH         : %d", result);
        result = 1;
        break;
    case 2:
        printf("        MASUKKAN NILAI N        : ");
        scanf("%d", &n);
        printf("        MASUKAN NILAI R         : ");
        scanf("%d", &r);
        printf("        =============================================\n");
        for ( i = 1; i <= n; i++)
        {
            nfac *= i;
        }
        for ( i = 1; i <= n-r; i++)
        {
            nminrfac *= i;
        }
        result = 0;
        result = nfac / nminrfac;
        printf("        HASILNYA ADALAH         : %d", result);
        result = 1, nfac = 1, nminrfac = 1;
        break;
    case 3:
        printf("        MASUKKAN NILAI N        : ");
        scanf("%d", &n);
        printf("        =============================================\n");
        for ( i = 1; i <= n-1; i++)
        {
            result *= i;
        }
        printf("        HASILNYA ADALAH         : %d", result);
        result = 1;
        break;
    default:
        break;
    }
}
/*------------------PROSEDUR LAYAR KOMBINASI----------------*/
void combinationscreen(){
    system("cls");
    printf("\n\n");
    printf("        =============================================\n");
    printf("        |   GHIFARI OCTAVERIN           2000952     |\n");
    printf("        |   ILMU KOMPUTER               C1          |\n");
    printf("        =============================================\n");
    printf("        |                  KOMBINASI                |\n");
    printf("        =============================================\n");
    printf("        |           C(N, R) = N!/(R!(N-R)!)         |\n");
    printf("        =============================================\n");
}
/*------------------PROSEDUR MENU KOMBINASI---------------*/
void combination(){
    int i, n, r;
    int result = 0, nfac = 1, rfac = 1, nminrfac = 1;
    combinationscreen();
    printf("        MASUKKAN NILAI N        : ");
    scanf("%d", &n);
    printf("        MASUKAN NILAI R         : ");
    scanf("%d", &r);
    printf("        =============================================\n");
    for ( i = 1; i <= n; i++)
    {
        nfac *= i;
    }
    for ( i = 1; i <= r; i++)
    {
        rfac *= i;
    }
    for ( i = 1; i <= n-r; i++)
    {
        nminrfac *= i;
    }
    result = nfac / (rfac * nminrfac);
    printf("        HASILNYA ADALAH         : %d", result);
    result = 0, nfac = 1, rfac = 1, nminrfac = 1;
}
/*------------------PROSEDUR MELANJUTKAN PROGRAM------------------*/
void continuemenu(){
    printf("\n        =============================================\n");
    printf("        CONTINUE? (Y/N) : ");
    scanf(" %c", &con);
}
/*-----------------PROSEDUR CLEAR CMD---------------*/
void clear(){
    if (((con == 'y' || con =='Y') && (con != 'n' || con != 'N')) || co == 0)
    {
        system("cls");
        homescreen();
    }
}