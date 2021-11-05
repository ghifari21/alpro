/*Saya Ghifari Octaverin 2000952 mengerjakan Evaluasi dalam
mata kuliah Algoritma dan Pemrograman
untuk keberkahanNya maka saya tidak melakukan kecurangan
seperti yang telah dispesifikasikan. Aamiin*/
#include <stdio.h>
int main(){
    int n;//panjang array
    scanf("%d", &n);//masukan untuk panjang array
    unsigned char kata[n];
    int i, kolom, baris, a;
    int total=0;

    //mengisi array
    for ( i = 0; i < n; i++)
    {
        scanf(" %c", &kata[i]);
        total=total+kata[i];
    }
    //membuat pola
    //=============POLA BAGIAN ATAS==================
    for ( baris = 0; baris < n; baris++)
    {
        //=============POLA BAGIAN ATAS PERTAMA==================
        for ( kolom = n-baris-1; kolom > 0; kolom--)
        {
            printf(" ");
        }
        for ( kolom = 0; kolom < baris; kolom++)
        {
            printf("%c", kata[kolom]);
        }
        //============POLA BAGIAN ATAS KEDUA=============
        for ( kolom = 0; kolom < baris+1; kolom++)
        {
            printf("%c", kata[kolom]);
        }
        //============POLA BAGIAN ATAS KETIGA==============
        for ( kolom = n-baris-1; kolom > 0; kolom--)
        {
            printf("%c", kata[baris]);
        }
        //=============POLA BAGIAN ATAS KEEMPAT============
        for ( kolom = n-baris-1; kolom > 1; kolom--)
        {
            printf("%c", kata[baris]);
        }
        //============POLA BAGIAN ATAS KELIMA==============
        for ( kolom = baris; kolom >= 0; kolom--)
        {
            if (kolom != (n-1))
            {
                printf("%c", kata[kolom]);
            }
        }
        //============POLA BAGIAN ATAS KEENAM==============
        for ( kolom = n-baris; kolom > 1; kolom--)
        {
            printf("%c", kata[baris]);
        }
        
        for ( kolom = 0; kolom <= 1; kolom++)
        {
            for ( a = baris-1; a >= 0; a--)
            {
                printf("%c", kata[a]);
            }
            
        }
        printf("\n");
    }
    //==========POLA BAGIAN BAWAH===============
    for ( baris = 0; baris < n-1; baris++)
    {
        //===============POLA BAWAH PERTAMA==================
        for ( kolom = 0; kolom < baris+1; kolom++)
        {
            printf(" ");
        }
        for ( kolom = n-baris-1; kolom > 1; kolom--)
        {
            printf("%c", kata[baris]);
        }
        //============POLA BAWAH KEDUA================
        for ( kolom = baris; kolom > 0; kolom++)
        {
            printf("%c", kata[baris]);
        }
        
        printf("\n");
    }
    
    
    
    
    //membuat kalimat akhir
    if ((total % 2) == 0)
    {
        printf("halo loki.\n");
    }else
    {
        printf("good bye my friend.\n");
    }

    return 0;
}