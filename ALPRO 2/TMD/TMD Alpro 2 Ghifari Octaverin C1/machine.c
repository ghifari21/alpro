/*
    =====================================================================================
    |   Saya Ghifari Octaverin [2000952] mengerjakan evaluasi Tugas Masa Depan          |
    |   dalam mata kuliah Algoritma dan Pemrograman II untuk keberkahanNya maka         |
    |   saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.    |
    =====================================================================================
*/

#include "header.h"

void insertQuery(char pita[]){              //prosedur insert query
    resetQuery();                           //memanggil prosedur reset query
    scanf(" %499[^\n]s", pita);             //input pita

    //start mesin kata
    idxQuery=0;
    startKata(pita);    //memulai mesin kata
    strcpy(query[idxQuery], getCKata());        //memasukan currentKata
    idxQuery++;         //idxQuery bertambah 1
    while (EOP(pita) == 0)  //looping selama EOP bernilai 0
    {
        incKata(pita);  //memajukan kata
        strcpy(query[idxQuery], getCKata());    //memasukan currentKata
        idxQuery++;     //idxQuery bertambah 1
    }
}

void resetQuery(){                          //prosedur reset query
    int i;
    for ( i = 0; i < idxQuery; i++)
    {
        strcpy(query[i], "\0");             //setiap query menjadi null
    }
}

void queryBridge(){                         //prosedur jembatan query
    if (strcmp(query[0], "INSERT") == 0 || strcmp(query[0], "insert") == 0)         //jika query adalah insert
    {
        insertData();       //prosedur insert
    }else if (strcmp(query[0], "SELECT") == 0 || strcmp(query[0], "select") == 0)   //jika select
    {
        selectData();       //prosedur select
    }else if (strcmp(query[0], "DELETE") == 0 || strcmp(query[0], "delete") == 0)   //jika delete
    {
        deleteData();       //prosedur delete
    }else if (strcmp(query[0], "UPDATE") == 0 || strcmp(query[0], "update") == 0)   //jika update
    {
        updateData();       //prosedur update
    }else                                                                           //jika query bukanlah query yang sudah ditentukan
    {
        errorMessage(1);    //pesan error
    }
}

void loadData(){                            //prosedur load data
    idxProduct=0, idxBrand=0;
    fdata = fopen("fproduct.dat", "r");     //membuka file fproduct.dat dengan mode read
    fscanf(fdata, "%s %s %s %s", tProduct[idxProduct].pk, tProduct[idxProduct].value1, tProduct[idxProduct].value2, tProduct[idxProduct].value3);
    while (strcmp(tProduct[idxProduct].pk, "#####") != 0)
    {
        idxProduct++;
        fscanf(fdata, "%s %s %s %s", tProduct[idxProduct].pk, tProduct[idxProduct].value1, tProduct[idxProduct].value2, tProduct[idxProduct].value3);
    }
    fclose(fdata);  //menutup file

    fdata = fopen("fbrand.dat", "r");       //membuka file fbrand.dat dengan mode read
    fscanf(fdata, "%s %s %s %s", tBrand[idxBrand].pk, tBrand[idxBrand].value1, tBrand[idxBrand].value2, tBrand[idxBrand].value3);
    while (strcmp(tBrand[idxBrand].pk, "#####") != 0)
    {
        idxBrand++;
        fscanf(fdata, "%s %s %s %s", tBrand[idxBrand].pk, tBrand[idxBrand].value1, tBrand[idxBrand].value2, tBrand[idxBrand].value3);
    }
    fclose(fdata);  //menutup file
}

