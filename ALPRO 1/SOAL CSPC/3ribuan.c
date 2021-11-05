#include <stdio.h>
int main(){
	//deklarasi variable
	int a=0, b=0, c=0, d=0, e=0, f=0;
	int aa, ab, ac, ad, ae, af;
	//masukan user
	scanf("%d %d %d %d %d %d", &aa, &ab, &ac, &ad, &ae, &af);

	//memeriksa masukan
	if(aa >= 1000){
		a = 1;
	}
	if(ab >= 1000){
		b = 1;	
	}
	if(ac >= 1000){
		c = 1;
	}
	if(ad >= 1000){
		d = 1;
	}
	if(ae >= 1000){
		e = 1;
	}
	if(af >= 1000){
		f = 1;
	}

	//memeriksa masukan
	if((a + b + c + d + e + f ) >= 3){
		printf("ribuan 3 atau lebih\n");
	}else{
		printf("tidak valid\n");
	}

	return 0;
}