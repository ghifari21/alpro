#include <stdio.h>
int main(){
int n; scanf("%d", &n);
int tabInt[n];
int penghitung;
printf("masukkan angka:\n");
for(penghitung=0; penghitung<n; penghitung++){

scanf("%d", &tabInt[penghitung]);
printf("\n");
}
penghitung = 0;
int maks = 0;
while((maks <3) && (penghitung < n)){
if(tabInt[penghitung] % 2 == 0){
printf("%d\n", tabInt[penghitung]);
maks++;
}
penghitung = penghitung + 1;
}
return 0;
}