#include <stdio.h>
#include <math.h>

typedef struct
{
    int alas, tinggi, miring;
}segitiga;
int main(){
    int i, n;
    scanf("%d", &n);
    segitiga seg[n];
    for ( i = 0; i < n; i++)
    {
        printf("ukuran panjang, tinggi, dan miring segitiga ke %d\n", i+1);
        scanf("%d", &seg[i].alas);
        scanf("%d", &seg[i].tinggi);
        scanf("%d", &seg[i].miring);
    }
    int nilai = 0;
    i = 0;
    int max = 0;
    while ((max < 3) && (i < n))
    {
        nilai = sqrt(pow(seg[i].alas, 2)+(pow(seg[i].tinggi, 2)));
        if (nilai == seg[i].miring)
        {
            printf("segitiga ke-%d adalah siku-siku\n", i+1);
            printf("dengan alas = %d, tinggi = %d, dan miring = %d\n", seg[i].alas, seg[i].tinggi, seg[i].miring);
            max++;
        }
        i = i + 1;
    }
    

    return 0;
}
