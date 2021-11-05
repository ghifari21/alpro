/*Saya Ghifari Octaverin 2000952 mengerjakan KUIS 1 (stops20) dalam
mata kuliah Algoritma dan Pemrograman
untuk keberkahanNya maka saya tidak melakukan kecurangan
seperti yang telah dispesifikasikan. Aamiin*/
#include <stdio.h>
int main(){
    //deklarasi variable
    int j1, m1, j2, m2, j3, m3, j4, m4;
    int jam1, jam2, jam3, jam4;
    //masukan dari user
    scanf("%d", &j1);
    scanf("%d", &m1);
    scanf("%d", &j2);
    scanf("%d", &m2);
    scanf("%d", &j3);
    scanf("%d", &m3);
    scanf("%d", &j4);
    scanf("%d", &m4);

    //konversi jam 1 menit 1 ke menit
    jam1=(j1*60)+m1;
    jam2=(j2*60)+m2;
    jam3=(j3*60)+m3;
    jam4=(j4*60)+m4;
    //memeriksa masukan user
    if ((jam3 >= jam1) && (jam3 <= jam2))
    {
        printf("hore dibaca si dia\n");
    }
    else
    {
        printf("ikhlaskan saja\n");
    }
    

    return 0;
}