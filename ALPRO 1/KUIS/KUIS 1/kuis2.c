/*Saya Ghifari Octaverin 2000952 mengerjakan KUIS 1 (iris20) dalam
mata kuliah Algoritma dan Pemrograman
untuk keberkahanNya maka saya tidak melakukan kecurangan
seperti yang telah dispesifikasikan. Aamiin*/
#include <stdio.h>
int main(){
    //deklarasi variable
    int x1, x2, x3, x4;
    int y1, y2, y3, y4;
    int a, b, c, d;
    int luas1, luas2;
    //masukan dari user
    scanf("%d", &x1);
    scanf("%d", &y1);
    scanf("%d", &x2);
    scanf("%d", &y2);
    scanf("%d", &x3);
    scanf("%d", &y3);
    scanf("%d", &x4);
    scanf("%d", &y4);

    //operasi persegi panjang pertama
    a=x2-x1;
    b=y1-y2;
    luas1=a*b;
    //operasi persegi panjang kedua
    c=x4-x3;
    d=y3-y4;
    luas2=c*d;
    //memeriksa masukan user
    if(((x1,y1 < x3,y3) || (x1,y1 > x3,y3)) && (x1,y1 < x4,y4) || (x1,y1 > x4,y4))
    {
        if (luas1 > luas2)
        {
            printf("beririsan\n");
            printf("pertama\n");
        }else{
            printf("beririsan\n");
            printf("kedua\n");
        }
        
    }
    else
    {
        if (luas1 > luas2)
        {
            printf("tidak beririsan\n");
            printf("pertama\n");
        }else
        {
            printf("tidak beririsan\n");
            printf("kedua\n");
        }
    }
    
    return 0;
}