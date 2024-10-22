// Bir dizinin küçükten büyüğe doğru sıralanması


#include <stdio.h>

int main(){
    int sayilar[10] = {19,17,15,13,11,9,7,5,3,1};
    int min, temp;

    for(int i = 0; i < 10; i++){
        min = i;
        for(int j = i+1; j<10; j++ ){
            if(sayilar[j]<sayilar[i]){
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