#include <stdio.h>

int main(){
    int i, j;
    int column, row;
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
    int value;
    printf("nilai yang dicari : ");
    scanf("%d", &value);

    for ( i = 0; i < row; i++)
    {
        for ( j = 0; j < column; j++)
        {
            if (value == matrix[i][j])
            {
                printf("baris   : %d\n", i+1);
                printf("kolom   : %d\n", j+1);
            }
        }
    }
    
    
    return 0;
}