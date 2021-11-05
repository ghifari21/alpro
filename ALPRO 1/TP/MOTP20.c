/*Saya Ghifari Octaverin 2000952 mengerjakan TP3 dalam mata kuliah Algoritma dan Pemrograman
untuk keberkahanNya maka saya tidak melakukan kecurangan
seperti yang telah dispesifikasikan. Aamiin*/
#include <stdio.h>
//membuat bungkusan
typedef struct 
{
    int tanggal, no, waktu;
    int total;
    char jenis;
}parkir;

int main(){
        //membuat bungkusan didalam main
        parkir pertama, kedua, ketiga;
        pertama.total=0;
        kedua.total=0;
        ketiga.total=0;
        //meminta masukan dari user
        scanf("%d %d %c %d", &pertama.tanggal, &pertama.no, &pertama.jenis, &pertama.waktu);
        scanf("%d %d %c %d", &kedua.tanggal, &kedua.no, &kedua.jenis, &kedua.waktu);
        scanf("%d %d %c %d", &ketiga.tanggal, &ketiga.no, &ketiga.jenis, &ketiga.waktu);

        //memeriksa masukan dari user
        switch (pertama.jenis)
        {
        case 'A':
            pertama.total = 6000 * pertama.waktu;
            break;
        case 'B':
            pertama.total = 3000 * pertama.waktu;
            break;
        case 'C':
            pertama.total = 10000 * pertama.waktu;
            break;
        default:
            break;
        }
        switch (kedua.jenis)
        {
        case 'A':
            kedua.total = 6000 * kedua.waktu;
            break;
        case 'B':
            kedua.total = 3000 * kedua.waktu;
            break;
        case 'C':
            kedua.total = 10000 * kedua.waktu;
            break;
        default:
            break;
        }
        switch (ketiga.jenis)
        {
        case 'A':
            ketiga.total = 6000 * ketiga.waktu;
            break;
        case 'B':
            ketiga.total = 3000 * ketiga.waktu;
            break;
        case 'C':
            ketiga.total = 10000 * ketiga.waktu;
            break;
        default:
            break;
        }
    //memeriksa diskon
    if (((pertama.tanggal >= 25) && (pertama.tanggal <= 31))
    && ((pertama.no % 8) == 0))
    {
        pertama.total = pertama.total - ((pertama.total *10) / 100);  
    }
    if (((kedua.tanggal >= 25) && (kedua.tanggal <= 31))
    && ((kedua.no % 8) == 0))
    {
        kedua.total = kedua.total - ((kedua.total *10) / 100);  
    }
    if (((ketiga.tanggal >= 25) && (ketiga.tanggal <= 31))
    && ((ketiga.no % 8) == 0))
    {
        ketiga.total = ketiga.total - ((ketiga.total *10) / 100);  
    }

    //menampilkan hasil dan memeriksa jenis kendaraan
    printf(">> DATA PARKIR MANG OLEH\n");
    printf("-  Nomor Kendaraan : %d\n", pertama.no);
    switch (pertama.jenis)
    {
    case 'A':
        printf("-  Jenis Kendaraan : Mobil\n");
        break;
    case 'B':
        printf("-  Jenis Kendaraan : Motor\n");
        break;
    case 'C':
        printf("-  Jenis Kendaraan : Truk\n");
        break;
    default:
        break;
    }
    printf("-  Total Biaya Parkir : %d\n", pertama.total);
    printf("-  Nomor Kendaraan : %d\n", kedua.no);
    switch (kedua.jenis)
    {
    case 'A':
        printf("-  Jenis Kendaraan : Mobil\n");
        break;
    case 'B':
        printf("-  Jenis Kendaraan : Motor\n");
        break;
    case 'C':
        printf("-  Jenis Kendaraan : Truk\n");
        break;
    default:
        break;
    }
    printf("-  Total Biaya Parkir : %d\n", kedua.total);
    printf("-  Nomor Kendaraan : %d\n", ketiga.no);
    switch (ketiga.jenis)
    {
    case 'A':
        printf("-  Jenis Kendaraan : Mobil\n");
        break;
    case 'B':
        printf("-  Jenis Kendaraan : Motor\n");
        break;
    case 'C':
        printf("-  Jenis Kendaraan : Truk\n");
        break;
    default:
        break;
    }
    printf("-  Total Biaya Parkir : %d\n", ketiga.total);

    return 0;
}