
typedef struct dll_node_{
	void* data;
	struct dll_node_* next;
        struct dll_node_* prev;	
}dll_node;

typedef struct dll_list_{
	dll_node *head;
}dll_list;

dll_list* create_list();

void insert(dll_list **dll,void* data);

