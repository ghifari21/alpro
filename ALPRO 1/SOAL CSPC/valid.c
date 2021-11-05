#include <stdio.h>
int main()
{
	//deklarasi variabel
	char ca, cb, cc;
	int a=0, b=0, c=0;
	//masukan user
	scanf("%c %c %c", &ca, &cb, &cc);

	//pemilihan kondisi huruf vokal
	if((ca == 'a') || (ca =='i')
		|| (ca == 'u') || (ca == 'e')
		|| (ca == 'o')){
		a = 1;
	}
	if((cb == 'a') || (cb =='i')
		|| (cb == 'u') || (cb == 'e')
		|| (cb == 'o')){
		b = 1;
	}
	if((cc == 'a') || (cc =='i')
		|| (cc == 'u') || (cc == 'e')
		|| (cc == 'o')){
		c = 1;
	}
	//pemeriksaan valid atau tidak
	if((a == 1) || (b == 1) || (c ==1)){
		printf("Valid\n");
	}else{
		printf("Tidak Valid\n");
	}
	return 0;
}