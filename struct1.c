// Struct tanımlanması ve kullanımı

#include <stdio.h>

typedef struct{
    int x;
    int y;
}POINT;

/* typedef kullanılmamış hali 
struct POINT{
int x;
int y;
};
*/

int main(){
    POINT p1; //typedef kullanmasaydım struct POINT p1; şeklinde yazmam gerekirdi.
    p1.x = 216;
    p1.y = 23;

    printf("x = %d\n", p1.x);
    printf("y = %d", p1.y);

    return 0;
}