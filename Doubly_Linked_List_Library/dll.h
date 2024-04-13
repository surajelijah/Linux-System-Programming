

#ifndef __dll__
#define __dll__

typedef struct dll_node_{
	void* data;
	struct dll_node_* next;
        struct dll_node_* prev;	
}dll_node;

typedef struct dll_list_{
	dll_node *head;
}dll_list;

// The source code for the below two functions is present in the dll.c
dll_list* create_list();
void insert(dll_list **dll,void* data);


// The source code for the below three functions is present in the dll_utils.c
void remove_data(dll_list **dll,void* data);
int dll_size(dll_list* dll);
void remove_list(dll_list** dll);


#endif
