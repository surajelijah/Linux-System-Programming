// There is no declaration of the function

int main(){

    int a;
    a=sum(1,2); // Usage of the function
    
    return 0;
}

/*

Now in this file we do not have a declaration but we have used the function

So remember we are not creating an executable but we are compiling - gcc -c C.c

We get an object file generated that is C.o but we get a warning 


$ gcc -c C.c
C.c: In function 'main':
C.c:6:7: warning: implicit declaration of function 'sum' [-Wimplicit-function-declaration]
     a=sum(1,2); // Usage of the function
       ^~~

If it was linking then we would not get an executable


*/