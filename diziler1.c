// Kullanıcıdan 5 elemanlı bir dizi alınması ve bunun yazdırılması

#include <stdio.h>

int main(){
    int dizi[5];
    for(int i = 0; i < 5; i++){
        printf("%d.elemani giriniz: ", (i+1));
        scanf("%d", &dizi[i]);
    }

    for(int i = 0; i < 5; i++){
        printf("%d.eleman: %d\n",(i+1), dizi[i]);
    }

    return 0;
}