/*  Tugas Masa Depan

    Saya Hilman Fauzi Herdiana mengerjakan evaluasi Tugas Masa Depan dalam mata kuliah
    Algoritma dan Pemrograman I untuk keberkahanNya maka saya tidak
    melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/
#include <stdio.h>
#include <string.h>

//PROSEDUR PILIHAN MODE
void mode1(int n,int m,int panjang[]);
void mode2(int n,int m,int panjang[]);

//PROSEDUR PEMISAH (SPASI)
void pemisah(int);

//PROSEDUR POLA TAMBAH
void polaplus_atas1(int);
void polaplus_atas2(int);
void polaplus_tengah(int);
void polaplus_bawah1(int);
void polaplus_bawah2(int);

//PROSEDUR POLA ANGKA 0
void pola0_atas1(int);
void pola0_atas2(int);
void pola0_tengah(int);
void pola0_bawah1(int);
void pola0_bawah2(int);

//PROSEDUR POLA ANGKA 1
void pola1_atas1(int);
void pola1_atas2(int);
void pola1_tengah(int);
void pola1_bawah1(int);
void pola1_bawah2(int);

//PROSEDUR POLA ANGKA 2
void pola2_atas1(int);
void pola2_atas2(int);
void pola2_tengah(int);
void pola2_bawah1(int);
void pola2_bawah2(int);

//PROSEDUR POLA ANGKA 3
void pola3_atas1(int);
void pola3_atas2(int);
void pola3_tengah(int);
void pola3_bawah1(int);
void pola3_bawah2(int);

//PROSEDUR POLA ANGKA 4
void pola4_atas1(int);
void pola4_atas2(int);
void pola4_tengah(int);
void pola4_bawah1(int);
void pola4_bawah2(int);

//PROSEDUR POLA ANGKA 5
void pola5_atas1(int);
void pola5_atas2(int);
void pola5_tengah(int);
void pola5_bawah1(int);
void pola5_bawah2(int);

//PROSEDUR POLA ANGKA 6
void pola6_atas1(int);
void pola6_atas2(int);
void pola6_tengah(int);
void pola6_bawah1(int);
void pola6_bawah2(int);

//PROSEDUR POLA ANGKA 7
void pola7_atas1(int);
void pola7_atas2(int);
void pola7_tengah(int);
void pola7_bawah1(int);
void pola7_bawah2(int);

//PROSEDUR POLA ANGKA 8
void pola8_atas1(int);
void pola8_atas2(int);
void pola8_tengah(int);
void pola8_bawah1(int);
void pola8_bawah2(int);

//PROSEDUR POLA ANGKA 9
void pola9_atas1(int);
void pola9_atas2(int);
void pola9_tengah(int);
void pola9_bawah1(int);
void pola9_bawah2(int);

//PROSEDUR UNTUK POLA PANJANG STRING
void lenstring_atas1(int n,int m,int panjang[]);
void lenstring_atas2(int n,int m,int panjang[]);
void lenstring_tengah(int n,int m,int panjang[]);
void lenstring_bawah1(int n,int m,int panjang[]);
void lenstring_bawah2(int n,int m,int panjang[]);

//=================================================================================
//===                               BAGIAN MAIN                                 ===
//=================================================================================

int main(){

    //deklarasi variabel
    int n, mode, thick;
    int w, x, y, z, len;
    int lenkata[100];
    char str[100][100];
    
    //=== PROSES INPUT ===
    scanf("%d", &mode); //input untuk pilih mau mode 1 atau 2
    scanf("%d", &n); //banyaknya string

    //masukan string
    for (x = 0; x < n; x++)
    {
        y=0;
        scanf("%s", &str[x]);
        lenkata[x] = strlen(str[x]);
    }
    scanf("%d", &thick); //ketebalan pola

    /*for (x = 0; x < n; x++)
    {
        printf("%d\n", lenkata[x]);
    }*/
        
    switch (mode)
    {
        case 1:
            mode1(thick, n, lenkata);
            break;
        case 2:
            mode2(thick, n, lenkata);
            break;
        default:
            break;
    }
        
    return 0;
}


