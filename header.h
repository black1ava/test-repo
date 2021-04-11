#include<stdlib.h>
#include<stdio.h>

#ifndef HEADER_H
#define HEADER_H

typedef struct linkedList{
  int data;
  struct linkedList *next;
}

linkedList *append(linkedList **header, int data){
  linkedList *temp = (linkedList*)malloc(sizeof(linkedList));
  temp -> data = data;
  temp -> next = *header;
  headet = temp;
  
  return *header;
}

#endif
