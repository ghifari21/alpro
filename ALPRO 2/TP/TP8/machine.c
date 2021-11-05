/*
   ============================================================
   | Saya Ghifari Octaverin 2000952 mengerjakan TP8           |
   | dalam mata kuliah Algoritma dan Pemrograman II           |
   | untuk keberkahanNya maka saya tidak melakukan kecurangan |
   | seperti yang telah dispesifikasikan. Aamiin              |
   ============================================================
*/

#include "header.h"

void readRecords(){  //prosedur readRecords
   countFilm=0, countGenre=0, countDirector=0, countCinema=0;  //nilai awal countFilm, countGenre, countDirector, countCinema
   
   //read listfilm
   fList = fopen("ListFilm.dat", "r"); //membuka file ListFilm.dat dengan mode read
   fscanf(fList, "%s %s %s %s", listFilm[countFilm].title, listFilm[countFilm].director, listFilm[countFilm].genre, listFilm[countFilm].cinema); //input dari file ke array of bungkusan
   if (strcmp(listFilm[countFilm].title, "####") == 0)   //jika judul merupakan END OF FILE
   {
      printf("File Kosong!\n");  //output file kosong
   }else //jika judul bukan merupakan END OF FILE
   {
      while (strcmp(listFilm[countFilm].title, "####") != 0)   //selama judul bukan merupakan END OF FILE
      {
         countFilm++;   //countFilm akan bertambah 1
         fscanf(fList, "%s %s %s %s", listFilm[countFilm].title, listFilm[countFilm].director, listFilm[countFilm].genre, listFilm[countFilm].cinema);   //input dari file ke array of bungkusan
      }
   }
   fclose(fList); //menutup file

   //read director
   fList = fopen("Sutradara.dat", "r");   //membuka file Sutradara.dat dengan mode read
   fscanf(fList, "%s %s", listDirector[countDirector].id, listDirector[countDirector].director);   //input dari file ke array of bungkusan
   if (strcmp(listDirector[countDirector].id, "####") == 0) //jika ID merupakan END OF FILE
   {
      printf("File Kosong!\n");  //output file kosong
   }else //jika ID bukan merupakan END OF FILE
   {
      while (strcmp(listDirector[countDirector].id, "####") != 0) //selama ID bukan merupakan END OF FILE
      {
         countDirector++;  //countDirector akan bertambah 1
         fscanf(fList, "%s %s", listDirector[countDirector].id, listDirector[countDirector].director);   //input dari file ke array of bungkusan
      }
   }
   fclose(fList); //menutup file
   
   //read genre
   fList = fopen("Genre.dat", "r"); //membuka file 
   fscanf(fList, "%s %s", listGenre[countGenre].id, listGenre[countGenre].genre);   //input dari file ke array of bungkusan
   if (strcmp(listGenre[countGenre].id, "####") == 0) //jika ID merupakan END OF FILE
   {
      printf("File Kosong!\n");  //output file kosong
   }else //jika ID bukan merupakan END OF FILE
   {
      while (strcmp(listGenre[countGenre].id, "####") != 0) //selama ID bukan merupakan END OF FILE
      {
         countGenre++;  //countGenre akan bertambah 1
         fscanf(fList, "%s %s", listGenre[countGenre].id, listGenre[countGenre].genre);   //input dari file ke array of bungkusan
      }
   }
   fclose(fList); //menutup file

   //read cinema
   fList = fopen("Bioskop.dat", "r");  //membuka file Bioskop.dat dengan mode read
   fscanf(fList, "%s %s", listCinema[countCinema].id, listCinema[countCinema].cinema); //input dari file ke array of bungkusan
   if (strcmp(listCinema[countCinema].id, "####") == 0)  //jika ID merupakan END OF FILE
   {
      printf("File Kosong!\n");  //output file kosong
   }else //jika ID bukan merupakan END OF FILE
   {
      while (strcmp(listCinema[countCinema].id, "####") != 0)  //selama ID bukan merupakan END OF FILE
      {
         countCinema++; //countCinema akan bertambah 1
         fscanf(fList, "%s %s", listCinema[countCinema].id, listCinema[countCinema].cinema); //input dari file ke array of bungkusan
      }
   }
   fclose(fList); //menutup file
}

