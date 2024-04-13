#include<stdio.h>
#include "bitmap.h"


int main(){

    bitmap_t* bitmap = bitmap_create(32);

    bitmap_print(bitmap);
    
    bitmap_set_bit(bitmap,2);
    bitmap_print(bitmap);

    bitmap_set_bit(bitmap,5);
    bitmap_print(bitmap);
    
    printf("The Bit is %d\n",bitmap_is_bit_set(bitmap,5));

    bitmap_set_all(bitmap);
    bitmap_print(bitmap);

    return 0;
}