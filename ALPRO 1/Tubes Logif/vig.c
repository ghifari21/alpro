void vigenere(){
 
  printf("-------------------------------------------------\n");
  printf("Generator Vigenere\n");
  printf("******\n");
  printf("-------------------------------------------------\n");
  printf("Catatan:Tidak boleh ada spasi di input\n");

  int pil=1;
  do{
  int ch;
  printf(" _____________\n");
  printf("| ->Tekan 1 untuk encrypted             |\n");
  printf("| ->Tekan 2 untuk decrypted             |\n");
  printf("|_____________|\n");
  printf("input: ");
  scanf(" %d",&ch);
  printf("\n");
  char str[100];
  char key[100];
    if(ch==1) 
    printf("Masukan kalimat yang mau dienkripsi:\n");
    else if(ch==2)
    printf("Masukan kalimat yang mau didekripsi:\n");
    scanf("%s",str);
    int strLen=strlen(str);
    int ii,jj;
    for( ii=0,jj=0;ii<strlen(str);ii++)
 {
  if(str[ii]!=' ')
  {
   str[jj]=toupper(str[ii]);   
   jj++;
  }
 }
 str[jj]='\0';
 
 

    printf("Masukan kunci:\n");
    scanf("%s",key);
    for(ii=0,jj=0;ii<strlen(key);ii++)
 {
  if(key[ii]!=' ')
  {
   key[jj]=toupper(key[ii]);   
   jj++;
  }
 }
 key[jj]='\0';
 
    int keyLen=strlen(key);
    char newKey[strLen];
    char encrypted[strLen];
    char decrypted[strLen];
//generating new key
  int i,j;
    for( i=0,j=0;i<strLen;++i,++j){
      if(j==keyLen)j=0;
      newKey[i]=key[j];
    }
    newKey[i]='\0';

    //encryption
    for(i = 0; i < strLen; ++i)
        encrypted[i] = ((str[i] + newKey[i]) % 26) + 'A';
 
    encrypted[i] = '\0';

  //decryption
    for(i = 0; i < strLen; ++i)
        decrypted[i] = (((str[i] - newKey[i]) + 26) % 26) + 'A';
 
    decrypted[i] = '\0';
    
    
    
    if(ch==1)printf("Hasil encrypted : %s\n",encrypted);
    else if(ch==2)printf("Hasil decrypted : %s\n",decrypted);
  printf("\n\n");
  int tmpp;
  printf("->Tekan 0 untuk kembali\n");
  printf("->Tekan 1 untuk lanjut\n");
  printf("Masukan pilihan: ");
  scanf("%d",&tmpp);
  printf("\n");
  pil=tmpp;
  

  }while(pil);  
}