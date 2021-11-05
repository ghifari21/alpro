#include<stdio.h>

int main(){
	/*format janji:
Saya Axel Eldrian Hadiwibowo 2000352 mengerjakan tugas altibe20 dalam mata kuliah Algoritma dan Pemrograman
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin*/
/*LOGIKA NYA
5
marko

----mmmmmmmmm
   mmaaaaaaamm
  mamarrrrramam
 marmarkkkramram
markmarkokramkram
 marmarkkkramram
  mamarrrrramam
   mmaaaaaaamm
    mmmmmmmmm
halo loki.

5
12345
    111111111
   11222222211
  1212333332121
 123123444321321
12341234543214321
*/
	
	//membuat variabel untuk memasukkan
	int n;
	int i;
	int b1;
	int b11;
	int jumlah = 0;
	
	scanf("%d", &n);
	//memasukkan nilai variabel n kedalam kotak array yang sudah disediakan//
	char kotak[n];
	//meminta user untuk memasukkan char kedalam kotak array//
	for(i=0;i<n;i++){
		scanf(" %c", &kotak[i]);
	}
	//membuat perhitungan sesuai logika diatas//
	for(i=0;i<n;i++){
		for(b1=(n-i)-1;b1>0;b1--){
			printf(" ");//membuat ruang kosong terlebih dahulu//
		}
		for(b1=0;b1<=1;b1++){
			for(b11=0;b11<i;b11++){
				printf("%c", kotak[b11]);//meminta untuk membuat agar terbentuk kata dengan pola 1212//
			}
		}
		for(b1=n-i;b1>0;b1--){
			printf("%c", kotak[i]);//membuat kata yang sama namun berkurang disetiap baris//
		}
		for(b1=n-i;b1>1;b1--){
			printf("%c", kotak[i]);
		}
		for(b1=0;b1<=1;b1++){
			for(b11=i-1;b11>=0;b11--){
				printf("%c", kotak[b11]);//membuat kata agar terbentuk pola 2121//
			}
		}
		
		printf("\n");
	}
	// ini bagian reverse dari atas//
	for(i=n-2;i>=0;i--){//namun dikurang 2 agar hasilnya bisa pas membentuk heksagonal//
		for(b1=(n-i)-1;b1>0;b1--){
			printf(" ");
		}
		
		for(b1=0;b1<=1;b1++){
			for(b11=0;b11<i;b11++){
				printf("%c", kotak[b11]);//membuat susunan kata agar berpola 1212//
			}
		}
		for(b1=n-i;b1>0;b1--){
			printf("%c", kotak[i]);
		}
		for(b1=n-i;b1>1;b1--){
			printf("%c", kotak[i]);
		}
		for(b1=0;b1<=1;b1++){
			for(b11=i-1;b11>=0;b11--){
				printf("%c", kotak[b11]);//membuat susukan kata agar berpola 2121 atau reverse dari yang atas//
			}
		}
		printf("\n");
	}
	// memeriksa apakah hasil ascii ganjil atau genap//
	for(i=0;i<n;i++){// tidak lupa memakai for terlebih dahulu//
	jumlah = jumlah + kotak[i];
	}
	
	if((jumlah%2)==0){
		printf("halo loki.\n");
	}else{
		printf("good bye my friend.\n");
	}
	return 0;
	
}