void appendListFilm(){  //prosedur append ListFilm.dat
   int i;   //variabel iterator
   
   do
   {
      scanf("%s", &listFilm[countFilm].title);  //meminta input user untuk judul
      if (strcmp(listFilm[countFilm].title, "####") != 0)   //jika judul bukan merupakan END OF FILE
      {
         scanf("%s %s %s", &listFilm[countFilm].director, &listFilm[countFilm].genre, &listFilm[countFilm].cinema);  //meminta input dari user
         countFilm++;   //countFilm akan bertambah 1
      }
   } while (strcmp(listFilm[countFilm].title, "####") != 0);   //looping selama judul bukan merupakan END OF FILE
      
   fList = fopen("ListFilm.dat", "w"); //membuka file ListFilm.dat dengan mode write
   for ( i = 0; i < countFilm; i++)    //looping untuk write data kedalam file ListFilm.dat
   {
      fprintf(fList, "%s %s %s %s\n", listFilm[i].title, listFilm[i].director, listFilm[i].genre, listFilm[i].cinema);  //string yang akan di write kedalam file
   }
   fprintf(fList, "#### #### #### ####"); //END OF FILE
   fclose(fList); //menutup file
}

void appendSutradara(){ //prosedur append Sutradara.dat
   int i;   //variabel iterator

   do
   {
      scanf("%s", &listDirector[countDirector].id);   //meminta input user untuk ID sutradara
      if (strcmp(listDirector[countDirector].id, "####") != 0) //jika ID bukan merupakan END OF FILE
      {
         scanf("%s", &listDirector[countDirector].director);   //meminta input dari user untuk nama sutradara
         countDirector++;  //countDirector akan bertambah 1
      }
   } while (strcmp(listDirector[countDirector].id, "####") != 0); //looping selama ID bukan merupakan END OF FILE
   
   fList = fopen("Sutradara.dat", "w");   //membuka file Sutradara.dat dengan mode write
   for ( i = 0; i < countDirector; i++)   //looping untuk write data kedalam file Sutradara.dat
   {
      fprintf(fList, "%s %s\n", listDirector[i].id, listDirector[i].director);   //string yang akan di write kedalam file
   }
   fprintf(fList, "#### #### #### ####"); //END OF FILE
   fclose(fList); //menutup file
}

void appendGenre(){  //prosedur append Genre.dat
   int i;   //variabel iterator

   do
   {
      scanf("%s", &listGenre[countGenre].id);   //meminta input user untuk ID genre
      if (strcmp(listGenre[countGenre].id, "####") != 0) //selama ID bukan merupakan END OF FILE
      {
         scanf("%s", &listGenre[countGenre].genre);   //meminta input dari user untuk genre
         countGenre++;  //countGenre akan bertambah 1
      }
   } while (strcmp(listGenre[countGenre].id, "####") != 0); //looping selama ID bukan merupakan END OF FILE
      
   fList = fopen("Genre.dat", "w"); //membuka file Genre.dat dengan mode write
   for ( i = 0; i < countGenre; i++)   //looping untuk write data kedalam file Genre.dat
   {
      fprintf(fList, "%s %s\n", listGenre[i].id, listGenre[i].genre);   //string yang akan di write kedalam file
   }
   fprintf(fList, "#### #### #### ####"); //END OF FILE
   fclose(fList); //menutup file
}