void saveData(){
    int i;

    quickSort(tProduct, 0, idxProduct-1);   //menjalankan quick sorting untuk tabel product
    quickSort(tBrand, 0, idxBrand-1);       //menjalankan quick sorting untuk tabel brand

    fdata = fopen("fproduct.dat", "w");     //membuka file fproduct.dat dengan mode write
    for ( i = 0; i < idxProduct; i++)
    {
        fprintf(fdata, "%s %s %s %s\n", tProduct[i].pk, tProduct[i].value1, tProduct[i].value2, tProduct[i].value3);
    }
    fprintf(fdata, "##### ##### ##### #####\n");    //end of file
    fclose(fdata);  //menutup file

    fdata = fopen("fbrand.dat", "w");       //membuka file fbrand.dat dengan mode write
    for ( i = 0; i < idxBrand; i++)
    {
        fprintf(fdata, "%s %s %s %s\n", tBrand[i].pk, tBrand[i].value1, tBrand[i].value2, tBrand[i].value3);
    }
    fprintf(fdata, "##### ##### ##### #####\n");    //end of file
    fclose(fdata);  //menutup file
}

int seqSearch(universalStruct arr[], int n, char search[]){     //fungsi sequential search
    int i=0, found=0;

    while (i < n && found == 0)
    {
        if (strcmp(arr[i].pk, search) == 0) //jika primary key ketemu
        {
            found = 1;  //found menjadi 1
        }else   //jika belum ketemu
        {
            i++;    //i bertambah 1
        }
    }
    if (found == 1) //jika primary key ketemu
    {
        return i;   //akan mereturn nilai i (indexnya)
    }else           //jika tidak ketemu
    {
        return -1;  //mereturn nilai -1
    }
}

void quickSort(universalStruct arr[], int left, int right){     //prosedur quick sorting
    int i, j;
    char temp[100];
    i = left;
    j = right;

    do
    {
        while (strcmp(arr[i].pk, arr[right].pk) < 0 && i <= j)
        {
            i++;
        }
        while (strcmp(arr[j].pk, arr[left].pk) > 0 && i <= j)
        {
            j--;
        }
        if (i < j)
        {
            //swap
            strcpy(temp, arr[i].pk);
            strcpy(arr[i].pk, arr[j].pk);
            strcpy(arr[j].pk, temp);
            //swap
            strcpy(temp, arr[i].value1);
            strcpy(arr[i].value1, arr[j].value1);
            strcpy(arr[j].value1, temp);
            //swap
            strcpy(temp, arr[i].value2);
            strcpy(arr[i].value2, arr[j].value2);
            strcpy(arr[j].value2, temp);
            //swap
            strcpy(temp, arr[i].value3);
            strcpy(arr[i].value3, arr[j].value3);
            strcpy(arr[j].value3, temp);

            i++;
            j--;
        }
    } while (i < j);
    
    if (left < j)
    {
        quickSort(arr, left, j);    //rekursif
    }
    if (i < right)
    {
        quickSort(arr, i, right);   //rekursif
    }
}

void errorMessage(int error){       //prosedur pesan error
    switch (error)
    {
    case 1: //jika error bernilai 1
        printf("Error [001]\nError Message : '%s' not recognized.\n\n", query[0]);
        break;
    case 2: //jika error bernilai 2
        if (strcmp(query[1], "UPDATE") == 0 || strcmp(query[1], "update") == 0) //jika setelah query insert ada query update
        {
            printf("Error [002]\nError Message : '%s' table does not exist.\n\n", query[2]);
        }else   //jika tidak
        {
            printf("Error [002]\nError Message : '%s' table does not exist.\n\n", query[1]);
        }
        break;
    case 3: //jika error bernilai 3
        printf("Error [003]\nError Message : Query doesn't fit the table.\n\n");
        break;
    case 4: //jika error bernilai 4
        printf("Error [004]\nError Message : Cannot found the primary key.\n\n");
        break;
    case 5: //jika error bernilai 5
        printf("Error [005]\nError Message : Cannot join table, please check your query.\n\n");
    default:
        break;
    }
}

