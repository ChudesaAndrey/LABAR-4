#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float s;
    int a, b, c, p, r;
    scanf("%d %d %d", &a, &b, &c);
    if (check(a, b, c)){
        p = perimetr(a, b, c);
        s = square(a, b, c);
        s = sqrt(s);
        printf("perimetr %d \n", p);
        printf("square %f", s);
        }
    else {printf("Error");
    }
    return 0;
}
