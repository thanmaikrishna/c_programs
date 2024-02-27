//menu driven doubly linked list
#include<stdio.h>
struct Node{
struct Node *prev;
int data;
struct Node *next;
};
typedef struct Node node;
node *start=NULL;
