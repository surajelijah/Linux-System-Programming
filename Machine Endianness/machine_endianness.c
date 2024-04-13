#include<stdio.h>

int machine_endianess_type(){
    /*
        Big Endianness - return 1;
        Little Endianness - return 0;
    */
    unsigned int a = 1;    // Now 1 is stored in 4B 
    char c = *(char*)&a;   // We use the type cast it to char* to refer each byte of the 4B 

    /*
        In Big Endian - 1 in hexadecimal is  - 0x 00 00 00 01 

            Address   Value
            1004        00
            1003        00
            1002        00
            1001        01

            Now we type cast the &a is 1004 and we make the char* typecast to get the 1B from the Address 1004 which is 0 in Big Endian

        In Little Endian the value would be 1
    */
    return  (c)? 0:1;
}


int main(){

    (machine_endianess_type())?printf("\nThe machine is Big Endian\n"):printf("\nThe machine is Little Endian\n");

    return 0;
}