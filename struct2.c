// ogrenci structını oluşturma ve kullanıcıdan alınan girdilerle bir ödnek oluşturma.

#include <stdio.h>

typedef struct{
    char ad[20];
    char soyad[20];
    int numara;
    int sinif;
}ogrenci;

int main(){
    ogrenci o1;

    printf("Ad giriniz: ");
    scanf("%s", &o1.ad);
    printf("Soyad giriniz: ");
    scanf("%s", &o1.soyad);
    printf("Numara giriniz: ");
    scanf("%d", &o1.numara);
    printf("Sinif giriniz: ");
    scanf("%d", &o1.sinif);

    printf("Ogrenci bilgileri:\n"),
    printf("Ad: %s\n", o1.ad);
    printf("Soyad: %s\n", o1.soyad);
    printf("Numara = %d\n", o1.numara);
    printf("Sinif = %d\n", o1.sinif);
    return 0;
}