//=================================================================================
//===                                   MODE 1                                  ===
//=================================================================================
void mode1(int n,int m,int panjang[]){

    int i, j;

    // === BAGIAN ATAS ===
    //BAGIAN ATAS 1
    for (i = 0; i < n; i++)
    {
        //POLA PLUS ( + )
        polaplus_atas1(n);
        //pemisah
        pemisah(n);
        //POLA ANGKA 6
        pola6_atas1(n);
        //pemisah
        pemisah(n);
        //POLA ANGKA 2
        pola2_atas1(n);
        //pemisah
        pemisah(n);
        //POLA ANGKA 8
        pola8_atas1(n);
        //POLA UNTUK PANJANG STRING NYA
        lenstring_atas1(n, m, panjang);
        printf("\n");
    }
    //BAGIAN ATAS 2
    for ( i = 0; i < n; i++)
    {
        //POLA PLUS ( + )
        polaplus_atas2(n);
        //pemisah
        pemisah(n);
        //POLA ANGKA 6
        pola6_atas2(n);
        //pemisah
        pemisah(n);
        //POLA ANGKA 2
        pola2_atas2(n);
        //pemisah
        pemisah(n);
        //POLA ANGKA 8
        pola8_atas2(n);
        //POLA UNTUK PANJANG STRING NYA
        lenstring_atas2(n, m, panjang);
        printf("\n");
    }

    //=== BAGIAN TENGAH ===
    //BAGIAN TENGAH
    for ( i = 0; i < n; i++)
    {
        //POLA PLUS ( + )
        polaplus_tengah(n);
        //pemisah
        pemisah(n);
        //POLA ANGKA 6
        pola6_tengah(n);
        //pemisah
        pemisah(n);
        //POLA ANGKA 2
        pola2_tengah(n);
        //pemisah
        pemisah(n);
        //POLA ANGKA 8
        pola8_tengah(n);
        //POLA UNTUK PANJANG STRING NYA
        lenstring_tengah(n, m, panjang);
        printf("\n");
    }

    //=== BAGIAN BAWAH ===
    //BAGIAN BAWAH 1
    for ( i = 0; i < n; i++)
    {
        //POLA PLUS ( + )
        polaplus_bawah1(n);
        //pemisah
        pemisah(n);
        //POLA ANGKA 6
        pola6_bawah1(n);
        //pemisah
        pemisah(n);
        //POLA ANGKA 2
        pola2_bawah1(n);
        //pemisah
        pemisah(n);
        //POLA ANGKA 8
        pola8_bawah1(n);
        //POLA UNTUK PANJANG STRING NYA
        lenstring_bawah1(n, m, panjang);        
        printf("\n");
    }
    //BAGIAN BAWAH 2
    for (i = 0; i < n; i++)
    {
        //POLA PLUS ( + )
        polaplus_bawah2(n);
        //pemisah
        pemisah(n);
        //POLA ANGKA 6
        pola6_bawah2(n);
        //pemisah
        pemisah(n);
        //POLA ANGKA 2
        pola2_bawah2(n);
        //pemisah
        pemisah(n);
        //POLA ANGKA 8
        pola8_bawah2(n);
        //POLA UNTUK PANJANG STRING NYA
        lenstring_bawah2(n, m, panjang);
        printf("\n");
    }
}

//=================================================================================
//===                                   MODE 2                                  ===
//=================================================================================
void mode2(int n,int m,int panjang[]){

    int i, j;

    //=== BAGIAN ATAS ====
    //BAGIAN ATAS 1
    for (i = 0; i < n; i++)
    {
        //POLA ANGKA 0
        pola0_atas1(n);
        //pemisah
        pemisah(n);
        //POLA ANGKA 8
        pola8_atas1(n);
        //POLA UNTUK PANJANG STRING NYA
        lenstring_atas1(n, m, panjang);
        printf("\n");
    }
    //BAGIAN ATAS 2
    for (i = 0; i < n; i++)
    {
        //POLA ANGKA 0
        pola0_atas2(n);
        //pemisah
        pemisah(n);
        //POLA ANGKA 8
        pola8_atas2(n);
        //POLA UNTUK PANJANG STRING NYA
        lenstring_atas2(n, m, panjang);
        printf("\n");
    }

    //=== BAGIAN TENGAH ===
    //BAGIAN TENGAH
    for (i = 0; i < n; i++)
    {
        //POLA ANGKA 0
        pola0_tengah(n);
        //pemisah
        pemisah(n);
        //POLA ANGKA 8
        pola8_tengah(n);
        //POLA UNTUK PANJANG STRING NYA
        lenstring_tengah(n, m, panjang);
        printf("\n");
    }

    //=== BAGIAN BAWAH ===
    //BAGIAN BAWAH 1
    for (i = 0; i < n; i++)
    {
        //POLA ANGKA 0
        pola0_bawah1(n);
        //pemisah
        pemisah(n);
        //POLA ANGKA 8
        pola8_bawah1(n);
        //POLA UNTUK PANJANG STRING NYA
        lenstring_bawah1(n, m, panjang);
        printf("\n");
    }
    //BAGIAN BAWAH 2
    for (i = 0; i < n; i++)
    {
        //POLA ANGKA 0
        pola0_bawah2(n);
        //pemisah
        pemisah(n);
        //POLA ANGKA 8
        pola8_bawah2(n);
        //POLA UNTUK PANJANG STRING NYA
        lenstring_bawah2(n, m, panjang);
        printf("\n");
    }
}

