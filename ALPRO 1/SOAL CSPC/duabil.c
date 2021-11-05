#include <stdio.h>
int main(){
    //deklarasi variable
    int a, b, c, d;

    //masukan dari user
    scanf("%d", &a);
    scanf("%d", &b);

    //memeriksa masukan user
    if ((a % 2 != 0) && (b % 2  != 0))
    {
        c = a * b;
        printf("%d", c);
    }else if ((a % 2 == 0) && (b % 2 == 0))
    {
        d = a + b;
        printf("%d", d);
    }else
    {
        printf("%d %d\n", a, b);
    }
    
    return 0;
}