void countMaxLength(){  //prosedur menghitung panjang string maksimal setiap kolom pada setiap tabel
    int i;
    
    maxPKBrand=0, maxValue1Brand=0, maxValue2Brand=0, maxValue3Brand=0;
    for ( i = 0; i < idxBrand; i++)     //looping tabel brand
    {
        //mencari panjang max pada kolom kode brand
        if (strlen(tBrand[i].pk) > maxPKBrand)
        {
            maxPKBrand = strlen(tBrand[i].pk);
            if (strlen("Kode Brand") > maxPKBrand)
            {
                maxPKBrand = strlen("Kode Brand");
            }
        }
        //mencari panjang max pada kolom nama brand
        if (strlen(tBrand[i].value1) > maxValue1Brand)
        {
            maxValue1Brand = strlen(tBrand[i].value1);
            if (strlen("Nama Brand") > maxValue1Brand)
            {
                maxValue1Brand = strlen("Nama Brand");
            }
        }
        //mencari panjang max pada kolom nama distributor
        if (strlen(tBrand[i].value2) > maxValue2Brand)
        {
            maxValue2Brand = strlen(tBrand[i].value2);
            if (strlen("Nama Distributor") > maxValue2Brand)
            {
                maxValue2Brand = strlen("Nama Distributor");
            }
        }
        //mencari panjang max pada kolom no telepon
        if (strlen(tBrand[i].value3) > maxValue3Brand)
        {
            maxValue3Brand = strlen(tBrand[i].value3);
            if (strlen("No Telepon") > maxValue3Brand)
            {
                maxValue3Brand = strlen("No Telepon");
            }
        }
    }

    maxPKProduct=0, maxValue1Product=0, maxValue2Product=0, maxValue3Product=0;
    for ( i = 0; i < idxProduct; i++)   //looping tabel product
    {
        //mencari panjang max pada kolom kode produk
        if (strlen(tProduct[i].pk) > maxPKProduct)
        {
            maxPKProduct = strlen(tProduct[i].pk);
            if (strlen("Kode Produk") > maxPKProduct)
            {
                maxPKProduct = strlen("Kode Produk");
            }
        }
        //mencari panjang max pada kolom nama produk
        if (strlen(tProduct[i].value1) > maxValue1Product)
        {
            maxValue1Product = strlen(tProduct[i].value1);
            if (strlen("Nama Produk") > maxValue1Product)
            {
                maxValue1Product = strlen("Nama Produk");
            }
        }
        //mencari panjang max pada kolom stok produk
        if (strlen(tProduct[i].value2) > maxValue2Product)
        {
            maxValue2Product = strlen(tProduct[i].value2);
            if (strlen("Stok Produk") > maxValue2Product)
            {
                maxValue2Product = strlen("Stok Produk");
            }
        }
        //mencari panjang max pada kolom kode brand
        if (strlen(tProduct[i].value3) > maxValue3Product)
        {
            maxValue3Product = strlen(tProduct[i].value3);
            if (strlen("Kode Brand") > maxValue3Product)
            {
                maxValue3Product = strlen("Kode Brand");
            }
        }   
    }
}

