/*
    ============================================================
    | Saya Ghifari Octaverin 2000952 mengerjakan Evaluasi      |
    | dalam mata kuliah Algoritma dan Pemrograman II           |
    | untuk keberkahanNya maka saya tidak melakukan kecurangan |
    | seperti yang telah dispesifikasikan. Aamiin              |
    ============================================================
*/

    #include "header.h"

    int main(){
    int i, j, idxTrain=0, idxSelect=0, idxPita=0;
    char pita[50][200];
    data train[100];
    data select[100];

    do
    {
        scanf(" %199[^\n]s", pita[idxPita]);
        if (strcmp(pita[idxPita], "TAMPILKAN;") != 0)
        {
            idxPita++;
        }
    } while (strcmp(pita[idxPita], "TAMPILKAN;") != 0);
    
    for ( i = 0; i < idxPita; i++)
    {
        insert(pita[i]);
        if (strcmp(query[0], "INSERT") == 0)
        {
            strcpy(train[idxTrain].id, query[1]);
            strcpy(train[idxTrain].name, query[2]);
            strcpy(train[idxTrain].class, query[3]);
            idxTrain++;
        }else if (strcmp(query[0], "CARI") == 0)
        {
            if (strcmp(query[1], "id") == 0)
            {
                for ( j = 0; j < idxTrain; j++)
                {
                if (strcmp(train[j].id, query[2]) == 0)
                {
                    strcpy(select[idxSelect].id, train[j].id);
                    strcpy(select[idxSelect].name, train[j].name);
                    strcpy(select[idxSelect].class, train[j].class);
                    idxSelect++;
                }
                }
            }else if (strcmp(query[1], "nama") == 0)
            {
                for ( j = 0; j < idxTrain; j++)
                {
                if (strcmp(train[j].name, query[2]) == 0)
                {
                    strcpy(select[idxSelect].id, train[j].id);
                    strcpy(select[idxSelect].name, train[j].name);
                    strcpy(select[idxSelect].class, train[j].class);
                    idxSelect++;
                }
                }
            }else if (strcmp(query[1], "kelas") == 0)
            {
                for ( j = 0; j < idxTrain; j++)
                {
                if (strcmp(train[j].class, query[2]) == 0)
                {
                    strcpy(select[idxSelect].id, train[j].id);
                    strcpy(select[idxSelect].name, train[j].name);
                    strcpy(select[idxSelect].class, train[j].class);
                    idxSelect++;
                }
                }
            }
        }
        reset();
    }

    int maxID=0, maxName=0, maxClass=0;
    sorting(select, 0, idxSelect-1);
    for ( i = 0; i < idxSelect; i++)
    {
        if (strlen(select[i].id) > maxID)
        {
            maxID = strlen(select[i].id);
            if (strlen("ID Kereta") > maxID)
            {
                maxID = strlen("ID Kereta");
            }
        }
        if (strlen(select[i].name) > maxName)
        {
            maxName = strlen(select[i].name);
            if (strlen("Nama Kereta") > maxName)
            {
                maxName = strlen("Nama Kereta");
            }
        }
        if (strlen(select[i].class) > maxClass)
        {
            maxClass = strlen(select[i].class);
            if (strlen("Kelas") > maxClass)
            {
                maxClass = strlen("Kelas");
            }
        }
    }
    for ( i = 0; i < maxID+maxName+maxClass+10; i++)
    {
        printf("=");
    }
    printf("\n| ID Kereta");
    for ( i = 0; i < maxID-strlen("ID Kereta"); i++)
    {
        printf(" ");
    }
    printf(" | Nama Kereta");
    for ( i = 0; i < maxName-strlen("Nama Kereta"); i++)
    {
        printf(" ");
    }
    printf(" | Kelas");
    for ( i = 0; i < maxClass-strlen("Kelas"); i++)
    {
        printf(" ");
    }
    printf(" |\n");
    for ( i = 0; i < maxID+maxName+maxClass+10; i++)
    {
        printf("=");
    }
    printf("\n");
    for ( i = 0; i < idxSelect; i++)
    {
        printf("| %s", select[i].id);
        for ( j = 0; j < maxID-strlen(select[i].id); j++)
        {
            printf(" ");
        }
        printf(" | %s", select[i].name);
        for ( j = 0; j < maxName-strlen(select[i].name); j++)
        {
            printf(" ");
        }
        printf(" | %s", select[i].class);
        for ( j = 0; j < maxClass-strlen(select[i].class); j++)
        {
            printf(" ");
        }
        printf(" |\n");
    }
    for ( i = 0; i < maxID+maxName+maxClass+10; i++)
    {
        printf("=");
    }
    printf("\n%d data dalam tabel.\n", idxSelect);

    return 0;
    }