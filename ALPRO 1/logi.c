#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(){
    int n, i, j, mode, shift, loop;
    char plain_text[100];
    unsigned char process_text[100];
    unsigned char cipher_text[100];
    char key[0];
    loop=1;
    while (loop == 1)
    {
        printf("=============================================\n");
        printf("|   CAESAR CIPHER ENCRYPTER / DECRYPTER     |\n");
        printf("=============================================\n");
        printf("|   BY : GHIFARI OCTAVERIN      2000952     |\n");
        printf("|   ILMU KOMPUTER               C1          |\n");
        printf("=============================================\n");
        printf("|   PILIHAN MODE :                          |\n");
        printf("|   1. ENCRYPTER                            |\n");
        printf("|   2. DECRYPTER                            |\n");
        printf("=============================================\n");
        printf("MASUKKAN PILIHAN ANDA   : ");
        scanf("%d", &mode);
        printf("=============================================\n");
        if (mode == 1)
        {
            printf("MASUKKAN SHIFT          : ");
            scanf("%d", &shift);
            printf("=============================================\n");
            printf("*Jika kalimat mengandung karakter spasi,\nganti menjadi underline '_' dan maksimal\nhanya 100 karakter*\n");
            printf("=============================================\n");
            printf("MASUKKAN PLAIN TEXT     : ");
            scanf("%s", &plain_text);
            printf("=============================================\n");
            strcpy(process_text, plain_text);
            for ( i = 0; i < strlen(plain_text); i++)
            {
                if (process_text[i] == '_')
                {
                    process_text[i] = ' ';
                }
            }
            for ( i = 0; i < strlen(plain_text); i++)
            {
                if ((process_text[i]>=65 && process_text[i]<=90) || (process_text[i]>=97 && process_text[i]<=122))
                {
                    if (process_text[i] != ' ')
                    {
                        if (shift>26)
                        {
                            shift%=26;
                            process_text[i]+=shift;
                            if ((process_text[i] > 90 && process_text[i]<97) || (process_text[i]>122))
                            {
                                process_text[i]-=26;
                            }
                        }
                        else
                        {
                            process_text[i]+=shift;
                            if ((process_text[i] > 90 && process_text[i]<97) || (process_text[i]>122))
                            {
                                process_text[i]-=26;
                            }
                        }
                    }
                }
            }
            strcpy(cipher_text, process_text);
            printf("HASIL ENCRYPTION        : ");
            printf("%s", cipher_text);
        }
        if (mode == 2)
        {
            printf("MASUKKAN SHIFT          : ");
            scanf("%d", &shift);
            printf("=============================================\n");
            printf("*Jika kalimat mengandung karakter spasi,\nganti menjadi underline '_' dan maksimal\nhanya 100 karakter*\n");
            printf("=============================================\n");
            printf("MASUKKAN CIPHER TEXT    : ");
            scanf("%s", &cipher_text);
            printf("=============================================\n");
            strcpy(process_text, cipher_text);
            for ( i = 0; i < strlen(cipher_text); i++)
            {
                if (process_text[i] == '_')
                {
                    process_text[i] = ' ';
                }
            }
            for ( i = 0; i < strlen(cipher_text); i++)
            {
                if ((process_text[i]>=65 && process_text[i]<=90) || (process_text[i]>=97 && process_text[i]<=122))
                {
                    if (process_text[i] != ' ')
                    {
                        if (shift>26)
                        {
                            shift%=26;
                            process_text[i]-=shift;
                            if (process_text[i] <65 || (process_text[i]>90 && process_text[i]<97))
                            {
                                process_text[i]+=26;
                            }
                        }
                        else
                        {
                            process_text[i]-=shift;
                            if ((process_text[i] > 90 && process_text[i]<97) || (process_text[i]>122))
                            {
                                process_text[i]+=26;
                            }
                        }
                    }
                }
            }
            strcpy(plain_text, process_text);
            printf("HASIL DECRIPTION         : ");
            printf("%s", plain_text);
        }
        printf("\n=============================================\n");
        printf("PRESS 'Y' TO CONTINUE OR 'N' TO EXIT  : ");
        scanf(" %c", &key[0]);
        printf("=============================================\n");
        if (key[0] == 'N' || key[0] == 'n')
        {
            exit(0);
        }
    }
    return 0;
}