#include <stdio.h>
#include <string.h>

int check(int n, char str[100][100]){
    int ret=0;
    int value[100];
    for (int i = 0; i < n; i++)
    {
        value[i]=0;
        for (int j = 0; j < strlen(str[i]); j++)
        {
            if (strlen(str[i]) % 2 == 0)
            {
                
            }
            for (int k = 0; k < strlen(str[i]); k++)
            {
                if (str[i][j] == str[i][k])
                {
                    value[i]++;
                }
            }
            
        }
        if (value[i] >= 3)
        {
            ret=1;
        }
    }
    return ret;
}

int main(){
    int i, n, j;
    char string[100];
    scanf("%d", &n);
    for ( i = 0; i < n; i++)
    {
        scanf("%s", string[i]);
    }
    if (check(n, string[100]) == 1)
    {
        for ( i = 0; i < n; i++)
        {
            printf("%s", string[i]);
        }
    }
    return 0;
}