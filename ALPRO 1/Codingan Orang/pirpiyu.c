#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
    int i,j;
    char kata[100];
    scanf("%s", kata);
    int rem = 0;
    int akar = 0;
    float tengah = 0;
    akar = sqrt(strlen(kata));
    tengah = sqrt(strlen(kata));
    if (tengah - akar == 0)
    {
        akar = akar-1;
    }
    for ( j = 0; j <= akar; j++)
    {
        for ( i = akar-j; i > 0; i--)
        {
            printf(" ");
        }
        for ( i = 0; i < j*2+1; i++)
        {
            //printf("rem:%d\n", rem);
            //printf("kata:%d\n", strlen(kata));
            if (strlen(kata)<=rem)
            {
                break;
            }
            printf("%c", kata[rem]);
            rem++;
        }
        printf("\n");
        if (rem == strlen(kata))
        {
            break;
        }
    }
    return 0;
}