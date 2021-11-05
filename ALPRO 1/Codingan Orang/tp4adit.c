#include <stdio.h>

int main(){
	int i,i2,i3,i4; //iterator baris
	int j,j2,j3,j4; //iterator kolom
	int n;
	char h;
	scanf("%d\n", &n);
	scanf(" %c", &h);
	
	//Mengatur i 1
		for(i=0; i<1; i++){
			for(j=0; j<n; j++){
				printf(" ");
			}
			for(i=0; i<n; i++){
				printf("*");
			}
			if((h == 'A')||(h == 'a')||(h == 'I')||(h == 'i')||(h == 'U')||(h == 'u')||(h == 'E')||(h == 'e')||(h == 'O')||(h == 'o')){
					for(i=0; i<(n*2); i++){
						printf(" ");
					}
			}else{
				for(i=0; i<(n*2); i++){
					printf(".,");
				}
			}
			for(j=0; j<n*2; j++){
				printf("*");
			}
		}	
	return 0;
}

	