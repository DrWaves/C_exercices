#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include <time.h>
#include "listmanip.h"

void list_insert_after( node* element, node* NodeToAdd, int nodevalue){
  if (NodeToAdd==NULL) {
    NodeToAdd=CreateNode (nodevalue);
  }

   if(NodeToAdd != NULL) {
    NodeToAdd->prev=element;
    if(element->next != NULL){
      node* following=(element->next);
      following->prev=NodeToAdd;
    }
    NodeToAdd->next=element->next;
    element->next=NodeToAdd;
  }
}
void list_insert_before( node* element, node* NodeToAdd,int nodevalue){
  if (NodeToAdd==NULL) {
    NodeToAdd=CreateNode (nodevalue);
  }
  if(NodeToAdd != NULL) {
    NodeToAdd->next=element;
    if(element->prev != NULL){
      node* previous=(element->prev);
      previous->next=NodeToAdd;
    }
    NodeToAdd->prev=element->prev;
    element->prev=NodeToAdd;
  }
}

struct node* CreateNode (int nodevalue){
  node* NewNode=(node*)malloc(sizeof(node*));
  assert(NULL != NewNode);
  NewNode->value=nodevalue;
  NewNode->prev=NULL;
  NewNode->next=NULL;
  return NewNode;
}

void DestroyNode(node* target){
  free(target);
}
void printNode (node * nodetoprint){
  printf("Node --- VALUE  :%d  NEXT %p  PREV %p\n", nodetoprint->value, nodetoprint->next, nodetoprint->prev);
}

struct node * list_get_first (node* const element){
  node* first= element;
  while(first->prev!=NULL){
    first= first->prev;
  }
  return first;
}

struct node * list_get_end (node* const element){
  node* end= element;
  while(end->next!=NULL){
    end= end->next;
  }
    printf("------LAST OF THE LIST------\n" );
  printNode(end);
  return end;
}
int CountNode (node* element){
  int count;
  if (element==NULL) {
    count=0;
    printf("THE LIST IS EMPTY\n");
  }
  else {
    count=1;
    node* first=list_get_first(element);
    while (first->next!= NULL) {
      count++;
      first=first->next;
    }
  }
  printf("%d ELEMENT IN THE LIST\n",count );
  return count;
}
void list_remove(node *element){
  if (element->next==NULL) {
    node * x = element->prev;
    x->next=NULL;
    DestroyNode(element);
  }
  else if (element->prev==NULL){
    node * x = element->next;
    x->prev=NULL;
    DestroyNode(element);
  }
  else{
    node * prevx = element->prev;
    node * nextx = element->next;
    prevx->next=nextx;
    nextx->prev=prevx;
    DestroyNode(element);
  }
}
void list_print (node* const element){
  if (element==NULL) {
    printf("THE LIST IS EMPTY\n");
  }
  else {
    node* first=list_get_first(element);

    printf("------PRINT TTHE LIST------\n" );
    while (first!= NULL) {
      printNode(first);
      first=first->next;
    }
  }
  }

  void list_free (node *element){
    if (element==NULL) {
      printf("THE LIST IS EMPTY\n");
    }
    else {
        node* first=list_get_first(element);
        node* temp;
      while (first!= NULL) {
        printf("\n ERASE ");
        printNode(first);
        temp=first->next;
        DestroyNode(first);
        first=temp;
      }
    }
  }
  struct node* list_get_node (int const index,node * element){
    int count=CountNode(element);
      node* getNode;
    assert(index<count);
    if (count==0) {
      printf("THE LIST IS EMPTY\n");
    }
    else {
      getNode=list_get_first(element);
      for (int i = 0; i < index; i++) {
        getNode=getNode->next;
      }
    }
      return getNode;
  }
