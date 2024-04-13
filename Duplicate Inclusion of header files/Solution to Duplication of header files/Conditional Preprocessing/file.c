#define A 10
#define B 20
#define square(x) ((x)*(x))

#ifdef A // This returns true so the code between this ifdef and endif is included
#include "A.h"
#endif

#undef A // Undefine the macro A

#ifdef A // This returns false so the code between this ifdef and endif is not included
#include "B.h"
#endif

#ifndef A // This returns true
int const T = square(B);
#else
int const T = square(A);
#endif

int main(){

    return 0;
}

// See the file.i to see what has been included


// Now remember we can use preprocessor directives where ever we want
// So we can include the needed code as required and remove them from the source code and make them a proper translation unit
// as reuired for compilation