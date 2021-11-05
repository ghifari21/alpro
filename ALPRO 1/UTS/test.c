#include <stdio.h>

int main(){
    int i, n, m;
    int index[100];
    int input1[100];
    int input2[100];
    int temp;

    scanf("%d", &n);
    for ( i = 0; i < n; i++)
    {
        scanf("%d", &input1[i]);
    }
    for ( i = 0; i < n; i++)
    {
        scanf("%d", &input2[i]);
    }
    scanf("%d", &m);
    for ( i = 0; i < m; i++)
    {
        scanf("%d", &index[i]);
        temp = input1[index[i]];
        input1[index[i]] = input2[index[i]];
        input2[index[i]] = temp;
    }
    
    for ( i = 0; i < n/2; i++)
    {
        printf("%d %d", input1[i], input2[i]);
        if (i != (n/2)-1)
        {
            printf(" ");
        }
    }
    printf("\n");
    for ( i = n/2; i < n; i++)
    {
        printf("%d %d", input1[i], input2[i]);
        if (i != n-1)
        {
            printf(" ");
        }
    }
    printf("\n");
    
    return 0;
}