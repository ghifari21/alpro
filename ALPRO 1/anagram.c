#include <stdio.h>
#include <string.h>


int main(){
    int i, j;
    char arr1[100][100];
    char arr2[100][100];
    char mergearr1[100];
    char mergearr2[100];
    int input1, input2;

    scanf("%d", &input1);
    for ( i = 0; i < input1; i++)
    {
        scanf("%s", &arr1[i]);
    }
    scanf("%d", &input2);
    for ( i = 0; i < input2; i++)
    {
        scanf("%s", &arr2[i]);
    }
    
    i=0;
    int idx=0;
    while (i < input1)
    {
        j=0;
        while (j < strlen(arr1[i]))
        {
            mergearr1[idx++]=arr1[i][j++];
        }
        i++;
    }
    i=0;
    idx=0;
    while (i < input2)
    {
        j=0;
        while (j < strlen(arr2[i]))
        {
            mergearr2[idx++]=arr2[i][j++];
        }
        i++;
    }
    int found=0;
    if (strlen(mergearr1) == strlen(mergearr2))
    {
        for ( i = 0; i < strlen(mergearr1); i++)
        {
            for ( j = 0; j < strlen(mergearr2); j++)
            {
                if (mergearr1[i] == mergearr2[j])
                {
                    mergearr2[j]=' ';
                    found++;
                }
            }
        }
    }
    if (found == strlen(mergearr1))
    {
        printf("Anda Menemukan Makan ");
        for ( i = 0; i < input1; i++)
        {
            printf("%s", arr1[i]);
            if (i != input1-1)
            {
                printf(" ");
            }
            if (i == input1-1)
            {
                printf("!\n");
            }
        }
    }
    else
    {
        printf("Pemilik Makam Tidak Ditemukan!\n");
    }
    
    return 0;
}