//=================================================================================
//===                               POLA PEMISAH                                ===
//=================================================================================
//POLA PEMISAH
void pemisah(int n){

    int i;

    for (i = 0; i < n; i++)
    {
        printf(" ");
    }
}

//=================================================================================
//===                               POLA PLUS (+)                               ===
//=================================================================================
//=== BAGIAN ATAS ====
//BAGIAN ATAS 1
void polaplus_atas1(int n){  
    int j;

    for (j = 0; j < n*3; j++)
    {
        printf(" ");
    }
}
//BAGIAN ATAS 2
void polaplus_atas2(int n){  
    int j;

    for (j = 0; j < n; j++)
    {
        printf(" ");
    }
    for (j = 0; j < n; j++)
    {
        printf("H");
    }
    for (j = 0; j < n; j++)
    {
        printf(" ");
    }
}
//=== BAGIAN TENGAH ===
//BAGIAN TENGAH
void polaplus_tengah(int n){  
    int j;

    for (j = 0; j < n*3; j++)
    {
        printf("H");
    }
}
//=== BAGIAN BAWAH ===
//BAGIAN BAWAH 1
void polaplus_bawah1(int n){  
    int j;

    for (j = 0; j < n; j++)
    {
        printf(" ");
    }
    for (j = 0; j < n; j++)
    {
        printf("H");
    }
    for (j = 0; j < n; j++)
    {
        printf(" ");
    }
}
//BAGIAN BAWAH 2
void polaplus_bawah2(int n){  
    int j;

    for (j = 0; j < n*3; j++)
    {
        printf(" ");
    }
}


//=================================================================================
//===                               POLA ANGKA 0                                ===
//=================================================================================
//=== BAGIAN ATAS ====
//BAGIAN ATAS 1
void pola0_atas1(int n){  
    int j;

    for (j = 0; j < n; j++)
    {
        printf(" ");
    }
    for (j = 0; j < n; j++)
    {
        printf("H");
    }
    for (j = 0; j < n; j++)
    {
        printf(" ");
    }
}
//BAGIAN ATAS 2
void pola0_atas2(int n){  
    
    int j;

    for (j = 0; j < n; j++)
    {
        printf("H");
    }
    for (j = 0; j < n; j++)
    {
        printf(" ");
    }
    for (j = 0; j < n; j++)
    {
        printf("H");
    }
}

//=== BAGIAN TENGAH ===
//BAGIAN TENGAH 
void pola0_tengah(int n){  
    
    int j;

    for (j = 0; j < n; j++)
    {
        printf("H");
    }
    for (j = 0; j < n; j++)
    {
        printf(" ");
    }
    for (j = 0; j < n; j++)
    {
        printf("H");
    }
}

//=== BAGIAN BAWAH ===
//BAGIAN BAWAH 1
void pola0_bawah1(int n){  
    
    int j;

    for (j = 0; j < n; j++)
    {
        printf("H");
    }
    for (j = 0; j < n; j++)
    {
        printf(" ");
    }
    for (j = 0; j < n; j++)
    {
        printf("H");
    }
}
//BAGIAN BAWAH 2
void pola0_bawah2(int n){  
    
    int j;

    for (j = 0; j < n; j++)
    {
        printf(" ");
    }
    for (j = 0; j < n; j++)
    {
        printf("H");
    }
    for (j = 0; j < n; j++)
    {
        printf(" ");
    }
}


//=================================================================================
//===                               POLA ANGKA 1                                ===
//=================================================================================
//=== BAGIAN ATAS ====
//BAGIAN ATAS 1
void pola1_atas1(int n){
    
    int j;

    for (j = 0; j < n*2; j++)
    {
        printf(" ");
    }
    for (j = 0; j < n; j++)
    {
        printf("H");
    }
}
//BAGIAN ATAS 2
void pola1_atas2(int n){
    
    int j;

    for (j = 0; j < n*2; j++)
    {
        printf(" ");
    }
    for (j = 0; j < n; j++)
    {
        printf("H");
    }
}
//=== BAGIAN TENGAH ===
//BAGIAN TENGAH
void pola1_tengah(int n){
    
    int j;

    for (j = 0; j < n*2; j++)
    {
        printf(" ");
    }
    for (j = 0; j < n; j++)
    {
        printf("H");
    }
}
//=== BAGIAN BAWAH ===
//BAGIAN BAWAH 1
void pola1_bawah1(int n){
    
    int j;

    for (j = 0; j < n*2; j++)
    {
        printf(" ");
    }
    for (j = 0; j < n; j++)
    {
        printf("H");
    }
}
//BAGIAN BAWAH 2
void pola1_bawah2(int n){
    
    int j;

    for (j = 0; j < n*2; j++)
    {
        printf(" ");
    }
    for (j = 0; j < n; j++)
    {
        printf("H");
    }
}

