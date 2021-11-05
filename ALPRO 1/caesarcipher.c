#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

int mode, shift, many;
char plain_text[100][100];
unsigned char process_text[100][100];
char cipher_text[100][100];
char con = 'n';
int n = 0;
int newline = 0;

void homescreen();
void clear();
void cont();
void encrypt();
void decrypt();
void key();

int main(){
    do
    {
        clear();
        homescreen();
        printf("MASUKKAN PILIHAN ANDA   : ");
        scanf("%d", &mode);
        printf("=============================================\n");
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
    } while (con == 'y');
    return 0;
}

void homescreen(){
    printf("=============================================\n");
    printf("|               CRYPTOGRAPHY                |\n");
    printf("=============================================\n");
    printf("|   CAESAR CIPHER ENCRYPTER / DECRYPTER     |\n");
    printf("=============================================\n");
    printf("|   GHIFARI OCTAVERIN           2000952     |\n");
    printf("|   ILMU KOMPUTER               C1          |\n");
    printf("=============================================\n");
    printf("|   PILIHAN MODE :                          |\n");
    printf("|   1. ENCRYPTER                            |\n");
    printf("|   2. DECRYPTER                            |\n");
    printf("=============================================\n");
    printf("|   *ENCRYPT / DECRYPT PER KATA*            |\n");
    printf("=============================================\n");
}
void cont(){
    printf("\n=============================================\n");
    printf("|   CONTINUE? (Y/N)                         |\n");
    scanf(" %c", &con);
}
void clear(){
    if (con == 'y' || n == 0)
    {
        system("cls");
    }
}
void encrypt(){
    int i, j;
    many = 0;
    printf("MASUKKAN PLAIN TEXT     : ");
    do
    {
        scanf("%s", &plain_text[many]);
        for ( i = 0; i < strlen(plain_text[many]); i++)
        {
            if (plain_text[many][i] == '\n')
            {
                newline = 1;
            }
        }
        many++;
    } while (newline == 0);
    printf("=============================================\n");
    key();
    for ( i = 0; i < many; i++)
    {
        strcpy(process_text[i], plain_text[i]);
        for ( j = 0; j < strlen(plain_text[i]); j++)
        {
            if ((plain_text[i][j] >= 65 && plain_text[i][j] <= 90) || (plain_text[i][j] >= 97 && plain_text[i][j] <= 122))
            {
                if (shift > 26)
                {
                    shift %= 26;
                }
                process_text[i][j] += shift;
                if ((process_text[i][j] > 90 && process_text[i][j] < 97) || (process_text[i][j] > 122))
                {
                    process_text[i][j] -= 26;
                }
            }
        }
        strcpy(cipher_text[i], process_text[i]);
    }
    printf("HASIL ENCRYPTION         : ");
    for ( i = 0; i < many; i++)
    {
        printf("%s", cipher_text[i]);
    }
    many = 0;
}
void decrypt(){
    int i;
    printf("MASUKKAN CIPHER TEXT    : ");
    /*scanf("%s", &cipher_text);
    printf("=============================================\n");
    strcpy(process_text, cipher_text);
    key();
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
    strcpy(plain_text, cipher_text);*/
    printf("HASIL DECRIPTION         : ");
    //printf("%s", plain_text);
}
void key(){
    printf("MASUKKAN KUNCI          : ");
    scanf("%d", &shift);
    printf("=============================================\n");
}
