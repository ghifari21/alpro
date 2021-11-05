#include <stdio.h>
#include <string.h>

typedef struct
{
    int nilai;
    char nama[100];
    char grade;
}siswa;


int main(){
    int i, j, n, m;
    siswa matrix[100][100];

    scanf("%d %d", &n, &m);
    for ( i = 0; i < n; ++i)
    {
        for ( j = 0; j < m; ++j)
        {
            scanf("%s", &matrix[i][j].nama);
            scanf(" %c", &matrix[i][j].grade);
            scanf("%d", &matrix[i][j].nilai);
        }
    }
    printf("==========================\n");
    for ( i = 0; i < n; ++i)
    {
        printf("Baris %d:\n", i+1);
        for ( j = 0; j < m; ++j)
        {
            printf("Nama Siswa  : %s\n", matrix[i][j].nama);
            printf("Grade Nilai : %c\n", matrix[i][j].grade);
            printf("Nilai Siswa : %d\n", matrix[i][j].nilai);
            printf("--------------------------\n");
        }
        printf("==========================\n");
    }
    
    

    return 0;
}