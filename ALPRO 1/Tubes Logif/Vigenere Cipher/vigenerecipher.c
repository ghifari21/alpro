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

int mode, con, n = 0;
unsigned char msg[100];
unsigned char key[100];
unsigned char new_key[100];
unsigned char encrypted_msg[100];
unsigned char decrypted_msg[100];
int len_msg, len_key;

void homescreen();
void input_key();
void encrypt();
void decrypt();
void clear();
void cont();
void generate_new_key();

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

void homescreen(){
    printf("\n\n");
    printf("        =============================================\n");
    printf("        |   GHIFARI OCTAVERIN           2000952     |\n");
    printf("        |   ILMU KOMPUTER               C1          |\n");
    printf("        =============================================\n");
    printf("        |               CRYPTOGRAPHY                |\n");
    printf("        =============================================\n");
    printf("        |   VIGINERE CIPHER ENCRYPTER / DECRYPTER   |\n");
    printf("        =============================================\n");
    printf("        |   PILIHAN MODE :                          |\n");
    printf("        |   1. ENCRYPTER                            |\n");
    printf("        |   2. DECRYPTER                            |\n");
    printf("        =============================================\n");
    printf("        |   *MASUKAN TIDAK BOLEH MENGANDUNG SPASI   |\n");
    printf("        =============================================\n");
}
void cont(){
    printf("\n        =============================================\n");
    printf("        |   CONTINUE? (Y/N) : ");
    scanf(" %c", &con);
}
void clear(){
    if (((con == 'y' || con =='Y') && (con != 'n' || con != 'N')) || n == 0)
    {
        system("cls");
        homescreen();
    }
}
void input_key(){
    printf("        MASUKKAN KUNCI          : ");
    scanf("%s", &key);
    len_key = strlen(key);
    printf("        =============================================\n");
}
void generate_new_key(){
    int i, j;
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
}
void encrypt(){
    int i;
    printf("        MASUKKAN PLAIN TEXT     : ");
    scanf("%s", &msg);
    printf("        =============================================\n");
    input_key();
    len_msg = strlen(msg);
    generate_new_key();
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
}
void decrypt(){
    int i;
    printf("        MASUKKAN CIPHER TEXT    : ");
    scanf("%s", &msg);
    printf("        =============================================\n");
    input_key();
    len_msg = strlen(msg);
    generate_new_key();
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
}