#include<stdio.h>
#include<stdlib.h>
#define size 10
void enQueue(int);
void deQueue();
void display();
int queue [size], front = -1, rear = -1;
int main()
{
int value, choice;
while(1) {
printf("\n****MENU****\n");
printf("1. Insertion\n 2. Deletion\n 3.Display\n 4. Exit\n");
printf("Enter your choice: ");
scanf("%d",&choice);
switch(choice) {
case 1: printf("Enter the value to be insert: ");
scanf("%d",&value);
enQueue (value);
break;
case 2: deQueue();
break;
case 3: display();
break;
case 4: exit(0);
default: printf("\n Wrong selection!! Try again!!");
break;
}
}
}
void enQueue(int value) {
if(rear==size-1) 
printf("\nQueue is full!! Insertion not possible");
else {
if (front == -1)
front = 0;
rear++;
queue[rear]=value;
printf("\nInsertion success!!");
}
}
void deQueue() {
if (front==-1||front>rear)
printf("\nQueue is Empty!! Deletion is not possible");
else {
printf("\nDeleted: %d", queue[front]);
front++;
}
}
void display() {
if(rear==-1||front>rear)
printf("\nQueue is Empty now!!");
else {
int i;
printf("\nQueue elements are:\n");
for(i=front;i<=rear; i++)
printf("%d\t",queue[i]);
}
}
