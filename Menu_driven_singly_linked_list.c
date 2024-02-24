//menu driven singly linked list c program
#include<stdio.h>
#include<stdlib.h>
//representing a node
struct node{
int data;
struct node *next;
};
typedef struct node nd;
nd *start=NULL;
//creating node
nd* getnode(){
nd * newnd=(nd*)malloc(sizeof(nd));
newnd->next=NULL;
return newnd;
}
void insert_start(int);
void insert_end(int);
void insert_after(int,int);
void delete_start();
void delete_last();
void delete_after(int);
void traverse();
void search(int);

int main(){
int menu;
int v,v1;
while(1){
printf("1:insert at start\t2:insert after given value\t3:insert at end\n");
printf("4:delete at start\t5:delete after given value\t6:delete at end\n");
printf("7:traverse through the list\t8:search the list\t9:exit\n");
printf("enter your choice");
scanf("%d",&menu);
switch(menu){
case 1:
  printf("enter the value to insert : ");
  scanf("%d",&v);
  insert_start(v);
  break;
case 2:
  printf("provide after which value do you want to insert : ");
  scanf("%d",&v);
  printf("enter the value to insert : ");
  scanf("%d",&v1);
  insert_after(v,v1);
  break;
case 3:
  printf("enter the value to insert: ");
  scanf("%d",&v);
  insert_end(v);
  break;
case 4:
  printf("deleting first node\n");
  delete_start();
  break;
case 5:
  printf("provide value to delete the next node : ");
  scanf("%d",&v);
  delete_after(v);
  break;
case 6:
  printf("deleting the last node\n");
  delete_last();
  break;
case 7:
  printf("elements in the list:\n");
  traverse();
  break;
case 8:
  printf("enter value to search: ");
  scanf("%d",&v);
  search(v);
  break;
case 9: exit(0);
  default:
    printf("invalid entry\n");
    break;
}
}
return 0;
}
//inserting a node at the beginning
void insert_start(int v){
nd *nn=getnode();
nn->data=v;
nn->next=start;
start=nn;
}
//insert node at the end 
void insert_end(int v){
nd *nl=getnode();
nl->data=v;
nl->next=NULL;
nd *temp=start;
while(temp->next!=NULL){
temp=temp->next;
}
temp->next=nl;
}
//insert_after a particular value 
void insert_after(int v1,int v2){
nd *na=getnode();
na->data=v2;
nd *temp =start;
  //while(temp->data!=v1)
    //temp=temp->next;
  //na->next=temp->next;
  //temp->next=na;
//this also can be used
//only difference is that when the value is not found the while loop continues
//and it won't stop, in the above way
//here it prints an message if it is not found
while(temp!=NULL){
if(temp->data==v1){
na->next=temp->next;
temp->next=na;
return;
}
else 
  temp=temp->next;
}
printf("Value not found\n");
}
//deleting the first node
void delete_start(){
nd *temp=start;
if(temp==NULL){
  printf("underflow");
return;
}
start=start->next;
temp->next=NULL;
free(temp);
}
//delete last node
void delete_last(){
nd * temp=start;
nd *prev;
if(temp==NULL){
printf("underflow\n");
return;
}
while(temp->next!=NULL){
  prev=temp;
temp=temp->next;
}
prev->next=NULL;
free(temp);
}
//deleting a node after a certain node data
void delete_after(int v){
nd *temp=start;
nd *prev;
if(temp==NULL){
printf("underflow\n");
return;
}
while(temp!=NULL){
if(v==temp->data){
prev=temp;
temp=prev->next;
prev->next=temp->next;
temp->next=NULL;
free(temp);
return;
}
else{
prev=temp;
temp=temp->next;
}
}
printf("data not found\n");
}
//traversing linked list
void traverse(){
  nd *temp=start;
  if(temp==NULL){
    printf("empty list\n");
    return;
  }
while(temp!=NULL){
printf("%d\t",temp->data);
temp=temp->next;
}
printf("\n");
}
//searching linked list
void search(int v){
nd *temp=start;
  if(temp==NULL){
    printf("empty list\n");
    return;
  }
while(temp!=NULL){
if(v==temp->data){
printf("found it in the list \n");
  return;
}
else
  temp=temp->next;
}
printf("not found\n");
}
