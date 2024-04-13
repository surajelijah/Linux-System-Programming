struct emp_t{

        char name[32];
        unsigned int emp_id;
        struct occ_t occ; // Complete Usage
};

struct occ_t{

        char designation[32];
        unsigned int salary;
        struct emp_t boss; // Complete Usage
};


/*

In the above the compiler doesn't know the sizes so it would not compiler this file

Now compile this - gcc -c A.c

$ gcc -c A.c
A.c:5:22: error: field 'occ' has incomplete type
         struct occ_t occ; // Complete Usage

*/