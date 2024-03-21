//menu driven circular linked list
//in circular linked list last node points to the first node
#include<stdio.h>
#include<stdlib.h>
//representing the node
struct node{
int data;
struct node *next;
};
typedef struct node nd;
//creating a node
nd* getnode(){
nd* newnode=(nd*)malloc(sizeof(nd));
newnode->next=NULL:
  return newnode;
}
nd *start=NULL;
void insert_begin(int);
void insert_after(int,int);
void insert_end(int);
void delete_start();
void delete_after(int);
void delete_last();
void traverse();
void search(int);
int main(){
  int ch;
  int v,v1;
  while(1){
    printf("1:insert at start\t2:insert after the input value\t3:insert at the end\n")
    printf("4:delete start\t5:delete after the input value\t6:delete last\n");
    printf("7:traverse the list\t8:search for element\n");
    switch(ch){
      case 1:
      printf("enter value to insert : ");
      scanf("%d",&v);
      insert_start(v);
      break;
      case 2:
      printf("provide after which value to be inserted: ");
      scanf("%d",v);
      printf("enter value to insert : ");
      scanf("%d",&v1);
      insert_after(v1);
      break;
      case 3:
      printf("enter value to insert: ");
      scanf("%d",&v);
      insert_end(v);
      break;
      case 4:
      printf("deleting first node\n");
      delete_start();
      break;
      case 5:
      printf("provide after which value to delete: ");
      scanf("%d",&v);
      delete_after(v);
      break;
      case 6:
      printf("deleting last node\n");
      delete_last();
      case 7:
        printf("elements in the list are: \n");
        traverse();
        break;
      case 8:
        printf("input element to search: ");
        scanf("%d",&v);
        search(v);
      break;
  }

//inserting a node at the beginning
void insert_begin(int v){
nd *temp=start;
nd *nn=getnode();
  nn->data=v;
if(start->next==NULL){
  start=nn;
  nn->next=start;
  return;
}
  while(temp->next!=start){
    temp=temp->next;
  }
  nn->next=start;
  start=nn;
  temp->next=start;  
}
//inserting node at the end
void insert_end(int v){
  nd *temp=start;
nd *nn=getnode():
  nn->data=v;
if(start==NULL){
start=nn;
nn->next=start;
return;
}
while(temp->next!=start)
  temp=temp->next;
temp->next=nn;
nn->next=start;
}
//inserting a new node after a given value
void insert_after(int V1,int v2){
  nd *temp=start;
nd *nn=getnode();
  nn->data=v2;
if(start==NULL){
printf("no elements are there in the list\nnot found");
return;
}
while(temp->next!=start){
if(temp->data==v1){
nn->next=temp->next;
temp->next==nn;
return;
}
temp=temp->next;
}
if((temp->next==start) && temp->data ==v){
nn->next=start;
temp->next=nn;
  return;
}
printf("not found\n");
}
//deleting the first node
void delete_start(){
  nd *temp1=start;
nd *temp2=start;
if(start==NULL){
printf("underflow\n");
return;
}
while(temp2->next!=start){
temp2=temp2->next;
}
temp2=start->next;
start=start->next;
free(temp1);
}
//deleting the after node
void delete_after(int v)
nd *temp=start;
nd *prev;
if(start==NULL){
printf("underflow\n");
return;
}
while(temp->next==start){
if(temp->data==v){
prev=temp;
temp=temp->next;
prev->next=temp->next;
temp->next=NULL;
free(temp);
return;
}
prev=temp;
temp=temmp->next;
}
if((temp->next==start) && (temp->data)==v){
prev->next=start;
  temp->next=NULL;
  free(temp);
}
}
//deleting the last node
delete_last(){
nd *temp=start;
nd *prev;
  if(start==NULL){
printf("empty list\n");
    return;
  }
while(temp->next!=start){
prev=temp;
temp=temp->next;
}
prev->next=start;
temp->next=NULL;
free(temp);
}




