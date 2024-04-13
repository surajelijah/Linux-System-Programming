#include "B.h"
#include "A.h"


int main(){

    int a,b,c;

    c= max(a,b);

    c= min(a,b);

    return 0;
}

// Now what happens if we have multiplt inclusions of the header files is that we would get multiple decalrations of
// the same variable or functions

// In the above case we have A.h inside B.h and also explicitly added in this file, so when B.h gets expanded we get A.h and we have
// A.h explixitly present in the this file , we have two A.h inclusions here which would give us contents present in A.h twice

// So when such a file is compiled we get multiple delcarations see the output of the file.i you would see two declalrations of the
// sum function

// We need to explicitly check for mutiple decalrations of header files using the #ifndef directive