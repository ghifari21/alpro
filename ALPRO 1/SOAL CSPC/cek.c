#include <stdio.h>
int main() {
	//kotak angka
	int a;
	//masukan user
	scanf("%d", &a);

	//memeriksa kemungkinan
	if((a >= 1000)){
		printf("ribuan\n");
	}
	if((a < 1000) && (a >= 100)){
		printf("ratusan\n");
	}
	if((a < 100) && (a >= 10)){
		printf("puluhan\n");
	}
	if((a >= 1) && (a < 10)){
		printf("satuan\n");
	}
	return 0;
}