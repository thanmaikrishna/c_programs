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
}
void insert_start(int);
void insert_after(int,int);
void insert_end(int);
void delete_start();
void delete_after(int);
void delete_last();
void traverse();
void search(int);
