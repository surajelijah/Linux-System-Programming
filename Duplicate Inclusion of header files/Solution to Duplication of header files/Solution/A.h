#ifndef __A_H__
#define __A_H__ 

// This is define as __A__ is a macro for the header file A.h the macro can be anything but as a convention we name it like that
// Basically we just define a macro in the header file , so when the header file is included , it defines that macro, now when we try to
// again include the header file we check if the header file has been included by checking the macro that we have defined for this
// purpose

#define max(a,b) (a>b)?a:b
int sum(int a,int b);

#endif