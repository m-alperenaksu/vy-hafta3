//Dinamik bellek kullanımı

#include <stdio.h>
#include <stdlib.h>

int main(){
    int * ip = (int*) malloc(sizeof(int));
    *ip = 216;
    printf("Tahsis edilen bellegin degeri = %d\n", *ip);
    printf("Tahsis edilen bellegin adresi = %p", ip);
    return 0;
}