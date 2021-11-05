#include <cstdio>

int main(){
    char str[100];

    fgets(str, sizeof(str), stdin);
    printf("%s\n", str);

    return 0;
}