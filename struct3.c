// Oluşturulan POINT struct'ını dinamik bellekte yer tahsis ederek kullanma.

#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int x;
    int y;
}POINT;

int main(){
    POINT * p1 = (POINT *) malloc(sizeof(POINT));
    p1->x = 216; // Pointer vasıtasıyla  eriştiğim için böyle oldu. "p1.x" yanlış olurdu.
    p1->y = 31;

    printf("x = %d\n", p1->x);
    printf("y = %d", p1->y);
    return 0;
}