void insertData(){      //prosedur insert data
    int index, i;
    loadData();         //menjalankan prosedur load data
    if (strcmp(query[1], "UPDATE") == 0 || strcmp(query[1], "update") == 0) //jika query setelah insert adalah update
    {
        if (strcmp(query[2], "tproduct") == 0 || strcmp(query[2], "tProduct") == 0 || strcmp(query[2], "TPRODUCT") == 0) //jika input tabel tproduct
        {
            index = seqSearch(tProduct, idxProduct, query[3]);  //mencari index primary key yang di input di dalam tabel
            if (index == -1)    //jika primary key tidak ketemu
            {
                errorMessage(4);    //pesan error
            }else               //jika ketemu
            {
                printf("\n%s command has executed successfully!\n", query[0]);
                //mengupdate kolom nama produk, stok produk, dan kode brand sesuai index primary key
                strcpy(tProduct[index].value1, query[4]);
                strcpy(tProduct[index].value2, query[5]);
                strcpy(tProduct[index].value3, query[6]);
            }
        }else if (strcmp(query[2], "tbrand") == 0 || strcmp(query[2], "tBrand") == 0 || strcmp(query[2], "TBRAND") == 0) //jika input tabel tbrand
        {
            index = seqSearch(tBrand, idxBrand, query[3]);  //mencari index primary key yang di input di dalam tabel
            if (index == -1)    //jika primary key tidak ketemu
            {
                errorMessage(4);    //pesan error
            }else               //jika ketemu
            {
                printf("\n%s command has executed successfully!\n", query[0]);
                //mengupdate kolom nama brand, nama distributor, dan no telepon sesuai index primary key
                strcpy(tBrand[index].value1, query[4]);
                strcpy(tBrand[index].value2, query[5]);
                strcpy(tBrand[index].value3, query[6]);
            }
        }else   //jika input tabel selain tabel yang tersedia
        {
            errorMessage(2);    //pesan error
        }
    }else   //jika tidak ada query update setelah insert
    {
        if (strcmp(query[1], "tproduct") == 0 || strcmp(query[1], "tProduct") == 0 || strcmp(query[1], "TPRODUCT") == 0) //jika input tabel produk
        {
            printf("\n%s command has executed successfully!\n", query[0]);
            //memasukan data
            strcpy(tProduct[idxProduct].pk, query[2]);
            strcpy(tProduct[idxProduct].value1, query[3]);
            strcpy(tProduct[idxProduct].value2, query[4]);
            strcpy(tProduct[idxProduct].value3, query[5]);
            idxProduct++;
        }else if (strcmp(query[1], "tbrand") == 0 || strcmp(query[1], "tBrand") == 0 || strcmp(query[1], "TBRAND") == 0)    //jika input tabel brand
        {
            printf("\n%s command has executed successfully!\n", query[0]);
            //memasukan data
            strcpy(tBrand[idxBrand].pk, query[2]);
            strcpy(tBrand[idxBrand].value1, query[3]);
            strcpy(tBrand[idxBrand].value2, query[4]);
            strcpy(tBrand[idxBrand].value3, query[5]);
            idxBrand++;
        }else   //jika input tabel selain tabel yang tersedia
        {
            errorMessage(2);    //pesan error
        }
    }
    saveData(); //menjalankan prosedur save data
}

void updateData(){  //prosedur update data
    int i, index;
    loadData(); //menjalankan prosedur load data

    if (strcmp(query[1], "tproduct") == 0 || strcmp(query[1], "tProduct") == 0 || strcmp(query[1], "TPRODUCT") == 0)    //jika input tabel produk
    {
        index = seqSearch(tProduct, idxProduct, query[2]);  //mencari index primary key yang di input di dalam tabel
        if (index == -1)    //jika primary key tidak ketemu
        {
            errorMessage(4);    //pesan error
        }else   //jika ketemu
        {
            printf("\n%s command has executed successfully!\n", query[0]);
            //mengupdate nama produk, stok produk, dan kode brand sesuai index primary key
            strcpy(tProduct[index].value1, query[3]);
            strcpy(tProduct[index].value2, query[4]);
            strcpy(tProduct[index].value3, query[5]);
        }
    }else if (strcmp(query[1], "tbrand") == 0 || strcmp(query[1], "tBrand") == 0 || strcmp(query[1], "TBRAND") == 0)    //jika input tabel brand
    {
        index = seqSearch(tBrand, idxBrand, query[2]);  //mencari index primary key yang di input di dalam tabel
        if (index == -1)    //jika primary key tidak ketemu
        {
            errorMessage(4);    //pesan error
        }else   //jika ketemu
        {
            printf("\n%s command has executed successfully!\n", query[0]);
            //mengupdate nama brand, nama distributor, dan no telepon sesuai index primary key
            strcpy(tBrand[index].value1, query[3]);
            strcpy(tBrand[index].value2, query[4]);
            strcpy(tBrand[index].value3, query[5]);
        }
    }else   //jika input tabel selain tabel yang tersedia
    {
        errorMessage(2);    //pesan error
    }
    saveData(); //menjalankan prosedur save data
}

