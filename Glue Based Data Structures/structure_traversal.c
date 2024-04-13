#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define offset(struct_name,field_name)  \
        (unsigned int)&(((struct_name*)0)->field_name)

#define glnode_to_employee(struct_name,glthread_name,glnode) \
        (struct_name*)((unsigned int)glnode - (sizeof(struct_name)- sizeof(glthread_node)))


typedef struct glthread_node_{

                                                // No void* data in the Glue based Way to store the data
                struct glthread_node_ *next;
                struct glthread_node_ *prev;
            
            }glthread_node_t;



typedef struct emp_{

            char name[30];  // padding bytes are added here which is 2 bytes
            unsigned int salary;
            char designation[30]; // padding bytes are added here which is 2 bytes
            unsigned int emp_id;

            glthread_node_t glnode; 
     }emp_t;

void print(glthread_node_t* glnode)
{

    emp_t* emp=(emp_t *)((unsigned int)glnode - (sizeof(emp_t)- sizeof(glthread_node_t)));
    printf("glnode address = %d\nstructure address = %d\n",glnode,emp);

    printf("Name = %s\nSalary = %d\nDesignation = %s\nEmp_ID = %d",emp->name,emp->salary,emp->designation,emp->emp_id);
    return;
}


void print_using_macro(glthread_node_t* glnode)
{
    
    unsigned int name_offset= offset(emp_t,name); // name_offset is 0
    unsigned int salary_offset= offset(emp_t,salary); // salary_offset is 32 ( 30 + 2 padding bytes)
    unsigned int designation_offset= offset(emp_t,designation); // designation_offset is 36 (32 + 2)
    unsigned int emp_id_offset= offset(emp_t,emp_id); // emp_id_offset is 68 ( 36 + 30 + 2 padding bytes ) 
    printf("\nOffsets \nName Offset = %d\nSalary Offset = %d\nDesgination Offset = %d\nEmp_ID Offset = %d\n",name_offset,salary_offset,designation_offset,emp_id_offset);

    unsigned int starting_address=((unsigned int)glnode - (sizeof(emp_t)- sizeof(glthread_node_t)));
    printf("\nName = %s\nSalary = %d\nDesignation = %s\nEmp_ID = %d\n",(starting_address+name_offset),*(unsigned int*)(starting_address+salary_offset),(starting_address+designation_offset),*(unsigned int*)(starting_address+emp_id_offset));

    return;
}

int main(){

    struct emp_ emp={"John",120,"TA",112,{NULL,NULL}};

    strcpy(emp.name,"John");
    emp.salary=120;
    strcpy(emp.designation,"TA");
    emp.emp_id=112;

    //print(&emp.glnode);
    print_using_macro(&emp.glnode);
    return 0;
}