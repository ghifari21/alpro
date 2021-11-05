#include<stdio.h>
#include<stdlib.h>
#include<windows.h>


/*------ variabel global ------*/
int i = 0, j = 0, k = 0;
int pilih = 0;
unsigned long long int biner = 0, desimal = 0, oktal = 0;
char heksa[100];
char lanjut;


/*------ deklarasi fungsi & prosedur------*/
void header();
void satu();
void dua();
void tiga();
void empat();
void lima();
void enam();
void clear();
void next();



/*------ program utama ------*/
int main(){
    system("mode con cols=60 lines=40");
    do
    {
        clear();
        printf("           --------------------------------------\n");
        printf("             Pilih konversi yang diinginkan : ");
        scanf("%d", &pilih);
        switch (pilih)
        {
        case 1:
            satu();
            next();
            break;
        case 2:
            dua();
            next();
            break;
        case 3:
            tiga();
            next();
            break;
        case 4:
            empat();
            next();
            break;
        case 5:
            lima();
            next();
            break;
        case 6:
            enam();
            next();
            break;
        default:
            break;
        }
    } while (lanjut != 't');
    return 0;
}



/*------ fungsi-fungsi ------*/
//fungsi header
void header(){
    printf("\n\n                       < CALCULATOR >\n");
    printf("                   </ Programmer Version />\n\n");
    printf("             ========== Pilih Konversi ========\n");
    printf("             || 1. Desimal -> Biner          ||\n");
    printf("             || 2. Desimal -> Oktal          ||\n");
    printf("             || 3. Desimal -> Heksadesimal   ||\n");
    printf("             || 4. Biner -> Desimal          ||\n");
    printf("             || 5. Biner -> Oktal            ||\n");
    printf("             || 6. Biner -> Heksadesimal     ||\n");
    printf("             ==================================\n\n");
}

//fungsi membersihkan layar
void clear(){
    if (i == 0 || (lanjut != 't' && lanjut == 'y'))
    {
        system("cls");
        header();
    }
}

//fungsi pengatur loop input
void next(){
    printf("\n           --------------------------------------\n");
    printf("                   Lanjutkan? (y/t)\n                   Jawab : ");
    scanf(" %c", &lanjut);
}

//fungsi konversi desimal -> biner
void satu(){
    int arrBin[200] = {0};
    int binary[200] = {0};
    printf("             -> Masukkan bilangan desimal : ");
    scanf("%llu", &desimal);
    while (desimal != 0)
    {
        arrBin[i] = desimal%2;
        desimal /= 2;
        i++;
    }
    printf("             -> Hasil konversi : ");
    while (j < i)
    {
        binary[j] = arrBin[i-(j+1)];
        printf("%llu", binary[j]);
        j++;
    }
    i = 0;
    while (i < j)
    {
        arrBin[i] = 0;
        binary[i] = 0;
        i++;
    }
    i = 0;
    j = 0;
}

//fungsi konversi desimal -> oktal
void dua(){
    int rem, help = 1;
    printf("             -> Masukkan bilangan desimal : ");
    scanf("%llu", &desimal);
    while (desimal != 0)
    {
        rem = desimal % 8;
        oktal = rem * help + oktal;
        help *= 10;
        desimal /= 8;
    }
    printf("             -> Hasil konversi : %llu", oktal);
    oktal = 0;
}

//fungsi konversi desimal -> heksadesimal
void tiga(){
    int rem;
    char tampung[100];
    printf("             -> Masukkan bilangan desimal : ");
    scanf("%llu", &desimal);
    while (desimal != 0)
    {
        rem = desimal % 16;
        if (rem>9)
            tampung[i]=(char)(rem+55);
        else
            tampung[i]=(char)(rem+48);
        desimal /= 16;
        i++;
    }
    while (j < i)
    {
        heksa[j] = tampung[i-(j+1)];
        j++;
    }
    heksa[j] = '\0';
    printf("             -> Hasil konversi : %s", heksa);
    i = 0;
    j = 0;
}

//fungsi konversi biner -> desimal
void empat(){
    int pangkat = 1, getbin = 0;
    printf("             -> Masukkan bilangan biner : ");
    scanf("%llu", &biner);
    while (biner!=0)
    {
        getbin=biner%10;
        desimal=getbin*pangkat+desimal;
        biner=biner/10;
        pangkat=pangkat*2;
    }
    printf("             -> Hasil konversi : %llu", desimal);
    desimal = 0;
}

//fungsi konversi biner -> oktal
void lima(){
    int pangkat = 1, getbin = 0;
    printf("             -> Masukkan bilangan biner : ");
    scanf("%llu", &biner);
    while (biner!=0)
    {
        getbin=biner%10;
        desimal=getbin*pangkat+desimal;
        biner=biner/10;
        pangkat=pangkat*2;
    }
    int rem, help = 1;
    while (desimal != 0)
    {
        rem = desimal % 8;
        oktal = rem * help + oktal;
        help *= 10;
        desimal /= 8;
    }
    printf("             -> Hasil konversi : %llu", oktal);
    oktal = 0;
}

//fungsi konversi biner -> heksadesimal
void enam(){
    int pangkat = 1, getbin = 0;
    printf("             -> Masukkan bilangan biner : ");
    scanf("%llu", &biner);
    while (biner!=0)
    {
        getbin=biner%10;
        desimal=getbin*pangkat+desimal;
        biner=biner/10;
        pangkat=pangkat*2;
    }
    int rem;
    char tampung[100];
    while (desimal != 0)
    {
        rem = desimal % 16;
        if (rem>9)
            tampung[i]=(char)(rem+55);
        else
            tampung[i]=(char)(rem+48);
        desimal /= 16;
        i++;
    }
    while (j < i)
    {
        heksa[j] = tampung[i-(j+1)];
        j++;
    }
    heksa[j] = '\0';
    printf("             -> Hasil konversi : %s", heksa);
    i = 0;
    j = 0;
}