//=================================================================================
//===                               POLA ANGKA 2                                ===
//=================================================================================
//=== BAGIAN ATAS ====
//BAGIAN ATAS 1
void pola2_atas1(int n){
    
    int j;

    for (j = 0; j < n; j++)
    {
        printf(" ");
    }
    for (j = 0; j < n; j++)
    {
        printf("H");
    }
    for (j = 0; j < n; j++)
    {
        printf(" ");
    }
}
//BAGIAN ATAS 2
void pola2_atas2(int n){
    
    int j;

    for (j = 0; j < n*2; j++)
    {
        printf(" ");
    }
    for (j = 0; j < n; j++)
    {
        printf("H");
    }
}
//=== BAGIAN TENGAH ====
//BAGIAN TENGAH
void pola2_tengah(int n){
    
    int j;

    for (j = 0; j < n; j++)
    {
        printf(" ");
    }
    for (j = 0; j < n; j++)
    {
        printf("H");
    }
    for (j = 0; j < n; j++)
    {
        printf(" ");
    }
}
//=== BAGIAN BAWAH ====
//BAGIAN BAWAH 1
void pola2_bawah1(int n){
    
    int j;

    for (j = 0; j < n; j++)
    {
        printf("H");
    }
    for (j = 0; j < n*2; j++)
    {
        printf(" ");
    }
}
//BAGIAN BAWAH 2
void pola2_bawah2(int n){
    
    int j;

    for (j = 0; j < n; j++)
    {
        printf(" ");
    }
    for (j = 0; j < n; j++)
    {
        printf("H");
    }
    for (j = 0; j < n; j++)
    {
        printf(" ");
    }
}

//=================================================================================
//===                               POLA ANGKA 3                                ===
//=================================================================================
//=== BAGIAN ATAS ====
//BAGIAN ATAS 1
void pola3_atas1(int n){
    
    int j;

    for (j = 0; j < n; j++)
    {
        printf(" ");
    }
    for (j = 0; j < n; j++)
    {
        printf("H");
    }
    for (j = 0; j < n; j++)
    {
        printf(" ");
    }
}
//BAGIAN ATAS 2
void pola3_atas2(int n){
    
    int j;

    for (j = 0; j < n*2; j++)
    {
        printf(" ");
    }
    for (j = 0; j < n; j++)
    {
        printf("H");
    }
}
//=== BAGIAN TENGAH ====
//BAGIAN TENGAH
void pola3_tengah(int n){
    
    int j;

    for (j = 0; j < n; j++)
    {
        printf(" ");
    }
    for (j = 0; j < n; j++)
    {
        printf("H");
    }
    for (j = 0; j < n; j++)
    {
        printf(" ");
    }
}
//=== BAGIAN BAWAH ====
//BAGIAN BAWAH 1
void pola3_bawah1(int n){
    
    int j;

    for (j = 0; j < n*2; j++)
    {
        printf(" ");
    }
    for (j = 0; j < n; j++)
    {
        printf("H");
    }
}
//BAGIAN BAWAH 2
void pola3_bawah2(int n){
    
    int j;

    for (j = 0; j < n; j++)
    {
        printf(" ");
    }
    for (j = 0; j < n; j++)
    {
        printf("H");
    }
    for (j = 0; j < n; j++)
    {
        printf(" ");
    }
}

