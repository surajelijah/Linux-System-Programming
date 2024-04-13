#include<stdio.h>
#include<stdlib.h>
#include "ll.h"


int main(){

    ll* head=(ll*)malloc(sizeof(ll));

    head->data=12;
    head->prev=NULL;
    head->next=NULL;


    ll* node=(ll*)malloc(sizeof(ll));

    node->data=12;
    node->prev=NULL;
    node->next=NULL; 

    list_insertion(head,node);
    print_list(head);


    return 0;
}