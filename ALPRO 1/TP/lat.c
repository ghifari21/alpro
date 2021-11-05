/*Saya Ghifari Octaverin 2000952 mengerjakan TP1 dalam mata
kuliah Algoritma dan Pemrograman 1 untuk keberkahanNya maka
saya tidak melakukan kecurangan seperti yang telah
dispesifikasikan. Aamiin
*/
#include <stdio.h>
int main(){
	int m, s, n, i, a, q;
	int jam, menit, detik;
//scan
	scanf("%d", &m); scanf("%d", &s); scanf("%d", &n);
//operasi aritmatika awal
	q = ((m * 60) + s) * n;
	i = q / 1800;
//operasi aritmatik hasil konversi waktu
	a = q + (i * 60);
	jam = a / 3600;
	menit = (a % 3600 / 60);
	detik = a % 60;
//hasil
	printf("Istirahat sebanyak : %d\n", i);
	printf("Total waktu yang diperlukan : %d jam %d menit %d detik\n", jam, menit, detik);

	return 0;
}