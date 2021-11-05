#include <stdio.h>

int main(){
    int i, j;
    int mode;
    int matrix1[100][100], matrix2[100][100];
    int newmatrix[100][100];
    int row, column;
    
    printf("Operasi 2 Buah Matriks\n");
    printf("Mode : \n");
    printf("1. Penjumlahan\n");
    printf("2. Pengurangan\n");
    printf("Masukan Mode : ");
    scanf("%d", &mode);
    printf("\n");
    printf("Masukan Banyaknya Baris pada kedua matriks (harus sama) : ");
    scanf("%d", &row);
    printf("\n");
    printf("Masukan Banyaknya Kolom pada kedua matriks (harus sama) : ");
    scanf("%d", &column);
    printf("\n");

    switch (mode)
    {
    case 1:
        for ( i = 0; i < row; i++)
        {
            for ( j = 0; j < column; j++)
            {
                scanf("%d", &matrix1[i][j]);
            }
            
        }
        for ( i = 0; i < row; i++)
        {
            for ( j = 0; j < column; j++)
            {
                scanf("%d", &matrix2[i][j]);
            }
            
        }
        printf("\n");
        for ( i = 0; i < row; i++)
        {
            for ( j = 0; j < column; j++)
            {
                newmatrix[i][j] = matrix1[i][j] + matrix2[i][j];
                printf("%d", newmatrix[i][j]);
                if (j != column-1)
                {
                    printf(" ");
                }
            }
            printf("\n");
        }
        break;
    case 2:
        for ( i = 0; i < row; i++)
        {
            for ( j = 0; j < column; j++)
            {
                scanf("%d", &matrix1[i][j]);
            }
            
        }
        for ( i = 0; i < row; i++)
        {
            for ( j = 0; j < column; j++)
            {
                scanf("%d", &matrix2[i][j]);
            }
            
        }
        printf("\n");
        for ( i = 0; i < row; i++)
        {
            for ( j = 0; j < column; j++)
            {
                newmatrix[i][j] = matrix1[i][j] - matrix2[i][j];
                printf("%d", newmatrix[i][j]);
                if (j != column-1)
                {
                    printf(" ");
                }
            }
            printf("\n");
        }
        break;
    default:
        break;
    }
    return 0;
}