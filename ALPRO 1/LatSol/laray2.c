#include <stdio.h>
int main(){
    int i;
    int n;
    int max;
    int min;
    scanf("%d", &n);
    int x[n];

    for ( i = 0; i < n; i++)
    {
        scanf("%d", &x[i]);
    }
    max= x[0];
    min= x[0];

    for ( i = 0; i < n; i++)
    {
        if (x[i] > max)
        {
            max = x[i];
        }
        if (x[i] < min)
        {
            min=x[i];
        }
    }
    printf("hasil :\n");
    printf("max = %d\n", max);
    printf("min = %d\n", min);
    return 0;
}