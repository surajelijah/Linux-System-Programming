#include "dll.h"
#include<stdlib.h>


dll_list* create_list()
{
	dll_list *dll=(dll_list*)malloc(sizeof(dll_list));
	dll->head=NULL;
	return dll;
}	

void insert(dll_list** dll,void* data)
{
	dll_node* head=(*dll)->head;
	dll_node* node=(dll_node*)malloc(sizeof(dll_node));
	node->prev=NULL;
	node->next=NULL;
	node->data=data;

	if(head!=NULL)
	{
	   while(head->next!=NULL)
	   	head=(dll_node*)head->next;
	   head->next=(dll_node*)node;
	   node->prev=(dll_node*)head;
	}
	else
	   (*dll)->head=node;
	return;
}


	
