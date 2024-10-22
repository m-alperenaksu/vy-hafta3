// Kullanıcıdan 5 elemanlı bir dinamik bellek alıp bu elemanların toplamını yazdırmak.

#include <stdio.h>
#include <stdlib.h>

int main(){
    int * sayilar = (int*) calloc(5,sizeof(int));

    for (int i = 0; i< 5; i++){
        printf("%d.elemani giriniz: ",(i+1));
        scanf("%d", &sayilar[i]);
    }

    int sum = 0;

    for (int i = 0; i<5; i++){
        sum += sayilar[i];
    }

    free(sayilar);
    printf("Toplam = %d", sum);
    

    return 0;
}