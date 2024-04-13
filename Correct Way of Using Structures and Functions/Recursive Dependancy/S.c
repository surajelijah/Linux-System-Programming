struct occ_t; //Forward Declaration

struct emp_t{

    char name[32];
    unsigned int emp_id;
    struct occ_t* occ; // Pointer Usage
};

struct occ_t{

    char designation[32];
    unsigned int salary;
    struct emp_t boss;
};


/*

In the above case the compiler was able to know the sizes so it would compile the structures

- Now we compile - gcc -c S.c

- Now we get a file S.o


*/