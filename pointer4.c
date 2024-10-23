// Kullanıcıdan alınan bir diziyi pointerlar kullanılarak küçükten büyüğe sıralayan program.

#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("Dizinin eleman sayisini giriniz: ");
    int n, temp, *p, min;
    scanf("%d", &n);
    int dizi[n];
    p = dizi;

    for (int i = 0; i < n; i++){
        printf("%d. elemani giriniz: ", (i+1));
        scanf("%d", (p+i));
    }

    printf("Dizinin ilk hali:\n");

    for (int i = 0; i < n; i++){
        printf("%d ", *(p+i));
    }

    // Diziyi küçükten büyüğe sıralama kısmı - Selection Sort
    
    for (int i = 0; i < n - 1; i++){ // dizin son elemanı zaten sona kalan ve en büyük eleman olmuş olacak. onu hesaba katmaya gerek yok.
        min = i;

        for(int j = i+1; j < n; j++){
            if( *(p+j) < *(p+min)){  // "min" ile kıyaslanması önemli. eğer ki "i" ile kıyaslarsan mantık çok çok yanlış olur!!!
                min = j;
            } 
        }

        temp = *(p+i);
        *(p+i) = *(p+min);
        *(p+min) = temp;
    }

    printf("\n");

    // Dizi küçükten büyüğe sıralandır. Şimdi dizinin sıralanmış halini yazdıralım.

    printf("Dizinin kucukten buyuge siralanmis hali:\n");
    for(int i = 0; i < n; i++){
        printf("%d ", *(p+i));
    }

    return 0;
}