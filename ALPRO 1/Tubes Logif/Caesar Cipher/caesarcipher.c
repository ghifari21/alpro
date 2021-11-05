/*

    Nama    : Ghifari Octaverin
    NIM     : 2000952
    Prodi   : Ilmu Komputer
    Kelas   : C1

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

/*===================== VARIABEL GLOBAL ====================*/
int mode, shift;
char plain_text[100];
unsigned char process_text[100];
char cipher_text[100];
char con;
int n = 0;

/*=================== DEKLARASI PROSEDUR =================*/
void homescreen();
void clear();
void cont();
void encrypt();
void decrypt();
void key();

/*================== MAIN PROGRAM =====================*/
int main(){
    do
    {
        clear();
        printf("        MASUKKAN PILIHAN ANDA   : ");
        scanf("%d", &mode);
        printf("        =============================================\n");
        switch (mode)
        {
        case 1:
            encrypt();
            cont();
            break;
        case 2:
            decrypt();
            cont();
            break;
        default:
            break;
        }
        n++;
        if (con == 'n' || con == 'N')
        {
            exit(0);
        }
    } while (con != 'n' || con != 'N');
    return 0;
}
/*=================== PROSEDUR HOMESCREEN =====================*/
void homescreen(){
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
}
/*===================== PROSEDUR ENKRIPSI =========================*/
void encrypt(){
    int i;
    printf("        MASUKKAN PLAIN TEXT     : ");
    scanf("%s", &plain_text);
    printf("        =============================================\n");
    key();
    strcpy(process_text, plain_text);
    for ( i = 0; i < strlen(plain_text); i++)
    {
        if ((plain_text[i] >= 65 && plain_text[i] <= 90) || (plain_text[i] >= 97 && plain_text[i] <= 122))
        {
            if (shift > 26)
            {
                shift %= 26;
            }
            process_text[i] += shift;
            if ((process_text[i] > 90 && process_text[i] < 97) || (process_text[i] > 122))
            {
                process_text[i] -= 26;
            }
        }
    }
    strcpy(cipher_text, process_text);
    printf("        HASIL ENCRYPTION        : ");
    printf("%s", cipher_text);
}
/*====================== PROSEDUR DEKRIPSI ==========================*/
void decrypt(){
    int i;
    printf("        MASUKKAN CIPHER TEXT    : ");
    scanf("%s", &cipher_text);
    printf("        =============================================\n");
    key();
    strcpy(process_text, cipher_text);
    for ( i = 0; i < strlen(cipher_text); i++)
    {
        if ((cipher_text[i] >= 65 && cipher_text[i] <= 90) || (cipher_text[i] >= 97 && cipher_text[i] <= 122))
        {
            if (shift > 26)
            {
                shift %= 26;
            }
            process_text[i] -= shift;
            if ((process_text[i] < 65) || (process_text[i] > 90 && process_text[i] < 97))
            {
                process_text[i] += 26;
            }
        }
    }
    strcpy(plain_text, process_text);
    printf("        HASIL DECRYPTION        : ");
    printf("%s", plain_text);
}
/*====================== PROSEDUR KUNCI ======================*/
void key(){
    printf("        MASUKKAN KUNCI          : ");
    scanf("%d", &shift);
    printf("        =============================================\n");
}
/*===================== PROSEDUR CONTINUE ====================*/
void cont(){
    printf("\n        =============================================\n");
    printf("        |   CONTINUE? (Y/N) : ");
    scanf(" %c", &con);
}
/*===================== PROSEDUR CLEAR CMD ===================*/
void clear(){
    if (((con == 'y' || con =='Y') && (con != 'n' || con != 'N')) || n == 0)
    {
        system("cls");
        homescreen();
    }
}