void selectData(){      //prosedur select data
    int i, j;
    loadData();         //menjalankan prosedur load data
    countMaxLength();   //menjalankan prosedur menghitung panjang string max setiap kolom pada setiap tabel

    //jika merupakan query join tabel
    if (((strcmp(query[1], "tbrand") == 0 || strcmp(query[1], "tBrand") == 0 || strcmp(query[1], "TBRAND") == 0) && (strcmp(query[2], "tproduct") == 0 || strcmp(query[2], "tProduct") == 0 || strcmp(query[2], "TPRODUCT") == 0))
    || ((strcmp(query[1], "tproduct") == 0 || strcmp(query[1], "tProduct") == 0 || strcmp(query[1], "TPRODUCT") == 0) && (strcmp(query[2], "tbrand") == 0 || strcmp(query[2], "tBrand") == 0 || strcmp(query[2], "TBRAND") == 0)))
    {
        printf("\n%s command has executed successfully!\n", query[0]);
        int index;
        char temp[100][100][100];
        for ( i = 0; i < idxProduct; i++)   //looping untuk memasukan kolom pada tabel produk dan brand ke dalam variabel temp
        {
            strcpy(temp[i][0], tProduct[i].pk);
            strcpy(temp[i][1], tProduct[i].value1);
            strcpy(temp[i][2], tProduct[i].value2);
            strcpy(temp[i][3], tProduct[i].value3);
            index = seqSearch(tBrand, idxBrand, temp[i][3]);
            strcpy(temp[i][4], tBrand[index].value1);
            strcpy(temp[i][5], tBrand[index].value2);
            strcpy(temp[i][6], tBrand[index].value3);
        }
        //  output dalam bentuk tabel
        printf("\n+-");
        for ( i = 0; i < maxPKProduct; i++)
        {
            printf("-");
        }
        printf("-+-");
        for ( i = 0; i < maxValue1Product; i++)
        {
            printf("-");
        }
        printf("-+-");
        for ( i = 0; i < maxValue2Product; i++)
        {
            printf("-");
        }
        printf("-+-");
        for ( i = 0; i < maxValue3Product; i++)
        {
            printf("-");
        }
        printf("-+-");
        for ( i = 0; i < maxValue1Brand; i++)
        {
            printf("-");
        }
        printf("-+-");
        for ( i = 0; i < maxValue2Brand; i++)
        {
            printf("-");
        }
        printf("-+-");
        for ( i = 0; i < maxValue3Brand; i++)
        {
            printf("-");
        }
        printf("-+\n");
        printf("| Kode Produk");
        for ( i = 0; i < maxPKProduct-strlen("Kode Produk"); i++)
        {
            printf(" ");
        }
        printf(" | Nama Produk");
        for ( i = 0; i < maxValue1Product-strlen("Nama Produk"); i++)
        {
            printf(" ");
        }
        printf(" | Stok Produk");
        for ( i = 0; i < maxValue2Product-strlen("Stok Produk"); i++)
        {
            printf(" ");
        }
        printf(" | Kode Brand");
        for ( i = 0; i < maxValue3Product-strlen("Kode Brand"); i++)
        {
            printf(" ");
        }
        printf(" | Nama Brand");
        for ( i = 0; i < maxValue1Brand-strlen("Nama Brand"); i++)
        {
            printf(" ");
        }
        printf(" | Nama Distributor");
        for ( i = 0; i < maxValue2Brand-strlen("Nama Distributor"); i++)
        {
            printf(" ");
        }
        printf(" | No Telepon");
        for ( i = 0; i < maxValue3Brand-strlen("No Telepon"); i++)
        {
            printf(" ");
        }
        printf(" |\n");
        printf("+-");
        for ( i = 0; i < maxPKProduct; i++)
        {
            printf("-");
        }
        printf("-+-");
        for ( i = 0; i < maxValue1Product; i++)
        {
            printf("-");
        }
        printf("-+-");
        for ( i = 0; i < maxValue2Product; i++)
        {
            printf("-");
        }
        printf("-+-");
        for ( i = 0; i < maxValue3Product; i++)
        {
            printf("-");
        }
        printf("-+-");
        for ( i = 0; i < maxValue1Brand; i++)
        {
            printf("-");
        }
        printf("-+-");
        for ( i = 0; i < maxValue2Brand; i++)
        {
            printf("-");
        }
        printf("-+-");
        for ( i = 0; i < maxValue3Brand; i++)
        {
            printf("-");
        }
        printf("-+\n");
        for ( i = 0; i < idxProduct; i++)
        {
            printf("| %s", temp[i][0]);
            for ( j = 0; j < maxPKProduct-strlen(temp[i][0]); j++)
            {
                printf(" ");
            }
            printf(" | %s", temp[i][1]);
            for ( j = 0; j < maxValue1Product-strlen(temp[i][1]); j++)
            {
                printf(" ");
            }
            printf(" | %s", temp[i][2]);
            for ( j = 0; j < maxValue2Product-strlen(temp[i][2]); j++)
            {
                printf(" ");
            }
            printf(" | %s", temp[i][3]);
            for ( j = 0; j < maxValue3Product-strlen(temp[i][3]); j++)
            {
                printf(" ");
            }
            printf(" | %s", temp[i][4]);
            for ( j = 0; j < maxValue1Brand-strlen(temp[i][4]); j++)
            {
                printf(" ");
            }
            printf(" | %s", temp[i][5]);
            for ( j = 0; j < maxValue2Brand-strlen(temp[i][5]); j++)
            {
                printf(" ");
            }
            printf(" | %s", temp[i][6]);
            for ( j = 0; j < maxValue3Brand-strlen(temp[i][6]); j++)
            {
                printf(" ");
            }
            printf(" |\n");
        }
        printf("+-");
        for ( i = 0; i < maxPKProduct; i++)
        {
            printf("-");
        }
        printf("-+-");
        for ( i = 0; i < maxValue1Product; i++)
        {
            printf("-");
        }
        printf("-+-");
        for ( i = 0; i < maxValue2Product; i++)
        {
            printf("-");
        }
        printf("-+-");
        for ( i = 0; i < maxValue3Product; i++)
        {
            printf("-");
        }
        printf("-+-");
        for ( i = 0; i < maxValue1Brand; i++)
        {
            printf("-");
        }
        printf("-+-");
        for ( i = 0; i < maxValue2Brand; i++)
        {
            printf("-");
        }
        printf("-+-");
        for ( i = 0; i < maxValue3Brand; i++)
        {
            printf("-");
        }
        printf("-+\n");
        printf("%d rows in set.\n\n", idxProduct);  //output banyaknya baris
    }else if ((strcmp(query[1], "tbrand") == 0 || strcmp(query[1], "tBrand") == 0 || strcmp(query[1], "TBRAND") == 0) && idxQuery == 2)
    {   //jika input adalah tabel brand
        printf("\n%s command has executed successfully!\n", query[0]);
        //output dalam bentuk tabel
        printf("\n+-");
        for ( i = 0; i < maxPKBrand; i++)
        {
            printf("-");
        }
        printf("-+-");
        for ( i = 0; i < maxValue1Brand; i++)
        {
            printf("-");
        }
        printf("-+-");
        for ( i = 0; i < maxValue2Brand; i++)
        {
            printf("-");
        }
        printf("-+-");
        for ( i = 0; i < maxValue3Brand; i++)
        {
            printf("-");
        }
        printf("-+\n");
        printf("| Kode Brand");
        for ( i = 0; i < maxPKBrand-strlen("Kode Brand"); i++)
        {
            printf(" ");
        }
        printf(" | Nama Brand");
        for ( i = 0; i < maxValue1Brand-strlen("Nama Brand"); i++)
        {
            printf(" ");
        }
        printf(" | Nama Distributor");
        for ( i = 0; i < maxValue2Brand-strlen("Nama Distributor"); i++)
        {
            printf(" ");
        }
        printf(" | No Telepon");
        for ( i = 0; i < maxValue3Brand-strlen("No Telepon"); i++)
        {
            printf(" ");
        }
        printf(" |\n");
        printf("+-");
        for ( i = 0; i < maxPKBrand; i++)
        {
            printf("-");
        }
        printf("-+-");
        for ( i = 0; i < maxValue1Brand; i++)
        {
            printf("-");
        }
        printf("-+-");
        for ( i = 0; i < maxValue2Brand; i++)
        {
            printf("-");
        }
        printf("-+-");
        for ( i = 0; i < maxValue3Brand; i++)
        {
            printf("-");
        }
        printf("-+\n");
        for ( i = 0; i < idxBrand; i++)
        {
            printf("| %s", tBrand[i].pk);
            for ( j = 0; j < maxPKBrand-strlen(tBrand[i].pk); j++)
            {
                printf(" ");
            }
            printf(" | %s", tBrand[i].value1);
            for ( j = 0; j < maxValue1Brand-strlen(tBrand[i].value1); j++)
            {
                printf(" ");
            }
            printf(" | %s", tBrand[i].value2);
            for ( j = 0; j < maxValue2Brand-strlen(tBrand[i].value2); j++)
            {
                printf(" ");
            }
            printf(" | %s", tBrand[i].value3);
            for ( j = 0; j < maxValue3Brand-strlen(tBrand[i].value3); j++)
            {
                printf(" ");
            }
            printf(" |\n");
        }
        printf("+-");
        for ( i = 0; i < maxPKBrand; i++)
        {
            printf("-");
        }
        printf("-+-");
        for ( i = 0; i < maxValue1Brand; i++)
        {
            printf("-");
        }
        printf("-+-");
        for ( i = 0; i < maxValue2Brand; i++)
        {
            printf("-");
        }
        printf("-+-");
        for ( i = 0; i < maxValue3Brand; i++)
        {
            printf("-");
        }
        printf("-+\n");
        printf("%d rows in set.\n\n", idxBrand);    //output banyaknya baris
    }else if ((strcmp(query[1], "tproduct") == 0 || strcmp(query[1], "tProduct") == 0 || strcmp(query[1], "TPRODUCT") == 0) && idxQuery == 2)
    {   //jika input adalah tabel produk
        printf("\n%s command has executed successfully!\n", query[0]);
        //output dalam bentuk tabel
        printf("\n+-");
        for ( i = 0; i < maxPKProduct; i++)
        {
            printf("-");
        }
        printf("-+-");
        for ( i = 0; i < maxValue1Product; i++)
        {
            printf("-");
        }
        printf("-+-");
        for ( i = 0; i < maxValue2Product; i++)
        {
            printf("-");
        }
        printf("-+-");
        for ( i = 0; i < maxValue3Product; i++)
        {
            printf("-");
        }
        printf("-+\n");
        printf("| Kode Produk");
        for ( i = 0; i < maxPKProduct-strlen("Kode Produk"); i++)
        {
            printf(" ");
        }
        printf(" | Nama Produk");
        for ( i = 0; i < maxValue1Product-strlen("Nama Produk"); i++)
        {
            printf(" ");
        }
        printf(" | Stok Produk");
        for ( i = 0; i < maxValue2Product-strlen("Stok Produk"); i++)
        {
            printf(" ");
        }
        printf(" | Kode Brand");
        for ( i = 0; i < maxValue3Product-strlen("Kode Brand"); i++)
        {
            printf(" ");
        }
        printf(" |\n");
        printf("+-");
        for ( i = 0; i < maxPKProduct; i++)
        {
            printf("-");
        }
        printf("-+-");
        for ( i = 0; i < maxValue1Product; i++)
        {
            printf("-");
        }
        printf("-+-");
        for ( i = 0; i < maxValue2Product; i++)
        {
            printf("-");
        }
        printf("-+-");
        for ( i = 0; i < maxValue3Product; i++)
        {
            printf("-");
        }
        printf("-+\n");
        for ( i = 0; i < idxProduct; i++)
        {
            printf("| %s", tProduct[i].pk);
            for ( j = 0; j < maxPKProduct-strlen(tProduct[i].pk); j++)
            {
                printf(" ");
            }
            printf(" | %s", tProduct[i].value1);
            for ( j = 0; j < maxValue1Product-strlen(tProduct[i].value1); j++)
            {
                printf(" ");
            }
            printf(" | %s", tProduct[i].value2);
            for ( j = 0; j < maxValue2Product-strlen(tProduct[i].value2); j++)
            {
                printf(" ");
            }
            printf(" | %s", tProduct[i].value3);
            for ( j = 0; j < maxValue3Product-strlen(tProduct[i].value3); j++)
            {
                printf(" ");
            }
            printf(" |\n");
        }
        printf("+-");
        for ( i = 0; i < maxPKProduct; i++)
        {
            printf("-");
        }
        printf("-+-");
        for ( i = 0; i < maxValue1Product; i++)
        {
            printf("-");
        }
        printf("-+-");
        for ( i = 0; i < maxValue2Product; i++)
        {
            printf("-");
        }
        printf("-+-");
        for ( i = 0; i < maxValue3Product; i++)
        {
            printf("-");
        }
        printf("-+\n");
        printf("%d rows in set.\n\n", idxProduct);  //output banyaknya baris
    }else if ((strcmp(query[1], "tbrand") != 0 || strcmp(query[1], "tBrand") != 0 || strcmp(query[1], "TBRAND") != 0) && (strcmp(query[1], "tproduct") != 0 || strcmp(query[1], "tProduct") != 0 || strcmp(query[1], "TPRODUCT") != 0) && idxQuery == 2)
    {   //jika input bukanlah tabel yang telah disediakan
        errorMessage(2);    //pesan error
    }else   //jika ada kesalahan nama tabel pada join tabel
    {
        errorMessage(5);    //pesan error
    }
}

