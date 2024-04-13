#include "dll.h"
#include<stdio.h>
#include <string.h>
#include<stdlib.h>


typedef struct person{
	char* name;
	int roll;
}student;

void print_list(dll_list* dll)
{
	dll_node* head=dll->head;
	if(!head)
		printf("List is empty\n");
	else
	{

		while(head!=NULL)
		{
			printf("%s %d\n",((student*)(head->data))->name,((student*)(head->data))->roll);
			head=head->next;
		}
	}
	return;
}

dll_node* get_node_ptr(dll_list* dll, char* name){

	dll_node* node= dll->head;

	while(node!=NULL && strcmp(((student*)(node->data))->name,name)!=0)
			node=node->next;

	return node;
}

int main()
{
	printf("Hello DLL Library\n\n");
	
	FILE *fptr=fopen("input","r");
	dll_list* dll=create_list();
	if(!fptr)
		return 0;
	while(1)
	{
	student *s=(student*)calloc(1,sizeof(student));
	s->name= (char*)malloc(sizeof(char)*100);
	if(fscanf(fptr,"%s %d",s->name,&s->roll)!=EOF)
		insert(&dll,s);
	else
		break;
	}
	fclose(fptr);

	print_list(dll);
	printf("\nThe size of the List is %d\n",dll_size(dll));

	
	printf("\nJohn's record is removed\n");
	dll_node* node=get_node_ptr(dll,"John");
	remove_data(&dll,node);
	print_list(dll);
    printf("\nThe size of the List is %d\n",dll_size(dll));
	

	printf("\nRemoving the list\n");
	remove_list(&dll);
	printf("\nThe size of the List is %d\n",dll_size(dll));


	return 0;
}