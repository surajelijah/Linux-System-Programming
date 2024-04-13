#include<stdio.h>
#include "ll.h"

void list_insertion(ll* head,ll* node){

    if(head)
    {
        while(head->next)
            head=head->next;
        head->next=node;
        node->prev=head;
    }
    return;
}


void print_list(ll* head)
{
    printf("List contents\n");
     for(;head;head=head->next){
         printf("%d ",head->data);
     }
}