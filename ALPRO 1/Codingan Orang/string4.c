#include <stdio.h>
#include <string.h>

int main(){
    int n, i, j, k;
    char str1[100]; //masukan string dari user
    char str2[100]; //tempat kalimat
    char str3[100]; //tempat kata kunci

    char str4[100]; //tempat hasil setelah menghilangkan kata kunci
    int index_str4=0;

    scanf("%s", str1); //memasukan string
    strcpy(str2, str1); //copy isi string 1 ke 2
    n = strlen(str1); //panjang string 1
    i=0;
    while (i<n) //mengeluarkan kalimat utama dari string masukan
    {
        if (str1[i] == '|')
        {
            str2[i] ='\0';
        }
        i++;
    }

    i=0;
    while (i<n) //mengeluarkan kata kunci dari string masukan
    {
        if (str1[i] == '|')
        {
            j=i;
            k=0;
            while (j<n)
            {
                //printf("%c", str1[j+1]);
                str3[k]=str1[j+1];
                k++;
                j++;
            }
            str3[n-k+1]='\0'; //mengubah array menjadi string
        }
        i++;
    }
    //printf("%s", str3); //output string
    int lensen = strlen(str2);
    int lenkey = strlen(str3);
    printf("%s\n",str2);
    printf("%s\n",str3);

    i=0,j=0;
    int syarat;
    int arrIndex[100];
    int index_arrIndex=0;
    while (i < lensen)
    {
        syarat=0;
        if (str2[i] == str3[0]) //memeriksa apakah string kalimat utama ada yang sama dengan kata kunci
        {           
            syarat=1;
            int index1=0 , index2=i,j=0;
            printf("a\n");
            while (j < lenkey && syarat == 1) //memeriksa untuk array selanjutnya
            {
            printf("b\n");                                        
                if (str2[index2] != str3[index1])
                {
                    syarat=0;            
                }              
                index1++;
                index2++;
                j++;
            }
            
        }
        if(syarat)arrIndex[index_arrIndex++]=i;
         i++;
    }



    for(int i=0;i<index_arrIndex;i++){
      printf("%d ",arrIndex[i]);
    }
    printf("\n");

    int size_arrINdex=index_arrIndex;
    index_arrIndex=0;
    i=0;
    int flag=1;
    int l=0;
    while(i<lensen){
        if(i==arrIndex[index_arrIndex]){
            i+=lenkey;
            index_arrIndex++;       
        }
        else{
            str4[index_str4++]=str2[i++];
        }      
    }
   
    str4[index_str4]='\0';     

    int len_str4=strlen(str4);
    printf("%d\n",len_str4);
    printf("\n");
    for(int i=0;i<=len_str4-1;i++){
        printf("%c",str4[i]);
    }


    //str4[i+1]='\0';
    //printf("%s", str4);
    
    return 0;
}