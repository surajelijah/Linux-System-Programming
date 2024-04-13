#include "B.h"
#include "A.h"


/*
   It is the A.h that is being included twice ,so we check for it, 

                #ifndef __A_H__
                #include "A.h"
                #endif

   But here we know that A.h is being included twice but if there are
   many header files then we have to know which are being included more than once

   So instead of making the changes in this file we make the change in the header files with conditional preprocessor directives
   in every header file so that for every header file we check the inclusion

   So see the header files for the changes

   and then see the file.i we see that now we see only one delcaration of the sum function

   So always include the Conditional Preprocessors in the Header Files

*/


int main(){

    int a,b,c;

    c= max(a,b);

    c= min(a,b);

    return 0;
}

// Now ususally what happens if we have multiple inclusions of the header files is that we would get multiple decalrations of
// the same variable or functions

// In the above case we have A.h inside B.h and also explicitly added in this file, so when B.h gets expanded we get A.h and we have
// A.h explixitly present in the this file , we have two A.h inclusions here which would give us contents present in A.h twice

// So when such a file is compiled we get mutiple delcarations
// But seems these are now taken care by the Preprocessor where apparently it check fot multiple inclusions and only includes the
// file once even if they are mutiple decalrations

// But even then we need to explicitly check for mutiple decalrations of header files using the #ifndef directive


/* --------------------------------SOLUTION-------------------------------------------------------

We use the Conditional Preprocessor Directives to check for the inclusion the header file

Now how do we check it 

We use the #ifndef directive 


                #ifndef __HEADER_H__  // we check if the file is already included, if not then we include the file
                #include "HEADER.h"
                #endif

Now observe the convention followed for the macro name of the Header File

 If Header File is A.h then the macro name is __A_H__ (double underscore,name of the header file,underscore,letter H, double underscore)

 It can be either __A_H__ or __A__

*/
