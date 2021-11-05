#include <stdio.h>
#include <string.h>

typedef struct
{
    int red, green, blue;
    char color[100];
}rgb;

int main()
{
    int i, j, n, m;
    char search[100];
    rgb matrix[100][100];
    scanf("%d %d", &n, &m);
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < m; j++)
        {
            scanf("%s", &matrix[i][j].color);
            scanf("%d", &matrix[i][j].red);
            scanf("%d", &matrix[i][j].green);
            scanf("%d", &matrix[i][j].blue);
        }
    }
    scanf("%s", &search);
    int count=0;

    printf("==========================\n");
    for ( i = 0; i < n; i++)
    {
        printf("Baris %d:\n", i+1);
        for ( j = 0; j < m; j++)
        {
            if (strcmp(matrix[i][j].color, search) == 0)
            {
                printf("Detail Warna Merah  : %d\n", matrix[i][j].red);
                printf("Detail Warna Hijau  : %d\n", matrix[i][j].green);
                printf("Detail Warna Biru   : %d\n", matrix[i][j].blue);
                count++;
                printf("--------------------------\n");
            }
        }
        if (count == 0)
        {
            printf("TIDAK ADA.\n");
        }
        count=0;
        printf("==========================\n");
    }
    
    return 0;
}