void appendBioskop(){   //prosedur append Bioskop.dat
   int i;   //variabel iterator

   do
   {
      scanf("%s", &listCinema[countCinema].id); //meminta input user untuk ID bioskop
      if (strcmp(listCinema[countCinema].id, "####") != 0)  //jika ID bioskop bukan merupakan END OF FILE
      {
         scanf("%s", &listCinema[countCinema].cinema);   //meminta input dari user untuk nama bioskop
      }
   } while (strcmp(listCinema[countCinema].id, "####") != 0);  //looping selama ID bukan merupakan END OF FILE
      
   fList = fopen("Bioskop.dat", "w");  //membuka file Bioskop.dat dengan mode write
   for ( i = 0; i < countCinema; i++)  //looping untuk write data kedalam file Bioskop.dat
   {
      fprintf(fList, "%s %s\n", listCinema[i].id, listCinema[i].cinema);   //string yang akan di write kedalam file
   }
   fprintf(fList, "#### #### #### ####"); //END OF FILE
   fclose(fList); //menutup file
}

void output(int maxTitle, int maxDirect, int maxGenre, int maxCinema){  //prosedur output
   int i, j;   //variabel iterator
   
   //===========bagian dari pembentuk tabel===========//
   printf("+");
   for ( i = 0; i < maxTitle+2; i++)
   {
      printf("-");
   }
   printf("+");
   for ( i = 0; i < maxDirect+2; i++)
   {
      printf("-");
   }
   printf("+");
   for ( i = 0; i < maxGenre+2; i++)
   {
      printf("-");
   }
   printf("+");
   for ( i = 0; i < maxCinema+2; i++)
   {
      printf("-");
   }
   printf("+\n");
   //===========Header tabel===========//
   printf("| Judul Film");
   for ( i = 0; i < maxTitle-9; i++)
   {
      printf(" ");
   }
   printf("| Sutradara");
   for ( i = 0; i < maxDirect-8; i++)
   {
      printf(" ");
   }
   printf("| Genre");
   for ( i = 0; i < maxGenre-4; i++)
   {
      printf(" ");
   }
   printf("| Bioskop");
   for ( i = 0; i < maxCinema-6; i++)
   {
      printf(" ");
   }
   printf("|\n");
   //===========bagian dari pembentuk tabel===========//
   printf("+");
   for ( i = 0; i < maxTitle+2; i++)
   {
      printf("-");
   }
   printf("+");
   for ( i = 0; i < maxDirect+2; i++)
   {
      printf("-");
   }
   printf("+");
   for ( i = 0; i < maxGenre+2; i++)
   {
      printf("-");
   }
   printf("+");
   for ( i = 0; i < maxCinema+2; i++)
   {
      printf("-");
   }
   printf("+\n");
   //===========bagian isi dari tabel===========//
   for ( i = 0; i < countFilm; i++)
   {
      printf("| %s", listFilm[i].title);
      for ( j = 0; j < (maxTitle+1-strlen(listFilm[i].title)); j++)
      {
         printf(" ");
      }
      printf("| %s", listFilm[i].director);
      for ( j = 0; j < (maxDirect+1-strlen(listFilm[i].director)); j++)
      {
         printf(" ");
      }
      printf("| %s", listFilm[i].genre);
      for ( j = 0; j < (maxGenre+1-strlen(listFilm[i].genre)); j++)
      {
         printf(" ");
      }
      printf("| %s", listFilm[i].cinema);
      for ( j = 0; j < (maxCinema+1-strlen(listFilm[i].cinema)); j++)
      {
         printf(" ");
      }
      printf("|\n");
   }
   //===========bagian dari pembentuk tabel===========//
   printf("+");
   for ( i = 0; i < maxTitle+2; i++)
   {
      printf("-");
   }
   printf("+");
   for ( i = 0; i < maxDirect+2; i++)
   {
      printf("-");
   }
   printf("+");
   for ( i = 0; i < maxGenre+2; i++)
   {
      printf("-");
   }
   printf("+");
   for ( i = 0; i < maxCinema+2; i++)
   {
      printf("-");
   }
   printf("+\n");
}