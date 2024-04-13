#include "B.h" // This is the declaration of the function

int main(){

    int a;
    a=sum(1,2); // Usage of the function
    
    return 0;
}


/*

Now in this file there is no definition but we have declaration and uasge, so this will also compile

So Compiler does not need the definition to compile, defintion is needed by the linker

Now we compile this file - gcc -c B.c ( we get an object file B.o ) 

*/