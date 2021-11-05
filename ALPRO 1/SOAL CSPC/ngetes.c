#include <stdio.h>
int main()
{
	//deklarasi variable
	char ca, cb, cc, cd, ce, cf;
	int a=0, b=0, c=0, d=0, e=0, f=0;
	//masukan user
	scanf("%c %c %c %c %c %c", &ca, &cb, &cc, &cd, &ce, &cf);
	//memeriksa masukan
	if((ca != 'a') && (ca !='i')
		&& (ca != 'u') && (ca != 'e')
		&& (ca != 'o')){
		a = 1;
	}
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
	if((cd != 'a') && (cd !='i')
		&& (cd != 'u') && (cd != 'e')
		&& (cd != 'o')){
		d = 1;
	}
	//periksa vokal
	if((ce != 'a') && (ce !='i')
		&& (ce != 'u') && (ce != 'e')
		&& (ce != 'o')){
		e = 1;
	}
	if((cf != 'a') && (cf !='i')
		&& (cf != 'u') && (cf != 'e')
		&& (cf != 'o')){
		f = 1;
	}

	//memeriksa
	if(((a == 1) && (b == 0) && (c == 1)
		&& (d == 0) && (e == 1) && (f == 0))
		|| (a == 0) && (b == 1) && (c == 0)
		&& (d == 1) && (e == 0) && (f == 1)){
		printf("kombinasi valid\n");
	}else{
		printf("kombinasi tidak valid\n");
	}

	return 0;
}