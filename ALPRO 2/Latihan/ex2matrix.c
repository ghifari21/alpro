#include <stdio.h>

int main(){
    int i, j;
    int cons, row, column;
    int matrix[100][100];

    printf("baris : ");
    scanf("%d", &row);
    printf("kolom : ");
    scanf("%d", &column);
    printf("\n");    
    
    for ( i = 0; i < row; i++)
    {
        for ( j = 0; j < column; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    printf("konstanta pengali : ");
    scanf("%d", &cons);
    printf("\n");

    for ( i = 0; i < row; i++)
    {
        for ( j = 0; j < column; j++)
        {
            matrix[i][j]*=cons;
            printf("%d", matrix[i][j]);
            if (j != column-1)
            {
                if (matrix[i][j] < 10)
                {
                    printf("    ");
                }
                else if (matrix[i][j]>9 && matrix[i][j] < 100)
                {
                    printf("   ");
                }
                else if (matrix[i][j]>99 && matrix[i][j]<1000)
                {
                    printf("  ");
                }
                else if (matrix[i][j]>999 && matrix[i][j]<10000);
                {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
    

    return 0;
}