//=================================================================================
//===                               POLA ANGKA 4                                ===
//=================================================================================
//=== BAGIAN ATAS ====
//BAGIAN ATAS 1
void pola4_atas1(int n){
    
    int j;

    for (j = 0; j < n; j++)
    {
        printf("H");
    }
    for (j = 0; j < n; j++)
    {
        printf(" ");
    }
    for (j = 0; j < n; j++)
    {
        printf("H");
    }
}
//BAGIAN ATAS 2
void pola4_atas2(int n){
    
    int j;

    for (j = 0; j < n; j++)
    {
        printf("H");
    }
    for (j = 0; j < n; j++)
    {
        printf(" ");
    }
    for (j = 0; j < n; j++)
    {
        printf("H");
    }
}
//=== BAGIAN TENGAH ====
//BAGIAN TENGAH
void pola4_tengah(int n){
    
    int j;

    for (j = 0; j < n; j++)
    {
        printf(" ");
    }
    for (j = 0; j < n; j++)
    {
        printf("H");
    }
    for (j = 0; j < n; j++)
    {
        printf(" ");
    }
}
//=== BAGIAN BAWAH ====
//BAGIAN BAWAH 1
void pola4_bawah1(int n){
    
    int j;

    for (j = 0; j < n; j++)
    {
        printf(" ");
    }
    for (j = 0; j < n; j++)
    {
        printf(" ");
    }
    for (j = 0; j < n; j++)
    {
        printf("H");
    }
}
//BAGIAN BAWAH 2
void pola4_bawah2(int n){
    
    int j;

    for (j = 0; j < n; j++)
    {
            printf(" ");
    }
    for (j = 0; j < n; j++)
    {
        printf(" ");
    }
    for (j = 0; j < n; j++)
    {
        printf("H");
    }
}

//=================================================================================
//===                               POLA ANGKA 5                                ===
//=================================================================================
//=== BAGIAN ATAS ====
//BAGIAN ATAS 1
void pola5_atas1(int n){

    int j;

    for (j = 0; j < n; j++)
    {
        printf(" ");
    }
    for (j = 0; j < n; j++)
    {
        printf("H");
    }
    for (j = 0; j < n; j++)
    {
        printf(" ");
    }
}
//BAGIAN ATAS 2
void pola5_atas2(int n){

    int j;

    for (j = 0; j < n; j++)
    {
        printf("H");
    }
    for (j = 0; j < n*2; j++)
    {
        printf(" ");
    }
}
//=== BAGIAN TENGAH ===
//BAGIAN TENGAH
void pola5_tengah(int n){

    int j;

    for (j = 0; j < n; j++)
        {
            printf(" ");
        }
        for (j = 0; j < n; j++)
        {
            printf("H");
        }
        for (j = 0; j < n; j++)
        {
            printf(" ");
        }
}
//=== BAGIAN BAWAH ===
//BAGIAN BAWAH 1
void pola5_bawah1(int n){

    int j;

    for (j = 0; j < n*2; j++)
    {
            printf(" ");
    }
    for (j = 0; j < n; j++)
    {
        printf("H");
    }
}
//BAGIAN BAWAH 2
void pola5_bawah2(int n){

    int j;

    for (j = 0; j < n; j++)
    {
        printf(" ");
    }
    for (j = 0; j < n; j++)
    {
        printf("H");
    }
    for (j = 0; j < n; j++)
    {
        printf(" ");
    }
}

//=================================================================================
//===                               POLA ANGKA 6                                ===
//=================================================================================
//=== BAGIAN ATAS ====
//BAGIAN ATAS 1
void pola6_atas1(int n){

    int j;

    for (j = 0; j < n; j++)
    {
        printf(" ");
    }
    for (j = 0; j < n; j++)
    {
        printf("H");
    }
    for (j = 0; j < n; j++)
    {
        printf(" ");
    }
}
//BAGIAN ATAS 2
void pola6_atas2(int n){

    int j;

    for (j = 0; j < n; j++)
    {
        printf("H");
    }
    for (j = 0; j < n*2; j++)
    {
        printf(" ");
    }
}
//=== BAGIAN TENGAH ===
//BAGIAN TENGAH
void pola6_tengah(int n){

    int j;

    for (j = 0; j < n; j++)
    {
        printf(" ");
    }
    for (j = 0; j < n; j++)
    {
        printf("H");
    }
    for (j = 0; j < n; j++)
    {
        printf(" ");
    }
}
//=== BAGIAN BAWAH ===
//BAGIAN BAWAH 1
void pola6_bawah1(int n){

    int j;

    for (j = 0; j < n; j++)
    {
        printf("H");
    }
    for (j = 0; j < n; j++)
    {
        printf(" ");
    }
    for (j = 0; j < n; j++)
    {
        printf("H");
    }
}
//BAGIAN BAWAH 2
void pola6_bawah2(int n){

    int j;

    for (j = 0; j < n; j++)
    {
        printf(" ");
    }
    for (j = 0; j < n; j++)
    {
        printf("H");
    }
    for (j = 0; j < n; j++)
    {
        printf(" ");
    }
}

