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

	//refleksi
	int m=baris, n=kolom;
	printf("\nHasil refleksi:\n");
	for(i=0; i<baris; i++){
		for(j=kolom-1; j>=0; j--){
			printf("%d ", tabel[i][j]);
		}
		printf("\n");
	}

	return 0;
}

