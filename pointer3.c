// Başlangıçta verilen bir dizideki elemanların toplamını pointer yardımıyla bulan program.

#include <stdio.h>

int main(){
    int dizi[10] = {2,55,12,645,23,57,1,38,45,234};

    int *p = dizi; // "dizi" ifadesi dizinin ilk elemanının adresini verir.
    int toplam = 0;

    for (int i = 0; i < 10; i++){
        toplam += *(p+i);
    }

    printf("Sayilarin toplami = %d'dir.", toplam);

    return 0;
}