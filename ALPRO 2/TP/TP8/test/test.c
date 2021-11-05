#include <stdio.h>
#include <string.h>

typedef struct
{
    char id[10];
    char title[100];
    char genre[100];
    char director[100];
    char cinema[100];
}dataFilm;

int main(){
    int i, j, countList=0, countGenre=0, countDirector=0, countCinema=0;

    FILE *fList;

    //read list film
    fList = fopen("ListFilm.dat", "r");
    dataFilm listFilm[100];
    fscanf(fList, "%s %s %s %s", listFilm[countList].title, listFilm[countList].director, listFilm[countList].genre, listFilm[countList].cinema);
    if (strcmp(listFilm[countList].title, "####") == 0)
    {
        printf("File Kosong!\n");
    }else
    {
        while (strcmp(listFilm[countList].title, "####") != 0)
        {
            countList++;
            fscanf(fList, "%s %s %s %s", listFilm[countList].title, listFilm[countList].director, listFilm[countList].genre, listFilm[countList].cinema);
        }
    }
    fclose(fList);

    //read director
    fList = fopen("Sutradara.dat", "r");
    dataFilm listDirector[100];
    fscanf(fList, "%s %s", listDirector[countDirector].id, listDirector[countDirector].director);
    if (strcmp(listDirector[countDirector].id, "####") == 0)
    {
        printf("File Kosong!\n");
    }else
    {
        while (strcmp(listDirector[countDirector].id, "####") != 0)
        {
            countDirector++;
            fscanf(fList, "%s %s", listDirector[countDirector].id, listDirector[countDirector].director);
        }
    }
    fclose(fList);
    
    //read genre
    fList = fopen("Genre.dat", "r");
    dataFilm listGenre[100];
    fscanf(fList, "%s %s", listGenre[countGenre].id, listGenre[countGenre].genre);
    if (strcmp(listGenre[countGenre].id, "####") == 0)
    {
        printf("File Kosong!\n");
    }else
    {
        while (strcmp(listGenre[countGenre].id, "####") != 0)
        {
            countGenre++;
            fscanf(fList, "%s %s", listGenre[countGenre].id, listGenre[countGenre].genre);
        }
    }
    fclose(fList);

    //read cinema
    fList = fopen("Bioskop.dat", "r");
    dataFilm listCinema[100];
    fscanf(fList, "%s %s", listCinema[countCinema].id, listCinema[countCinema].cinema);
    if (strcmp(listCinema[countCinema].id, "####") == 0)
    {
        printf("File Kosong!\n");
    }else
    {
        while (strcmp(listCinema[countCinema].id, "####") != 0)
        {
            countCinema++;
            fscanf(fList, "%s %s", listCinema[countCinema].id, listCinema[countCinema].cinema);
        }
    }
    fclose(fList);

    //checking director
    int maxTitle=0;
    int maxDirect=0;
    for ( i = 0; i < countList; i++)
    {
        if (strlen(listFilm[i].title) > maxTitle)
        {
            maxTitle = strlen(listFilm[i].title);
        }
        for ( j = 0; j < countDirector; j++)
        {
            if (strlen(listDirector[j].director) > maxDirect)
            {
                maxDirect = strlen(listDirector[j].director);
            }
            if (strcmp(listFilm[i].director, listDirector[j].id) == 0)
            {
                strcpy(listFilm[i].director, listDirector[j].director);
            }
        }
    }
    //checking genre
    int maxGenre=0;
    for ( i = 0; i < countList; i++)
    {
        for ( j = 0; j < countGenre; j++)
        {
            if (strlen(listGenre[j].genre) > maxGenre)
            {
                maxGenre = strlen(listGenre[j].genre);
            }
            if (strcmp(listFilm[i].genre, listGenre[j].id) == 0)
            {
                strcpy(listFilm[i].genre, listGenre[j].genre);
            }
        }
    }
    //cheking cinema
    int maxCinema=0;
    for ( i = 0; i < countList; i++)
    {
        for ( j = 0; j < countCinema; j++)
        {
            if (strlen(listCinema[j].cinema) > maxCinema)
            {
                maxCinema = strlen(listCinema[j].cinema);
            }
            if (strcmp(listFilm[i].cinema, listCinema[j].id) == 0)
            {
                strcpy(listFilm[i].cinema, listCinema[j].cinema);
            }
        }
    }

    fList = fopen("ListFilmFinal.dat", "w");
    for ( i = 0; i < countList; i++)
    {
        fprintf(fList, "%s %s %s %s\n", listFilm[i].title, listFilm[i].director, listFilm[i].genre, listFilm[i].cinema);
    }
    fprintf(fList, "#### #### #### ####");
    fclose(fList);
    
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

    for ( i = 0; i < countList; i++)
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

    return 0;
}