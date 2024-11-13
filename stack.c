#include<stdio.h>
#include<stdlib.h>
#define size 5
int top = -1, item;
int stack[size];
void push()
{
if(top<size-1)
{
printf("\nEnter the element: ");
scanf("%d",&item);
top++;
stack[top] = item;
printf("%d is pushed into stack\n",item);
}
else
{
printf("the stack is overflowed\n");
}
}
void pop()
{
if(top==-1)
{
printf("%d is popped from stack\n", stack[top]);
top--;
}
}
void display()
{
if(top==-1)
{
printf("the stack is empty \n");
}
else 
{
for (int t=0;t<=top;t++)
{
printf("%d",stack[t]);
}
printf("\n");
}
}
void isfull()
{
if (top==-1)
{
printf("stack is empty\n");
}
else if(top==(size-1))
{
printf("stack is full\n");
}
else 
{
printf("stack is not full \n");
}
}
int main()
{
int n;
while (1)
{
printf("MENU: \n1.Push \n2.Pop \n3.Display \n4.Isfull \n5.Exit\n");
printf("Enter your choice: ");
scanf("%d",&n);
switch(n)
{
case 1:
push();
break;
case 2:
pop();
break;
case 3:
display();
break;
case 4:
isfull();
break;
case 5:
exit(0);
break;
}
}
}

