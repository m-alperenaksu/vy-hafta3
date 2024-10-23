// Bir dizinin küçükten büyüğe doğru sıralanması


#include <stdio.h>

int main(){
    int sayilar[10] = {7, 3, 19, 1, 15, 11, 5, 17, 9, 13};
    int min, temp;


    // Selection Sort
    for(int i = 0; i < 9; i++){ // dizin son elemanı zaten sona kalan ve en büyük eleman olmuş olacak. onu hesaba katmaya gerek yok.
        min = i;
        for(int j = i+1; j<10; j++ ){
            if(sayilar[j]<sayilar[min]){ // "min" ile kıyaslanması önemli. eğer ki "i" ile kıyaslarsan mantık çok çok yanlış olur!!!
                min = j;
            }
            
        }
            temp = sayilar[i];
            sayilar[i] = sayilar[min];
            sayilar[min] = temp;
    }

    for(int i = 0; i < 10; i++){
        printf("%d.eleman= %d\n", (i+1), sayilar[i]);
    }

    return 0;
}