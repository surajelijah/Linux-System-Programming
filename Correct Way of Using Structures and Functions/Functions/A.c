
int sum(int a,int b); // This is the declaration of the function

int sum(int a, int b){  // This is the definition of the function
    return a+b;
}

int main(){

    int a;
    a=sum(1,2); // Usage of the function
    
    return 0;
}


/*

Now as seen in the Notes
    - To compile ( not create an executable ) a .c file we need to have the function declaration and the usage in the .c file

Then what about the definition
    - The definition of the function is needed when we link the file while creating the executable

Now in this file we have declaration and usage so we can compile this file  - gcc -c A.c ( we get an object file A.o )


Now in the this file A.c we have the defintion in the same file ( which is actaully not required while compiling this file but while
linking to create an executable)

*/