//=================================================================================
//===                               POLA ANGKA 7                                ===
//=================================================================================
//=== BAGIAN ATAS ====
//BAGIAN ATAS 1
void pola7_atas1(int n){

    int j;

    for (j = 0; j < n; j++)
    {
        printf("H");
    }
    for (j = 0; j < n; j++)
    {
        printf("H");
    }
    for (j = 0; j < n; j++)
    {
        printf(" ");
    }
}
//BAGIAN ATAS 2
void pola7_atas2(int n){

    int j;

    for (j = 0; j < n*2; j++)
    {
        printf(" ");
    }
    for (j = 0; j < n; j++)
    {
        printf("H");
    }
}
//=== BAGIAN TENGAH ===
//BAGIAN TENGAH
void pola7_tengah(int n){

    int j;

    for (j = 0; j < n*2; j++)
    {
        printf(" ");
    }
    for (j = 0; j < n; j++)
    {
        printf("H");
    }
}
//=== BAGIAN BAWAH ===
//BAGIAN BAWAH 1
void pola7_bawah1(int n){

    int j;

    for (j = 0; j < n*2; j++)
    {
        printf(" ");
    }
    for (j = 0; j < n; j++)
    {
        printf("H");
    }
}
//BAGIAN BAWAH 2
void pola7_bawah2(int n){

    int j;

    for (j = 0; j < n*2; j++)
    {
        printf(" ");
    }
    for (j = 0; j < n; j++)
    {
        printf("H");
    }
}

//=================================================================================
//===                               POLA ANGKA 8                                ===
//=================================================================================
//=== BAGIAN ATAS ====
//BAGIAN ATAS 1
void pola8_atas1(int n){

    int j;

    for (j = 0; j < n; j++)
    {
        printf(" ");
    }
    for (j = 0; j < n; j++)
    {
        printf("H");
    }
    for (j = 0; j < n; j++)
    {
        printf(" ");
    }
}
//BAGIAN ATAS 2
void pola8_atas2(int n){

    int j;

    for (j = 0; j < n; j++)
    {
        printf("H");
    }
    for (j = 0; j < n; j++)
    {
        printf(" ");
    }
    for (j = 0; j < n; j++)
    {
        printf("H");
    }
}
//=== BAGIAN TENGAH ===
//BAGIAN TENGAH
void pola8_tengah(int n){

    int j;

    for (j = 0; j < n; j++)
    {
        printf(" ");
    }
    for (j = 0; j < n; j++)
    {
        printf("H");
    }
    for (j = 0; j < n; j++)
    {
        printf(" ");
    }
}
//=== BAGIAN BAWAH ===
//BAGIAN BAWAH 1
void pola8_bawah1(int n){

    int j;

    for (j = 0; j < n; j++)
    {
        printf("H");
    }
    for (j = 0; j < n; j++)
    {
        printf(" ");
    }
    for (j = 0; j < n; j++)
    {
        printf("H");
    }
}
//BAGIAN BAWAH 2
void pola8_bawah2(int n){

    int j;

    for (j = 0; j < n; j++)
    {
        printf(" ");
    }
    for (j = 0; j < n; j++)
    {
        printf("H");
    }
    for (j = 0; j < n; j++)
    {
        printf(" ");
    }
}

//=================================================================================
//===                               POLA ANGKA 9                                ===
//=================================================================================
//=== BAGIAN ATAS ====
//BAGIAN ATAS 1
void pola9_atas1(int n){

    int j;

    for (j = 0; j < n; j++)
    {
        printf(" ");
    }
    for (j = 0; j < n; j++)
    {
        printf("H");
    }
    for (j = 0; j < n; j++)
    {
        printf(" ");
    }
}
//BAGIAN ATAS 2
void pola9_atas2(int n){

    int j;

    for (j = 0; j < n; j++)
    {
        printf("H");
    }
    for (j = 0; j < n; j++)
    {
        printf(" ");
    }
    for (j = 0; j < n; j++)
    {
        printf("H");
    }
}
//=== BAGIAN TENGAH ===
//BAGIAN TENGAH
void pola9_tengah(int n){

    int j;

    for (j = 0; j < n; j++)
    {
        printf(" ");
    }
    for (j = 0; j < n; j++)
    {
        printf("H");
    }
    for (j = 0; j < n; j++)
    {
        printf(" ");
    }
}
//=== BAGIAN BAWAH ===
//BAGIAN BAWAH 1
void pola9_bawah1(int n){

    int j;

    for (j = 0; j < n*2; j++)
    {
        printf(" ");
    }
    for (j = 0; j < n; j++)
    {
        printf("H");
    }
}
//BAGIAN BAWAH 2
void pola9_bawah2(int n){

    int j;

    for (j = 0; j < n; j++)
    {
        printf(" ");
        }
    for (j = 0; j < n; j++)
    {
        printf("H");
    }
    for (j = 0; j < n; j++)
    {
        printf(" ");
    }
}

