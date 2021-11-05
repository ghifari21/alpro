#include <stdio.h>
int main(){
    int i;//initiator
    int n;//panjang array
    scanf("%d", &n);//masukan dari user untuk panjang array
    int x[n];//array
    int inmax=0, inmin=0;
    for ( i = 0; i < n; i++)
    {
        scanf("%d", &x[i]);
    }
    int max= x[0];
    int min= x[0];

    for ( i = 0; i < n; i++)
    {
        if (x[i] > max)
        {
            max = x[i];
            inmax=i;
        }
        if (x[i] < min)
        {
            min=x[i];
            inmin=i;
        }
    }
    printf("%d\n", inmax*min);
    printf("%d\n", max-inmin);
    return 0;
}