// Aynı değerlere değişken ve pointer kullanarak ulaşmak.

#include <stdio.h>

int main(){

    int * ip, id;
    id = 21;
    ip = &id;

    printf("id degiskeni degeri: %d\n", id);
    printf("id degiskeni degeri: %d\n", *ip);
    printf("id degiskeni bellek adresi: %p\n", &id);
    printf("id degiskeni bellek adres: %p", ip);
    return 0;
}