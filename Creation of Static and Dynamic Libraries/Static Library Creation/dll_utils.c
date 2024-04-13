#include "dll.h"
#include <stdlib.h>
#include <stdio.h>

void remove_data(dll_list **dll,void* data){

    if(dll_size(*dll)!=0){
    
    dll_node* node= (*dll)->head;
    while(node!=NULL && node!=data){
        node=node->next;
    }
    if(node!=NULL){
        if(node==(*dll)->head){
            (*dll)->head=node->next;
            node->prev=NULL;
        }
        else if(node->next==NULL)
        {
            node=node->prev;
            node->next=NULL;
        }
        else{
            node->prev->next=node->next;
            node->next->prev=node->prev;    
        }
    }
    return;
    }
    else
        printf("No Data in the list");
    return;
}


int dll_size(dll_list* dll){

    int count;
    dll_node* node=dll->head;
    for(count=0;node!=NULL;node=node->next)
        count++;
    return count;

}


void remove_list(dll_list** dll){
    (*dll)->head=NULL;
    return;
}