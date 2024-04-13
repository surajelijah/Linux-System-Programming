#include "file.h"

#define SQUARE(x) ((x)*(x))


int square(int x){
    return x*x;
}

int main(){

    int a=12;

    square(SQUARE_DEFAULT_VALUE);
    SQUARE(a);

    return 0;
}