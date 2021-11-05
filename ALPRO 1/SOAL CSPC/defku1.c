#include <stdio.h>
//membuat bungusan
typedef struct 
{
    int j, m;
    int jam;
}online;
int main(){
    //membuat bungkusan didalam main
    online a1, a2, a3, a4;
    //meminta masukan user
    scanf("%d", &a1.j);
    scanf("%d", &a1.m);
    scanf("%d", &a2.j);
    scanf("%d", &a2.m);
    scanf("%d", &a3.j);
    scanf("%d", &a3.m);
    scanf("%d", &a4.j);
    scanf("%d", &a4.m);

    //menghitung menit total tiap jam
    a1.jam = (a1.j * 60) + a1.m;
    a2.jam = (a2.j * 60) + a2.m;
    a3.jam = (a3.j * 60) + a3.m;
    a4.jam = (a4.j * 60) + a4.m;

    //memeriksa masukan dari user
    if (((a1.jam <= a3.jam) && (a3.jam <= a2.jam))
    || ((a1.jam >= a3.jam) && (a1.jam <= a4.jam)))
    {
        printf("hore dibaca si dia\n");
    }else
    {
        printf("ikhlaskan saja\n");
    }
    
    return 0;
}
