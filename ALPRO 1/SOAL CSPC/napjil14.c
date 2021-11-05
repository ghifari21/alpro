#include <stdio.h>
int main(){
    int i, j=0, k=0;
    int numbers[100];
    int even[100];
    int odd[100];
    for ( i = 0; i < 6; i++)
    {
        scanf("%d", &numbers[i]);
    }
    for ( i = 0; i < 6; i++)
    {
        if (numbers[i] % 2 == 0)
        {
            even[j] = numbers[i];
            j++;
        }
        else
        {
            odd[k] = numbers[i];
            k++;
        }
    }
    if (j == k)
    {
        for ( i = 0; i < 3; i++)
        {
            printf("%d\n", even[i]);
            printf("%d\n", odd[i]);
        }
    }
    else
    {
        printf("tidak valid\n");
    }
    
    
    return 0;
}