void deleteData(){      //prosedur delete data
    int index, i;
    loadData(); //menjalankan prosedur load data

    if (strcmp(query[1], "tproduct") == 0 || strcmp(query[1], "tProduct") == 0 || strcmp(query[1], "TPRODUCT") == 0)
    {   //jika input adalah tabel produk
        index = seqSearch(tProduct, idxProduct, query[2]);  //mencari index primary key
        if (index == -1)    //jika tidak ketemu
        {
            errorMessage(4);    //pesan error
        }else   //jika ketemu
        {
            printf("\n%s command has executed successfully!\n", query[0]);
            //menghapus data
            for ( i = index; i < idxProduct; i++)
            {
                strcpy(tProduct[i].pk, tProduct[i+1].pk);
                strcpy(tProduct[i].value1, tProduct[i+1].value1);
                strcpy(tProduct[i].value2, tProduct[i+1].value2);
                strcpy(tProduct[i].value3, tProduct[i+1].value3);
            }
            idxProduct--;
        }
    }else if (strcmp(query[1], "tbrand") == 0 || strcmp(query[1], "tBrand") == 0 || strcmp(query[1], "TBRAND") == 0)
    {   //jika input adalah tabel brand
        index = seqSearch(tBrand, idxBrand, query[2]);  //mencari index primary key
        if (index == -1)    //jika tidak ketemu
        {
            errorMessage(4);    //pesan error
        }else   //jika ketemu
        {
            printf("\n%s command has executed successfully!\n", query[0]);
            //menghapus data
            for ( i = index; i < idxBrand; i++)
            {
                strcpy(tBrand[i].pk, tBrand[i+1].pk);
                strcpy(tBrand[i].value1, tBrand[i+1].value1);
                strcpy(tBrand[i].value2, tBrand[i+1].value2);
                strcpy(tBrand[i].value3, tBrand[i+1].value3);
            }
            idxBrand--;
        }
    }else   //jika input bukanlah tabel yang sudah disediakan
    {
        errorMessage(2);    //pesan error
    }
    saveData(); //menjalankan prosedur save data
}

//mesin kata
void startKata(char pita[]){
    idx=0;
    lenKata=0;
    while (pita[idx] == ' ')
    {
        idx++;
    }
    while ((pita[idx] != ' ') && (EOP(pita) == 0))
    {
        currentKata[lenKata] = pita[idx];
        idx++;
        lenKata++;
    }
    currentKata[lenKata] = '\0';
}

void resetKata(){
    lenKata = 0;
    currentKata[lenKata] = '\0';
}

void incKata(char pita[]){
    lenKata = 0;
    while (pita[idx] == ' ')
    {
        idx++;
    }
    while (pita[idx] != ' ' && EOP(pita) == 0)
    {
        currentKata[lenKata] = pita[idx];
        idx++;
        lenKata++;
    }
    currentKata[lenKata] = '\0';
}

char *getCKata(){
    return currentKata;
}

int getLenKata(){
    return lenKata;
}

int EOP(char pita[]){
    if (pita[idx] == ';')
    {
        return 1;
    }else
    {
        return 0;
    }
}