// Kullanıcıdan iki adet sayı alıp bunların adreslerini pointerlara atan daha sonrasında pointerları kullanarak bu sayıları toplayan program.

#include <stdio.h>

int main(){
    int sayi1, sayi2, *sayi1p, *sayi2p;

    printf("Ilk sayiyi giriniz: ");
    scanf("%d", &sayi1);
    printf("Ikinci sayiyi giriniz:");
    scanf("%d", &sayi2);

    sayi1p = &sayi1;
    sayi2p = &sayi2;

    int toplam = (*sayi1p + *sayi2p);

    printf("Toplam = %d", toplam);

    return 0;
}