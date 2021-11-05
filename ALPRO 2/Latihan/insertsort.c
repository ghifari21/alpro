#include <stdio.h>

int main(){
    int i, j, temp, many;
    scanf("%d", &many);
    int arr[many];
    for ( i = 0; i < many; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    for ( i = 1; i < many; i++)
    {
        temp = arr[i];
        j = i - 1;
        while (temp > arr[j] && j>=0)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }
    for ( i = 0; i < many; i++)
    {
        printf("%d ", arr[i]);
    }
    
    return 0;
}