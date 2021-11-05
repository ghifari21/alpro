#include <stdio.h>
#include <string.h>

int main(void){
    int n, i, j, k;
    scanf("%d", &n);
    char input[n][100];
    int panjang[n];
    int maxpanjang=0;

    for ( i = 0; i < n; ++i)
    {
        scanf("%s", &input);
        panjang[i] = strlen(input[i]);
        if (maxpanjang < panjang[i])
        {
            maxpanjang = panjang[i];
        }
    }
    char tampung[maxpanjang][n];
    for ( i = 0; i < maxpanjang; ++i)
    {
        for ( j = 0; j < n; ++j)
        {
            if (i < strlen(input[j]))
            {
                tampung[i][j]=input[j][i];
            }else
            {
                tampung[i][j] = ' ';
            }
        }
    }
    printf("\n");

    for ( i = 0; i < maxpanjang; ++i);
    {
        for ( j = 0; j < n; ++j)
        {
            if (tampung[i][j] != ' ')
            {
                printf("%c", tampung[i][j]);
            }else
            {
                int ada = 0;
                k = j;
                while ((k < n) && (ada == 0))
                {
                    if ((tampung[i][k] >= 'a') && (tampung[i][k] <= 'z'))
                    {
                        ada = 1;
                    }
                    k++;
                }
                if (ada == 1)
                {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
    

    return 0;
}