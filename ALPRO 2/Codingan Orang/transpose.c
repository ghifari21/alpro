#include<stdio.h>

int main(){

	int baris, kolom;
	printf("Banyaknya baris : ");
	scanf("%d", &baris);
	printf("Banyaknya kolom : ");
	scanf("%d", &kolom);

	int tabel[baris][kolom];
	int i,j;

	printf("Masukan matrix[%d][%d]\n", baris, kolom);
	for(i=0; i<baris; i++){
		for(j=0; j<kolom; j++){
			scanf("%d", &tabel[i][j]);
		}
	}

	//transpose
	printf("\nHasil Transpose:\n");
	for(i=0; i<kolom; i++){
		for(j=0; j<baris; j++){
			printf("%d ", tabel[j][i]);
		}
		printf("\n");
	}

	return 0;
}

