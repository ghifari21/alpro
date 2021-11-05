#include <stdio.h>
int main(){
    //deklarasi variable
    int n, m, k, h, r;
    int laba;
    //masukan dari user
    scanf("%d %d %d %d %d", &n, &m, &k, &h, &r);

    //menghitung laba
    laba = ((100 * n) + (150 * m) + (75 * k) + (175 * h)) * r;

    //menampilkan hasil
    printf("%d\n", laba);

    return 0;
}