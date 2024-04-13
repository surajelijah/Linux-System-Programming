#include<stdio.h>
#include<memory.h>
#include<string.h>
#include<assert.h>
// #include<stdlib.h> - Standard malloc given by C library is declared in this header file


void* ownmalloc(int size){

    void* ptr;

    ptr=sbrk(0); // Get the current break pointer

    if(ptr==NULL)
        return NULL;

    return ptr;
}

void ownfree(int nbytes){

    assert(nbytes>0);
    sbrk(nbytes * (-1)); // Mutiplied with -1 to move the break pointer in the other way

}


// This program compiles on Linux Operating Systems because sbrk system call is Linux system call
int main(){

    char* p= (char*)ownmalloc(20);
    strncpy(p,"Hello",strlen("Hello"));
    printf("%s\n",p);
    ownfree(20); // We have given the number of bytes to free

    // But we do not remember the number of bytes to free but give a pointer in standard free function
    // This free function sets the break pointer to address
    //          address - nbytes
    // This free function will free the contiguous allocates heap memory

    return 0;
}