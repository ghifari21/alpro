#include <stdio.h>
int main(){
	//kota angka
	int a, b;
	//masukan user
	scanf("%d", &a);
	scanf("%d", &b);
	
	//memeriksa ganjil atau genap
	if(a % 2 == 0){
		printf("bilangan pertama genap\n");
	}else{
		printf("bilangan pertama ganjil\n");
	}
	if(b % 2 != 0){
		printf("bilangan kedua ganjil\n");
	}else{
		printf("bilangan kedua genap\n");
	}

	return 0;
}