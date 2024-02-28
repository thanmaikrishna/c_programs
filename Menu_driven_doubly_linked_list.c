//menu driven doubly linked list
#include<stdio.h>
struct Node{
struct Node *prev;
int data;
struct Node *next;
};
typedef struct Node node;
node *start=NULL;
node *getnode(){
  node *newnode=(node*)malloc(sizeof(node));
  newnode->prev=NULL;
  newnode->next=NULL;
  return newnode;
}
void insert_start(int);
void insert_after(int,int);
void insert_end(int);
void delete_start();
void delete_input(int);
void delete_after(int);
void delete_last();
void traverse();
void search(int);
int main(){
  int ch,v,v1;
while(1){
printf("1:insert at start\t2:insert after provided value\t3:insert at end\n");
printf("4:delete start\t5:delete provided value\t6:delete after provided value\t7:delete last\n");
printf("8:traverse\t9:search for any value in the list\n");
switch(ch){
case 1: printf("enter inserting value: ");
scanf("%d",v);
insert_start(v);
break;
case 2: printf("after which value do you want to insert: ");
scanf("%d",v1);
printf("enter insert value: ");
scanf("%d",&v);
insert_after(v1,v);
break;
