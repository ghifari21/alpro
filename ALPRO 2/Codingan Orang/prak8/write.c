#include <stdio.h>
#include <string.h>

typedef struct
{
    char nim[20];
    char nama[50];
    char jurusan[20];
}dataMahasiswa;


int main()
{
    int i, n = 0;

    dataMahasiswa mhs[50];

    FILE *fmahasiswa;
    fmahasiswa = fopen("data_mahasiswa2.dat", "w");

    scanf("%s %s %s", mhs[n].nim, mhs[n].nama, mhs[n].jurusan);

    while(strcmp(mhs[n].nim, "####") != 0){
        fprintf(fmahasiswa, "%s %s %s\n", mhs[n].nim, mhs[n].nama, mhs[n].jurusan);
        n++;
        scanf("%s %s %s", mhs[n].nim, mhs[n].nama, mhs[n].jurusan);
    }

    fprintf(fmahasiswa, "#### #### ####\n");

    fclose(fmahasiswa);
    
    return 0;
}