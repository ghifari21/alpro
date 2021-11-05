#include <stdio.h>
#include <string.h>


void nilaiA(int n, int nilai[n], char nama[n][100]){
    int i, angka=0;
    for ( i = 0; i < n; i++)
    {
        if (nilai[i]>=90 && nilai[i]<= 100)
        {
            printf("%d. %s\n", angka+1, nama[i]);
            angka++;
        }
    }
    if (angka == 0)
    {
        printf("Tidak ada data.\n");
    }
}
void nilaiB(int n, int nilai[n], char nama[n][100]){
    int i, angka=0;
    for ( i = 0; i < n; i++)
    {
        if (nilai[i]>=80 && nilai[i]<= 89)
        {
            printf("%d. %s\n", angka+1, nama[i]);
            angka++;
        }
    }
    if (angka == 0)
    {
        printf("Tidak ada data.\n");
    }
}
void nilaiC(int n, int nilai[n], char nama[n][100]){
    int i, angka=0;
    for ( i = 0; i < n; i++)
    {
        if (nilai[i]>=70 && nilai[i]<= 79)
        {
            printf("%d. %s\n", angka+1, nama[i]);
            angka++;
        }
    }
    if (angka == 0)
    {
        printf("Tidak ada data.\n");
    }
}
void nilaiD(int n, int nilai[n], char nama[n][100]){
    int i, angka=0;
    for ( i = 0; i < n; i++)
    {
        if (nilai[i]>=60 && nilai[i]<= 69)
        {
            printf("%d. %s\n", angka+1, nama[i]);
            angka++;
        }
    }
    if (angka == 0)
    {
        printf("Tidak ada data.\n");
    }
}
void nilaiE(int n, int nilai[n], char nama[n][100]){
    int i, angka=0;
    for ( i = 0; i < n; i++)
    {
        if (nilai[i]<60)
        {
            printf("%d. %s\n", angka+1, nama[i]);
            angka++;
        }
    }
    if (angka == 0)
    {
        printf("Tidak ada data.\n");
    }
}

int main(){
    int i, n;
    scanf("%d", &n);
    char nama[n][100];
    int nilai[n];
    for ( i = 0; i < n; i++)
    {
        scanf(" %s %d", &nama[i], &nilai[i]);
    }
    printf("\nOutput:\n");
    printf(">>> A\n");
    nilaiA(n, nilai, nama);
    printf("\n");
    printf(">>> B\n");
    nilaiB(n, nilai, nama);
    printf("\n");
    printf(">>> C\n");
    nilaiC(n, nilai, nama);
    printf("\n");
    printf(">>> D\n");
    nilaiD(n, nilai, nama);
    printf("\n");
    printf(">>> E\n");
    nilaiE(n, nilai, nama);
    //printf("\n");

    return 0;
}