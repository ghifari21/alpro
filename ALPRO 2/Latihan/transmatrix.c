#include <stdio.h>

int main(){
    int i, j;
    int row, column;
    int matrix[100][100];
    printf("baris : ");
    scanf("%d", &row);
    printf("kolom : ");
    scanf("%d", &column);

    for ( i = 0; i < row; i++)
    {
        for ( j = 0; j < column; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    for ( i = 0; i < column; i++)
    {
        for ( j = 0; j < row; j++)
        {
            printf("%d", matrix[j][i]);
            if (j != row-1)
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