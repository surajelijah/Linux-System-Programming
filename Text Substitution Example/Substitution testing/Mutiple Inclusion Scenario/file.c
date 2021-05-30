#include "B.h"
#include "A.h" // here the file A has been explicitly included even though it is included in B


int main()
{
    int a,b,c;
    
    c=max(a,b);

    c=min(a,b);

    return 0;
}