//=================================================================================
//===                       POLA UNTUK PANJANG STRING                           ===
//=================================================================================
//=== BAGIAN ATAS ====
//BAGIAN ATAS 1
void lenstring_atas1(int n,int m,int panjang[]){
    
    int j;

    for (j = 0; j < m; j++)
    {
        //JIKA PANJANG STRING ADALAH 0
        if (panjang[j] == 0)
        {
            pemisah(n);
            pola0_atas1(n);
        }
        //JIKA PANJANG STRING ADALAH 1
        if (panjang[j] == 1)
        {
            pemisah(n);
            pola1_atas1(n);
        }
        //JIKA PANJANG STRING ADALAH 2
        if (panjang[j] == 2)
        {
            pemisah(n);
            pola2_atas1(n);
        }
        //JIKA PANJANG STRING ADALAH 3
        if (panjang[j] == 3)
        {
            pemisah(n);
            pola3_atas1(n);
        }
        //JIKA PANJANG STRING ADALAH 4
        if (panjang[j] == 4)
        {
            pemisah(n);
            pola4_atas1(n);
        }
        //JIKA PANJANG STRING ADALAH 5
        if (panjang[j] == 5)
        {
            pemisah(n);
            pola5_atas1(n);
        }
        //JIKA PANJANG STRING ADALAH 6
        if (panjang[j] == 6)
        {
            pemisah(n);
            pola6_atas1(n);
        }
        //JIKA PANJANG STRING ADALAH 7
        if (panjang[j] == 7)
        {
            pemisah(n);
            pola7_atas1(n);
        }
        //JIKA PANJANG STRING ADALAH 8
        if (panjang[j] == 8)
        {
            pemisah(n);
            pola8_atas1(n);
        }
        //JIKA PANJANG STRING ADALAH 9
        if (panjang[j] == 9)
        {
            pemisah(n);
            pola9_atas1(n);
        }
    }
}
//BAGIAN ATAS 2
void lenstring_atas2(int n,int m,int panjang[]){
    
    int j;

    for (j = 0; j < m; j++)
    {
        //JIKA PANJANG STRING ADALAH 0
        if (panjang[j] == 0)
        {
            pemisah(n);
            pola0_atas2(n);
        }
        //JIKA PANJANG STRING ADALAH 1
        if (panjang[j] == 1)
        {
            pemisah(n);
            pola1_atas2(n);
        }
        //JIKA PANJANG STRING ADALAH 2
        if (panjang[j] == 2)
        {
            pemisah(n);
            pola2_atas2(n);
        }
        //JIKA PANJANG STRING ADALAH 3
        if (panjang[j] == 3)
        {
            pemisah(n);
            pola3_atas2(n);
        }
        //JIKA PANJANG STRING ADALAH 4
        if (panjang[j] == 4)
        {
            pemisah(n);
            pola4_atas2(n);
        }
        //JIKA PANJANG STRING ADALAH 5
        if (panjang[j] == 5)
        {
            pemisah(n);
            pola5_atas2(n);
        }
        //JIKA PANJANG STRING ADALAH 6
        if (panjang[j] == 6)
        {
            pemisah(n);
            pola6_atas2(n);
        }
        //JIKA PANJANG STRING ADALAH 7
        if (panjang[j] == 7)
        {
            pemisah(n);
            pola7_atas2(n);
        }
        //JIKA PANJANG STRING ADALAH 8
        if (panjang[j] == 8)
        {
            pemisah(n);
            pola8_atas2(n);
        }
        //JIKA PANJANG STRING ADALAH 9
        if (panjang[j] == 9)
        {
            pemisah(n);
            pola9_atas2(n);
        }
    }
}
//=== BAGIAN TENGAH ====
//BAGIAN TENGAH
void lenstring_tengah(int n,int m,int panjang[]){
    
    int j;

    for (j = 0; j < m; j++)
    {
        //JIKA PANJANG STRING ADALAH 0
        if (panjang[j] == 0)
        {
            pemisah(n);
            pola0_tengah(n);
        }
        //JIKA PANJANG STRING ADALAH 1
        if (panjang[j] == 1)
        {
            pemisah(n);
            pola1_tengah(n);
        }
        //JIKA PANJANG STRING ADALAH 2
        if (panjang[j] == 2)
        {
            pemisah(n);
            pola2_tengah(n);
        }
        //JIKA PANJANG STRING ADALAH 3
        if (panjang[j] == 3)
        {
            pemisah(n);
            pola3_tengah(n);
        }
        //JIKA PANJANG STRING ADALAH 4
        if (panjang[j] == 4)
        {
            pemisah(n);
            pola4_tengah(n);
        }
        //JIKA PANJANG STRING ADALAH 5
        if (panjang[j] == 5)
        {
            pemisah(n);
            pola5_tengah(n);
        }
        //JIKA PANJANG STRING ADALAH 6
        if (panjang[j] == 6)
        {
            pemisah(n);
            pola6_tengah(n);
        }
        //JIKA PANJANG STRING ADALAH 7
        if (panjang[j] == 7)
        {
            pemisah(n);
            pola7_tengah(n);
        }
        //JIKA PANJANG STRING ADALAH 8
        if (panjang[j] == 8)
        {
            pemisah(n);
            pola8_tengah(n);
        }
        //JIKA PANJANG STRING ADALAH 9
        if (panjang[j] == 9)
        {
            pemisah(n);
            pola9_tengah(n);
        }
    }
}
//=== BAGIAN BAWAH ===
//BAGIAN BAWAH 1
void lenstring_bawah1(int n,int m,int panjang[]){
    
    int j;

    for (j = 0; j < m; j++)
    {
        //JIKA PANJANG STRING ADALAH 0
        if (panjang[j] == 0)
        {
            pemisah(n);
            pola0_bawah1(n);
        }
        //JIKA PANJANG STRING ADALAH 1
        if (panjang[j] == 1)
        {
            pemisah(n);
            pola1_bawah1(n);
        }
        //JIKA PANJANG STRING ADALAH 2
        if (panjang[j] == 2)
        {
            pemisah(n);
            pola2_bawah1(n);
        }
        //JIKA PANJANG STRING ADALAH 3
        if (panjang[j] == 3)
        {
            pemisah(n);
            pola3_bawah1(n);
        }
        //JIKA PANJANG STRING ADALAH 4
        if (panjang[j] == 4)
        {
            pemisah(n);
            pola4_bawah1(n);
        }
        //JIKA PANJANG STRING ADALAH 5
        if (panjang[j] == 5)
        {
            pemisah(n);
            pola5_bawah1(n);
        }
        //JIKA PANJANG STRING ADALAH 6
        if (panjang[j] == 6)
        {
            pemisah(n);
            pola6_bawah1(n);
        }
        //JIKA PANJANG STRING ADALAH 7
        if (panjang[j] == 7)
        {
            pemisah(n);
            pola7_bawah1(n);
        }
        //JIKA PANJANG STRING ADALAH 8
        if (panjang[j] == 8)
        {
            pemisah(n);
            pola8_bawah1(n);
        }
        //JIKA PANJANG STRING ADALAH 9
        if (panjang[j] == 9)
        {
            pemisah(n);
            pola9_bawah1(n);
        }
    }
}
//BAGIAN BAWAH 2
void lenstring_bawah2(int n,int m,int panjang[]){
    
    int j;

    for (j = 0; j < m; j++)
    {
        //JIKA PANJANG STRING ADALAH 0
        if (panjang[j] == 0)
        {
            pemisah(n);
            pola0_bawah2(n);
        }
        //JIKA PANJANG STRING ADALAH 1
        if (panjang[j] == 1)
        {
            pemisah(n);
            pola1_bawah2(n);
        }
        //JIKA PANJANG STRING ADALAH 2
        if (panjang[j] == 2)
        {
            pemisah(n);
            pola2_bawah2(n);
        }
        //JIKA PANJANG STRING ADALAH 3
        if (panjang[j] == 3)
        {
            pemisah(n);
            pola3_bawah2(n);
        }
        //JIKA PANJANG STRING ADALAH 4
        if (panjang[j] == 4)
        {
            pemisah(n);
            pola4_bawah2(n);
        }
        //JIKA PANJANG STRING ADALAH 5
        if (panjang[j] == 5)
        {
            pemisah(n);
            pola5_bawah2(n);
        }
        //JIKA PANJANG STRING ADALAH 6
        if (panjang[j] == 6)
        {
            pemisah(n);
            pola6_bawah2(n);
        }
        //JIKA PANJANG STRING ADALAH 7
        if (panjang[j] == 7)
        {
            pemisah(n);
            pola7_bawah2(n);
        }
        //JIKA PANJANG STRING ADALAH 8
        if (panjang[j] == 8)
        {
            pemisah(n);
            pola8_bawah2(n);
        }
        //JIKA PANJANG STRING ADALAH 9
        if (panjang[j] == 9)
        {
            pemisah(n);
            pola9_bawah2(n);
        }
    }
}