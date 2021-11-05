#include <stdio.h>
int main(){
	//tiga kotak karakter
	char ca, cb, cc;
	//masukan user utk 3 kotak karakter
	scanf("%c %c %c", &ca, &cb, &cc);
	
	//membuat 3 kotak integer
	int a=0, b=0, c=0;

	//periksa konsonan
	if((ca != 'a') && (ca !='i')
		&& (ca != 'u') && (ca != 'e')
		&& (ca != 'o')){
		a = 1;
	}
	//periksa vokal
	if((cb != 'a') && (cb !='i')
		&& (cb != 'u') && (cb != 'e')
		&& (cb != 'o')){
		b = 1;
	}
	if((cc != 'a') && (cc !='i')
		&& (cc != 'u') && (cc != 'e')
		&& (cc != 'o')){
		c = 1;
	}
	//memeriksa memenuhi syarat atau tidak
	if((a == 1) && (b == 1) && (c == 1)){
		printf("memenuhi syarat\n");
	}
	else{
		printf("tidak memenuhi syarat\n");
	}

	return 0;
}