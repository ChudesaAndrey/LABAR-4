#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    double s;
    int a, b, c, p, r;
    scanf("%d %d %d", &a, &b, &c);
    if (check(a, b, c)){
        p = perimetr(a, b, c);
        s = square(a, b, c);
        s = sqrt(s);
        printf("perimetr %d \n", p);
        printf("square %lf", s);
        }
    else {printf("Error");
    }
    return 0;
