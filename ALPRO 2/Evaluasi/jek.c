#include"header.h"

int findTampilkan(char pita[]) {
	int done=0, found=-1;
	startKata(pita);
	while(eopKata(pita)==0&&done==0) {
		if(strcmp(getCurrentKata(), "INSERT")==0) {
			found=0;
			done=1;
		}
		else if(strcmp(getCurrentKata(), "CARI")==0) {
			found=1;
			done=1;
		}
		incKata(pita);
	}
	if(strcmp(getCurrentKata(), "TAMPILKAN")==0) {
		found=2;
		done=1;
	}
	return found;
}

int main() {
	data kereta[50];
	data display[50];
	char pita[200];
	int i, j, end=0;
	while(end==0) {
		scanf(" %199[^\n]s", pita);
		if(findTampilkan(pita)==2) {
			end=1;
		}
		else if(findTampilkan(pita)==1) {
			findData(pita, kereta, display);
		}
		else if(findTampilkan(pita)==0){
			ReadData(pita, kereta);
		}
	}
	printf("TABEL HASIL PENCARIAN\n");
	//cetak
	maxLength(display);
	for(i=0;i<longestStr[0]+longestStr[1]+longestStr[2]+10;i++) {
		printf("=");
	}
	printf("\n");
	printf("| ");
	printf("ID Kereta");
	for(i=0;i<longestStr[0]-9;i++) {
		printf(" ");
	}
	printf(" | ");
	printf("Nama Kereta");
	for(i=0;i<longestStr[1]-11;i++) {
		printf(" ");
	}
	printf(" | ");
	printf("Kelas");
	for(i=0;i<longestStr[2]-5;i++) {
		printf(" ");
	}
	printf(" |");
	printf("\n");
	for(i=0;i<longestStr[0]+longestStr[1]+longestStr[2]+10;i++) {
		printf("=");
	}
	printf("\n");
	for (i=0;i<Displayidx;i++) {
		printf("| ");
		printf("%s", display[i].id);
		for(j=0;j<longestStr[0]-strlen(display[i].id);j++) {
			printf(" ");
		}
		printf(" | ");
		printf("%s", display[i].name);
		for(j=0;j<longestStr[1]-strlen(display[i].name);j++) {
			printf(" ");
		}
		printf(" | ");
		printf("%s", display[i].kelas);
		for(j=0;j<longestStr[2]-strlen(display[i].kelas);j++) {
			printf(" ");
		}
		printf(" |");
		printf("\n");
	}
	for(i=0;i<longestStr[0]+longestStr[1]+longestStr[2]+10;i++) {
		printf("=");
	}
	printf("\n");
	printf("%d data dalam tabel.", Displayidx);
	printf("\n");
	return 0;
}