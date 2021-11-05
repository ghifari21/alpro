#include <stdio.h>
#include <string.h>

int main(){
    int i, j, count, tempGrade, minIdx;
    char name[100][100], mode, temp[100];
    int grade[100];

    scanf("%d", &count);
    for ( i = 0; i < count; i++)
    {
        scanf("%s", &name[i]);
        scanf("%d", &grade[i]);
    }
    scanf(" %c", &mode);

    switch (mode)
    {
    case 'A':
        for ( i = 0; i < count; i++)
        {
            for ( j = i + 1; j < count; j++)
            {
                if (strcmp(name[i], name[j]) > 0)
                {
                    strcpy(temp, name[i]);
                    strcpy(name[i], name[j]);
                    strcpy(name[j], temp);
                    tempGrade = grade[i];
                    grade[i] = grade[j];
                    grade[j] = tempGrade;
                }
            }            
        }
        break;
    case 'B':
        for ( i = 0; i < count - 1; i++)
        {
            minIdx = i;
            for ( j = i + 1; j < count; j++)
            {
                if (grade[minIdx] > grade[j])
                {
                    minIdx = j;
                }
            }
            tempGrade = grade[i];
            grade[i] = grade[minIdx];
            grade[minIdx] = tempGrade;
            strcpy(temp, name[i]);
            strcpy(name[i], name[minIdx]);
            strcpy(name[minIdx], temp);
        }
        break;
    default:
        break;
    }

    for ( i = 0; i < count; i++)
    {
        printf("%s %d\n", name[i], grade[i]);
    }
    

    return 0;
}