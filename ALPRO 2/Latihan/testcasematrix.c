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
    printf("\n");
    int temp=0, idx1=0, idx2=0;
    for ( i = row-1; i >= 0; i--)
    {
        for ( j = 0; j < column; j++)
        {
            printf("%d ", matrix[i][j]);
            if (j == column-1)
            {
                temp+=matrix[i][j];
            }
            
        }
        printf("\n");
    }
    printf("%d", temp);
    
    return 0;
}