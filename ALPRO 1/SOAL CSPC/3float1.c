#include <stdio.h>
int main(){
    //deklarasi variable
    float a, b, c, d, e, f;
    int a1, a2, a3, a4, a5, a6;
    int b1, b2, b3, b4, b5, b6;
    int aa=0, ab=0, ac=0, ad=0, ae=0, af=0;
    int hasil;

    //masukan dari user
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    scanf("%f", &d);
    scanf("%f", &e);
    scanf("%f", &f);

    //operasi untuk memeriksa angka dibelakang koma
    b1=a;
    b2=b;
    b3=c;
    b4=d;
    b5=e;
    b6=f;

    a1 = (a * 10) - (b1 * 10);
    a2 = (b * 10) - (b2 * 10);
    a3 = (c * 10) - (b3 * 10);
    a4 = (d * 10) - (b4 * 10);
    a5 = (e * 10) - (b5 * 10);
    a6 = (f * 10) - (b6 * 10);

    //memeriksa masukan dari user
    if ((a1 == 3) || (a1 == 6) || (a1 == 9))
    {
        aa = 1;
    }
    if ((a2 == 3) || (a2 == 6) || (a2 == 9))
    {
        ab = 1;
    }
    if ((a3 == 3) || (a3 == 6) || (a3 == 9))
    {
        ac = 1;
    }
    if ((a4 == 3) || (a4 == 6) || (a4 == 9))
    {
        ad = 1;
    }
    if ((a5 == 3) || (a5 == 6) || (a5 == 9))
    {
        ae = 1;
    }
    if ((a6 == 3) || (a6 == 6) || (a6 == 9))
    {
        af = 1;
    }
    
    //menampilkan hasil
    hasil = aa + ab + ac + ad + ae + af;
    if (hasil >= 3)
    {
        printf("valid\n");
    }else
    {
        printf("tidak valid\n");
    }
    
    return 0;
}