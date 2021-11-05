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
    fmahasiswa = fopen("dataMahasiswa.dat", "r");
    fscanf(fmahasiswa, "%s %s %s", mhs[n].nim, mhs[n].nama, mhs[n].jurusan);

    if(strcmp(mhs[n].nim, "####") == 0){
        printf("File Kosong!\n");
    }
    else{
        while(strcmp(mhs[n].nim, "####") != 0)
        {
            n++;
            fscanf(fmahasiswa, "%s %s %s", mhs[n].nim, mhs[n].nama, mhs[n].jurusan);
        }

        printf("Data Mahasiswa :\n", n);
        for(i = 0; i < n; i++){
            printf("%s %s %s\n", mhs[i].nim, mhs[i].nama, mhs[i].jurusan);
        }
    }

    fclose(fmahasiswa);
    
    return 0;
}