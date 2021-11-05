#include <stdio.h>
//membuat bungkusan
typedef struct{
    int x, y, z;
    char karakter;
}bungkus;
int main(){
    //membuat bungkusan di main
    bungkus pertama;
    int hasil = 0;

    //masukan dari user
    scanf("%d %d %d", &pertama.x, &pertama.y, &pertama.z);
    scanf(" %c", &pertama.karakter);
    
    //memeriksa masukan dari user
    switch (pertama.karakter)
    {
    case 'A' :
        hasil = (pertama.x * pertama.y) + (pertama.y * pertama.z);
        printf("%d\n", hasil);
        break;
    case 'B' :
        hasil = (pertama.x * pertama.y) / pertama.z;
        printf("%d\n", hasil);
        break;
    case 'C' :
        hasil = pertama.x * (pertama.y - pertama.z);
        printf("%d\n", hasil);
        break;
    default :
        hasil = (pertama.x + pertama.y) - pertama.z;
        printf("%d\n", hasil);
        break;
    }
    return 0;
}