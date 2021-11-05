#include <stdio.h>
//membuat bungkusan
typedef struct
{
    int panjang, lebar, tinggi;
    int luas, volume;
}balok;
int main(){
    //membuka bungkusan
    balok a;
    printf("Masukan panjang balok\n");
    scanf("%d", &a.panjang);
    printf("Masukan lebar balok\n");
    scanf("%d", &a.lebar);
    printf("Masukan tinggi balok\n");
    scanf("%d", &a.tinggi);

    //operasi menghitung luas permukaan
    a.luas = 2 * ((a.panjang * a.lebar) + (a.panjang * a.tinggi) + (a.tinggi * a.lebar));
    //operasi menghitung volume
    a.volume = a.panjang * a.lebar * a.tinggi;

    //menampilkan hasil
    printf("Luas permukaan balok adalah : %d\n", a.luas);
    printf("Volume balok adalah : %d", a.volume);

    return 0;
}
