#include<stdio.h>
#include<string.h>
int main(){
    char input[100][100], baku[100][100], tdkbaku[100][100];
    char diganti[100], pengganti[100];
    int i, j, k, panjang = 0, index = 0;
    i = 0;
    do {
        scanf("%s", &input[i]);
        if (strcmp(input[i], "santuy") != 0) {
            scanf(" %c %c", &diganti[i], &pengganti[i]);
        }
        i++;
        panjang++;
    } while (strcmp(input[i-1], "santuy") != 0);
    int letakP = panjang+1, letakG = panjang+1;
    i = 0;
    while (i < panjang-1) {
        j = 0;
        while (j < strlen(input[i])) {
            if (input[i][j] == pengganti[i]) {
                letakP = j;
            }
            if (input[i][j] == diganti[i]) {
                letakG = j;
                index = j;
                if (letakP < letakG) {
                    input[i][index] = input[i][index];
                } else {
                    input[i][index] = pengganti[i];
                }
            } j++;
        }
        letakP = panjang+1; letakG = panjang+1; j = 0;
        i++;
    }
    int Jumlah = 0, adabaku = 0, adatdkbaku = 0;
    int b = 0, tb = 0;
    i = 0;
    while (i < panjang-1) {
        j = 0;
        while (j < strlen(input[i])) {
            Jumlah += input[i][j];
            j++;
        }
        if (Jumlah % 2 == 0) {
            strcpy(baku[b], input[i]);
            b++;
            adabaku++;
        } else {
            strcpy(tdkbaku[tb], input[i]);
            tb++;
            adatdkbaku++;
        }
        i++;
        Jumlah = 0;
    }
    i = 0;
    printf("=== KATA BAKU ===\n");
    if (adabaku == 0) {
        printf("TIDAK ADA.\n");
    } else {
        i = 0;
        while (i < adabaku) {
            printf("%s\n", baku[i]);
            i++;
        }
    }
    i = 0;
    printf("\n=== KATA NON BAKU ===\n");
    if (adatdkbaku == 0) {
        printf("TIDAK ADA.\n");
    } else {
        i = 0;
        while (i < adatdkbaku) {
            printf("%s\n", tdkbaku[i]);
            i++;
        }
    }
    return 0;
}