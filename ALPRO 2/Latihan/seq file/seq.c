#include <stdio.h>
#include <string.h>

typedef struct
{
    char nama[100];
    char kodeJurusan[100];
    char kodeFakultas[100];
}dataMahasiswa;

int main(){
    int i, j, k, count1=0, count2=0, count3=0;
    char namajurusan[100][100], kodejurusan[100][100];
    char namafakultas[100][100], kodefakultas[100][100];
    int idxjurusan[100], idxfakultas[100];

    dataMahasiswa data[100];

    FILE *fmahasiswa;
    FILE *fjurusan;
    FILE *ffakultas;
    fmahasiswa=fopen("mahasiswa.dat", "r");
    fjurusan=fopen("jurusan.dat", "r");
    ffakultas=fopen("fakultas.dat", "r");
    fscanf(fmahasiswa, "%s %s %s", data[count1].nama, data[count1].kodeJurusan, data[count1].kodeFakultas);
    fscanf(fjurusan, "%s %s", kodejurusan[count2], namajurusan[count2]);
    fscanf(ffakultas, "%s %s", kodefakultas[count3], namafakultas[count3]);

    while (strcmp(data[count1].nama, "####") != 0)
    {
        count1++;
        fscanf(fmahasiswa, "%s %s %s", data[count1].nama, data[count1].kodeJurusan, data[count1].kodeFakultas);
    }
    while (strcmp(kodejurusan[count2], "####") != 0)
    {
        count2++;
        fscanf(fjurusan, "%s %s", kodejurusan[count2], namajurusan[count2]);
    }
    while (strcmp(kodefakultas[count3], "####") != 0)
    {
        count3++;
        fscanf(ffakultas, "%s %s", kodefakultas[count3], namafakultas[count3]);
    }
    
    for ( i = 0; i < count1; i++)
    {
        for ( j = 0; j < count2; j++)
        {
            if (strcmp(data[i].kodeJurusan, kodejurusan[j]) == 0)
            {
                idxjurusan[i] = j;
                break;
            }
        }
        for ( j = 0; j < count3; j++)
        {
            if (strcmp(data[i].kodeFakultas, kodefakultas[j]) == 0)
            {
                idxfakultas[i] = j;
                break;
            }
        }
    }
    
    for ( i = 0; i < count1; i++)
    {
        printf("%s %s %s\n", data[i].nama, namajurusan[idxjurusan[i]], namafakultas[idxfakultas[i]]);
    }
    
    fclose(fmahasiswa);
    fclose(fjurusan);
    fclose(ffakultas);

    return 0;
}