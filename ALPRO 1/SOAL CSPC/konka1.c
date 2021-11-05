#include <stdio.h>
int main(){
	//deklarasi variable
	char a, b, c;
	char x, y, z;
	int a1=0, b1=0, c1=0, x1=0, y1=0, z1=0; 
	//masukan user
	scanf(" %c %c %c %c %c %c", &a, &b, &c, &x, &y, &z);

	//memeriksa masukan
	if (((a>=65) && (a<=90)) || ((a>=97) && (a<=122)))
	{
		a1=1;
	}
	if (((b>=65) && (b<=90)) || ((b>=97) && (b<=122)))
	{
		b1=1;
	}
	if (((c>=65) && (c<=90)) || ((c>=97) && (c<=122)))
	{
		c1=1;
	}
	if (((x>=65) && (x<=90)) || ((x>=97) && (x<=122)))
	{
		x1=1;
	}
	if (((y>=65) && (y<=90)) || ((y>=97) && (y<=122)))
	{
		y1=1;
	}
	if (((z>=65) && (z<=90)) || ((z>=97) && (z<=122)))
	{
		z1=1;
	}

	//memeriksa kombinasi
	if (((a1 == 1) && (b1 == 0) && (c1 == 1) && (x1 == 0)
	&& (y1 == 1) && (z1 == 0)) || ((a1 == 0) && (b1 == 1)
	&& (c1 == 0) && (x1 == 1) && (y1 == 0) && (z1 == 1)))
	{
		printf("kombinasi valid\n");
	}else{
		printf("kombinasi tidak valid\n");
	}
		
	return 0;
}