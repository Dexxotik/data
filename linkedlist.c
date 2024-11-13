#include<stdlib.h>
#include<stdio.h>
struct queue
{
int data;
struct queue*next;
};
typedef struct queue node;
node*front=NULL;
node*rear=NULL;
node*getnode()
{
node*temp;
temp=(node*)malloc(sizeof(node));
printf("\n enter data");
scanf("%d",&temp->data);
temp->next=NULL;return
temp;
}
void insertQ()
{
node*newnode;
newnode=getnode();
if(newnode==NULL)
{
printf("\nQueue full");
return;
}
if(front==NULL)
{
front=newnode;
rear=newnode;
}
else{
rear->next=newnode;
rear=newnode;
}
printf("\n\n\tData inserted into the queue");
}
void deleteQ(){
node*temp;
if(front==NULL){
printf("\n\n\t Empty queue");
return;
}
temp=front;
front=front->next;
printf("\n\n\tDeleted element from queue is %d",temp->data);free(temp);
}
void displayQ(){
node*temp;
if(front==NULL){
printf("\n\n\t Empty queue");
}
else
{
temp=front;
printf("\n\n\n\n\tElements in the queue are");
while(temp!=NULL){
printf("%5d",temp->data);
temp=temp->next;
}
}
}
char menu()
{
char ch;
printf("\n\tQueue operations using pointers");
printf("\n\t---------*********---------\n");
printf("\n1.Insert");
printf("\n2.Delete");
printf("\n3.Display");
printf("\n4.Quit");
printf("\n Enter your choice :");
scanf("%c",&ch);
return ch;
}
void main(){
char ch;
do{
ch=menu();
switch(ch)
{
case '1':
insertQ();
break;
case '2':
deleteQ();
break;
case '3':
displayQ();
break;
case '4':
return;
}
}while(ch!='4');
}

