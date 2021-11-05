#include <stdio.h>

int main(){
    int many1, many2;
    int i,j;
    int arr1[100], arr2[100];
    int sum1=0, sum2=0;
    scanf("%d", &many1);
    for ( i = 0; i < many1; i++)
    {
        scanf("%d", &arr1[i]);
    }
    scanf("%d", &many2);
    for ( i = 0; i < many2; i++)
    {
        scanf("%d", &arr2[i]);
    }
    
    for ( i = 0; i < many1/2; i++)
    {
        sum1+=arr1[i];
    }
    for ( i = (many2/2); i < many2; i++)
    {
        sum2+=arr2[i];
    }
    
    if (sum1 == sum2)
    {
        printf("valid\n");
    }else
    {
        printf("tidak valid\n");
    }
    
    
    return 0;
}