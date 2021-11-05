#include <stdio.h>
#include <string.h>

typedef struct{
    int noKursi;
    char nama[50];
    char tipe[50];
}pengunjung;

void printData(int data[], int n);

void qsTengah(pengunjung data[], int kiri, int kanan){
    int i, j, temp;
    char temps[50];
    i=kiri; j=kanan;
    int pivot = data[(kanan+kiri)/2].noKursi;
    
    do{
        while((data[i].noKursi < pivot) && (i <= j)){
            i++;
        }
        while((data[j].noKursi > pivot) && (i <= j)){
            j--;
        }

        if(i < j){
            temp = data[i].noKursi;
            data[i].noKursi = data[j].noKursi;
            data[j].noKursi = temp;

            strcpy(temps, data[i].nama);
            strcpy(data[i].nama, data[j].nama);
            strcpy(data[j].nama, temps);

            strcpy(temps, data[i].tipe);
            strcpy(data[i].tipe, data[j].tipe);
            strcpy(data[j].tipe, temps);
            
            i++; j--;
        }
    }while(i < j);

    if((kiri < j) && (j < kanan)){
        qsTengah(data, kiri, j);
    }
    if((i < kanan) && (i > kiri)){
        qsTengah(data, i, kanan);
    }
}

void bubbleSort(pengunjung data[], int n){
    int i, temp, swap;
    char temps[50];

    // Perulangan sampai seluruh data tidak ada yang ditukar
    do{
        swap = 0; // Penanda pertukaran data
        // Cek semua data
        for(i = 0; i < n-1; i++){
            // Jika data ke i lebih besar daripada data ke i+1
            if(data[i].noKursi > data[i+1].noKursi){
                // Tukar data
                temp = data[i].noKursi;
                data[i].noKursi = data[i+1].noKursi;
                data[i+1].noKursi = temp;

                strcpy(temps, data[i].nama);
                strcpy(data[i].nama, data[i+1].nama);
                strcpy(data[i+1].nama, temps);

                strcpy(temps, data[i].tipe);
                strcpy(data[i].tipe, data[i+1].tipe);
                strcpy(data[i+1].tipe, temps);
                // Tandai ada data yang ditukar
                swap = 1;
            }
        }
    }while(swap == 1);
}

void printData(int data[], int n){
    int i;
    for(i = 0; i < n; i++){
        if(i != n-1) printf("%d ", data[i]);
        else printf("%d\n", data[i]);
    }
}

int main(){
    int i, n;
    pengunjung arrPengunjung[10];
    char t;
    scanf(" %c %d", &t, &n);
    for(i = 0; i < n; i++){
        scanf("%d %s %s", &arrPengunjung[i].noKursi, arrPengunjung[i].nama, arrPengunjung[i].tipe);
    }

    if(t == 'B') bubbleSort(arrPengunjung, n);
    else qsTengah(arrPengunjung, 0, n-1);

    for(i = 0; i < n; i++){
        printf("No Tempat Duduk : %d\n", arrPengunjung[i].noKursi);
        printf("Nama : %s\n", arrPengunjung[i].nama);
        printf("Tipe : %s\n\n", arrPengunjung[i].tipe);
    }

    return 0;
}
    // Q
    // 6
    // 13 A B
    // 16 B C
    // 12 C F
    // 7 D D
    // 8 D 4
    // 9 D D

    // Q
    // 6
    // 2 iii iii
    // 5 uuu zzz
    // 8 oooo rrrr
    // 1 eee mmm
    // 5 aaa ppp
    // 4 xxx xxx