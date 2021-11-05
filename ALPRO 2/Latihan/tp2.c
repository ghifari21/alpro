#include <stdio.h>
#include <string.h>

typedef struct
{
    char name[100];
    int grade1, grade2, grade3;
}data;

int main(){
    int i, j, k, count=0, lenmax=0, row, column, found=0, spacing=0, temp1=0;
    char search[100][100], target[100][100];
    int rowSearch, columnSearch, rowTarget, columnTarget;
    rowSearch = columnSearch = rowTarget = columnTarget = -1;
    float avgSearch, avgTarget;
    data temp;
    scanf("%d %d", &row, &column);
    data student[row][column];
    
    for ( i = 0; i < row; i++)
    {
        for ( j = 0; j < column; j++)
        {
            scanf("%s", &student[i][j].name);
            scanf("%d %d %d", &student[i][j].grade1, &student[i][j].grade2, &student[i][j].grade3);
        }
    }

    do
    {
        scanf("%s", &search[count]);
        if (strcmp(search[count], "stop") != 0)
        {
            scanf("%s", &target[count]);
            if (strlen(search[count]) > lenmax)
            {
                lenmax = strlen(search[count]);
            }
            if (strlen(target[count]) > lenmax)
            {
                lenmax = strlen(target[count]);
            }
            count++;
        }
    } while (strcmp(search[count], "stop") != 0);

    printf("Posisi Bangku Awal:\n");
    for ( i = 0; i < row; i++)
    {
        for ( j = 0; j < column; j++)
        {
            printf("%s", student[i][j].name);
            if (j != column-1)
            {
                spacing = lenmax - strlen(student[i][j].name) + 2;
                for ( k = 1; k < spacing; k++)
                {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
    printf("\n");

    i=0;
    while (i < count)
    {
        j=0;
        while (j < row && found == 0)
        {
            k=0;
            while (k < column && found == 0)
            {
                if (strcmp(student[j][k].name, search[i]) == 0)
                {
                    rowSearch = j;
                    columnSearch = k;
                    avgSearch = (student[j][k].grade1 + student[j][k].grade2 + student[j][k].grade3) / 3;
                    //printf("%f\n", avgSearch);
                    found=1;
                }
                k++;
            }
            j++;
        }
      //printf("indeks search %d %d\n", rowSearch, columnSearch);
        found=0;
        j=0;
        while ((j < row) && (found == 0))
        {
            k=0;
            while ((k < column) && (found == 0))
            {
               if (strcmp(student[j][k].name, target[i]) == 0)
               {
                  rowTarget = j;
                  columnTarget = k;
                  avgTarget = (student[j][k].grade1 + student[j][k].grade2 + student[j][k].grade3) / 3;
                  //printf("%f\n", avgTarget);
                  found=1;
               }
               k++;
            }
            j++;
        }
      //printf("indeks target %d %d\n", rowTarget, columnTarget);
        if (avgSearch > avgTarget)
        {
               //swap nama
               strcpy(temp.name, student[rowSearch][columnSearch].name);
               strcpy(student[rowSearch][columnSearch].name, student[rowTarget][columnTarget].name);
               strcpy(student[rowTarget][columnTarget].name, temp.name);
               //swap grade 1
               temp.grade1 = student[rowSearch][columnSearch].grade1;
               student[rowSearch][columnSearch].grade1 = student[rowTarget][columnTarget].grade1;
               student[rowTarget][columnTarget].grade1 = temp.grade1;
               //swap grade 2
               temp.grade2 = student[rowSearch][columnSearch].grade2;
               student[rowSearch][columnSearch].grade2 = student[rowTarget][columnTarget].grade2;
               student[rowTarget][columnTarget].grade2 = temp.grade2;
               //swap grade 3
               temp.grade3 = student[rowSearch][columnSearch].grade3;
               student[rowSearch][columnSearch].grade3 = student[rowTarget][columnTarget].grade3;
               student[rowTarget][columnTarget].grade3 = temp.grade3;
               //printf("%s %s\n", student[rowSearch][columnSearch].name, student[rowTarget][columnTarget].name);
        }
        found=0;
        i++;
    }
    spacing=0;
    printf("Posisi Bangku Setelah Nilai Dicek:\n");
    for ( i = 0; i < row; i++)
    {
        for ( j = 0; j < column; j++)
        {
                printf("%s", student[i][j].name);
                if (j != column-1)
                {
                spacing = lenmax - strlen(student[i][j].name) + 2;
                for ( k = 1; k < spacing; k++)
                {
                    printf(" ");
                }
                }
        }
        printf("\n");
    }

    return 0;
}
