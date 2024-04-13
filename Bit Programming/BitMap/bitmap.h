
#ifndef __BITMAP_H__
#define __BITMAP_H__

typedef struct bitmap_{

    char* bit_arr;
    int arr_size;
}bitmap_t;


bitmap_t* bitmap_create(int n_bits);
void bitmap_print(bitmap_t *bitmap);
void bitmap_set_bit(bitmap_t* bitmap,int index);
int bitmap_is_bit_set(bitmap_t* bitmap,int index);
void bitmap_set_all(bitmap_t* bitmap);

#endif