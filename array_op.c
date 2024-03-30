#include<stdio.h>
#include<stdlib.h>
int n,arr[];
void create();
void insert();
void delete();
void display();
int main(){
  int ch;
while(1){
printf("1:create\t2:insert\t3:delete\t4:display\t5:exit\nenter your choice:");
scanf("%d",&ch);
switch(ch){
case 1:
create();
break;
case 2:
insert();
break;
case 3:
delete();
break;
case 4:
display();
break;
case 5:
exit(0);
default: printf("invalid entry\n");
}
}
return 0;
}
void create(){
  printf("enter number of elements in array: ");
scanf("%d",&n);
printf("enter %d elements",n);
for(int i=0;i<n;i++)
  scanf("%d",&arr[i]);
printf("array is created\n");
}
void insert(){
int p,v;
  printf("enter position to insert: ");
scanf("%d",&p);
printf("enter element to insert : ");
scanf("%d",&v);
for(int i=n-1;i>=p-1;i--)
  arr[i+1]=arr[i];
arr[p-1]=v;
n++;
}
void delete(){
int p;
printf("enter position to delete: ");
scanf("%d",&p);
for(int i=p;i<=n;i++){
arr[i-1]=arr[i];
}
n--;
}
void display(){
printf("array elements are \n");
for(int i=0;i<n;i++)
  printf("%d\t",arr[i]);
}
