// Kullanıcıdan alınan bir dizinin tersine çevrilmesi

#include <stdio.h>
int main(){
    int dizi_buyuklugu;
    printf("Olusturmak istediginiz dizinin buyuklugunu giriniz: ");
    scanf("%d", &dizi_buyuklugu);

    int dizi[dizi_buyuklugu];

    for(int i=0; i < dizi_buyuklugu; i++){
        printf("%d. elemani giriniz: ", (i+1));
        scanf("%d", &dizi[i]);
    }

    int temp;
    for(int i = 0; i < dizi_buyuklugu/2; i++){ // "/2" yapmamızın sebebi aynı elemanları tekrar çevirmemek.  Eğer <= yaparsak ortadaki elemanı tekrar çevirmiş oluruz.
        temp = dizi[i];
        dizi[i] = dizi[dizi_buyuklugu - 1 - i];
        dizi[dizi_buyuklugu - 1 - i] = temp;
    }  

    for(int i = 0; i < dizi_buyuklugu; i++){
        printf("%d.eleman= %d\n", (i+1), dizi[i]);
    }

    return 0;
}