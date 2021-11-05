#include <stdio.h>
//membuat bungkusan
typedef struct{
    int nim, nilai;
}data;
int main(){
    //membuat bungkusan di main
    data a1, a2, a3;
    //meminta masukan dari user
    printf("masukan nim dan nilai pertama\n");
    scanf("%d %d", &a1.nim, &a1.nilai);
    printf("masukan nim dan nilai kedua\n");
    scanf("%d %d", &a2.nim, &a2.nilai);
    printf("masukan nim dan nilai ketiga\n");
    scanf("%d %d", &a3.nim, &a3.nilai);

    //memeriksa isi masukan
    if (((a1.nilai > a2.nilai) && (a2.nilai > a3.nilai))
    || ((a1.nilai > a3.nilai) && (a3.nilai > a2.nilai)))
    {
        printf("nilai dari nim %d adalah yang paling besar\n", a1.nim);
    }else if (((a2.nilai > a1.nilai) && (a1.nilai > a3.nilai))
    || ((a2.nilai > a3.nilai) && (a3.nilai > a1.nilai)))
    {
        printf("nilai dari nim %d adalah yang paling besar\n", a2.nim);
    }else if (((a3.nilai > a2.nilai) && (a2.nilai > a1.nilai))
    || ((a3.nilai > a1.nilai) && (a1.nilai > a2.nilai)))
    {
        printf("nilai dari nim %d adalah yang paling besar\n", a3.nim);
    }
    
    return 0;
}