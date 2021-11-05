#include <stdio.h>

int main(){
    int i, j;
    int matrix[100][100];
    int change[100];
    int row, column;
    int count=0;
    //mengisi ukuran matrix
    scanf("%d %d", &row, &column);

    //mengisi matri
    for ( i = 0; i < row; i++)
    {
        for ( j = 0; j < column; j++)
        {
            scanf("%d", &matrix[i][j]);
            if (matrix[i][j] % 2 == 0)
            {
                count++;
            }
        }
    }
    //meminta bilangan pengganti
    for ( i = 0; i < count; i++)
    {
        scanf("%d", &change[i]);
    }
    int idx=0;
    //mencari genap dalam matrix
    for ( i = 0; i < row; i++)
    {
        for ( j = 0; j < column; j++)
        {
            if (matrix[i][j] % 2 == 0)
            {
                matrix[i][j] = change[idx];
                idx++;
            }
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