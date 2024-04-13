#include<stdio.h>
#include<stdlib.h>
#include "bitmap.h"

bitmap_t* bitmap_create(int n_bits){

    int arr_size=n_bits/8;
    if(n_bits%8)
        arr_size+=1;

    bitmap_t* bitmap = (bitmap_t*)calloc(1,sizeof(bitmap_t));
    bitmap->bit_arr = (char*)calloc(arr_size,sizeof(char));
    bitmap->arr_size=arr_size;

    return bitmap;
}
void bitmap_print(bitmap_t *bitmap){

    for(int byte_index=0; byte_index < (bitmap->arr_size);byte_index++)
    {
        char c = bitmap->bit_arr[byte_index];
        for(int bit_index=8;c>0 || bit_index >0;c=c>>1,bit_index--)
            (c & 1)?printf("1"):printf("0");
    }
    printf("\n");
    return;
}
void bitmap_set_bit(bitmap_t* bitmap,int index){

        bitmap->bit_arr[index/8]= bitmap->bit_arr[index/8] | (1<<(index%8 - 1));

}
int bitmap_is_bit_set(bitmap_t* bitmap,int index){

    return (bitmap->bit_arr[index/8] & (1<<(index%8 - 1)))?1:0;
    
}
void bitmap_set_all(bitmap_t* bitmap){

    for(int byte_index=0; byte_index < (bitmap->arr_size);byte_index++)
    {
        char c = bitmap->bit_arr[byte_index];
        bitmap->bit_arr[byte_index]=(c | (~c));
    }

    /* A way to do it is if the size of the array is 32bit then

        We can use a uint32_t pointer and set the bits to 1;
        
        uint32_t * arr= (uint32_t*)bitmap->bit_arr;

        *arr = set the value to the maximum value of the uint32_t
    */
    return;
}