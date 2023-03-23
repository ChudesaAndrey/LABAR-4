#include "expect.h"
#include <stdbool.h>

bool check(int a, int b, int c){
    return (a+b>c && c+b>a && a+c>b);
    }

int perimetr(int a, int b, int c){
    return a + b + c;
    }

float square(int a, int b, int c){
    return ((a+b+c)/2 * ((a+b+c)/2 - a) * ((a+b+c)/2 - b) * ((a+b+c)/2 - c));
    }
