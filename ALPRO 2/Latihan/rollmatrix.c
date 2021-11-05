#include <stdio.h>

int matrix[100][100];
int direction, roll, row, column;

void once(){
    int i, j;
    switch (direction)
    {
    case 1:
        for ( i = 0; i < column; i++)
        {
            for ( j = row-1; j >= 0; j--)
            {
                printf("%d", matrix[j][i]);
                if (j != 0)
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
        break;
    case 2:
        for ( i = column-1; i >= 0; i--)
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
                    else if (matrix[i][j]>999 && matrix[i][j]<10000)
                    {
                        printf(" ");
                    }
                }
            }
            printf("\n");
        }
        break;
    default:
        break;
    }
}
void twice(){
    int i, j;
    switch (direction)
    {
    case 1:
        for ( i = 0; i < row; i++)
        {
            for ( j = 0; j < column; j++)
            {
                
            }
        }
        
        break;
    case 2:

        break;
    default:
        break;
    }
}
void third(){
    int i, j;
}
void fourth(){
    int i, j;
}

int main(){
    int i, j;
    
    printf("baris : ");
    scanf("%d", &row);
    printf("kolom : ");
    scanf("%d", &column);
    printf("masukan matrix : \n");
    for ( i = 0; i < row; i++)
    {
        for ( j = 0; j < column; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("\n");

    printf("Arah : \n");
    printf("1. Kanan\n");
    printf("2. Kiri\n");
    printf("Masukan Arah : ");
    scanf("%d", &direction);
    printf("Diputar berapa kali?\n");
    printf("Masukan jumlah putaran : ");
    scanf("%d", &roll);
        roll%=4;

    switch (direction)
    {
    case 1:
        switch (roll)
        {
        case 0:

            break;
        case 1:
            once();
            break;
        case 2:
        
            break;
        case 3:

            break;
        case 4:
        
            break;
        default:
            break;
        }
        break;
    case 2:
        switch (roll)
        {
        case 0:

            break;
        case 1:
            once();
            break;
        case 2:
        
            break;
        case 3:

            break;
        case 4:
        
            break;
        default:
            break;
        }
        break;
        break;
    default:
        break;
    }

    return 0;
}