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
    fmahasiswa = fopen("data_mahasiswa.dat", "r");
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

        scanf("%s %s %s", mhs[n].nim, mhs[n].nama, mhs[n].jurusan);

        while(strcmp(mhs[n].nim, "####") != 0){
            n++;
            scanf("%s %s %s", mhs[n].nim, mhs[n].nama, mhs[n].jurusan);
        }
    }

    fclose(fmahasiswa);

    fmahasiswa = fopen("data_mahasiswa.dat", "w");
    for(i = 0; i < n; i++){        
        fprintf(fmahasiswa, "%s %s %s\n", mhs[i].nim, mhs[i].nama, mhs[i].jurusan);
    }

    fprintf(fmahasiswa, "#### #### ####\n");


    fclose(fmahasiswa);
    
    return 0;
}