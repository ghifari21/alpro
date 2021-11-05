#include <stdio.h>
int main(){
	//kotak angka
	int a, b, c;
	//masukan user
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);

	//memeriksa kemungkinan yang terjadi
	if((a > b) && (a > c)){
		//jika a paling besar
		if(b > c){
			printf("%d %d %d\n", a, b, c);
		}else{
			printf("%d %d %d\n", a, c, b );
		}
	}
	if ((b > a) && (b > c)){
		//jika b paling besar
		if(a > c){
			printf("%d %d %d\n", b, a, c);
		}else{
			printf("%d %d %d\n", b, c, a);
		}
	}
	if ((c > a) && (c > b)){
		//jika c paling besar
		if(a > b){
			printf("%d %d %d\n", c, a, b);
		}else{
			printf("%d %d %d\n", c, b, a);
		}
	}

	return 0;
}