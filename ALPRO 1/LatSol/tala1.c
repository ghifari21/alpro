#include <stdio.h>
int main(){
    //mendeklarasikan variabel yang akan digunakan
    int i;
    int n;
    scanf("%d", &n);//meminta masukan user
    int x[n];

    for ( i = 0; i < n; i++)
    {
        scanf("%d", &x[i]);
    }
    int max=x[0];
    for ( i = 0; i < n; i++)
    {
        if (x[i] % 2 == 1)
        {
            if (max < x[i])
            {
                max = x[i];
            }
        }
    }
    printf("nilai maksimal array ganjil : %d\n", max);

    return 0;
}