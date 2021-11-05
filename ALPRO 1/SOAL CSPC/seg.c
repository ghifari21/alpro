#include <stdio.h>
int main(){
	//kotak angka
	int a, b, c;
	//masukan user
	scanf("%d", a);
	scanf("%d", b);
	scanf("%d", c);

	//memeriksa masukan
	if((a == b) && (a == c)){
		printf("segitiga sama sisi\n");
	}
	else if((a == b == c)){
		printf("segitiga sama kaki\n");
		}
	else if((a != b != c)){
		printf("segitiga sembarang\n");
	}
	return 0;
}
	
