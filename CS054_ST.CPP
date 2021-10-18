#include <stdio.h>
#include <conio.h>
#include<process.h>

#define size 10

int top = -1;
int s[10];
int item;

void push()
{
 if(top==size-1)
 {
  printf("!!Stack is full!!");
  return;
 }
 top++;
 s[top] = item;
}

int pop()
{
 if(top == -1)
  return -1;
 return s[top--];
}

void display()
{
 int i;
 if(top == -1)
 {
  printf("Stack is empty");
  return;
 }
 printf("Contents of Stack are :\n");
 for(i = top; i >= 0; i--)
  printf("%d ", s[i]);
}

void main() {
 int item_deleted;
 int choice;
 clrscr();
 while(1){
  printf("\n1:Push\n2:Pop\n3:Display\n4:Exit\n");
  printf("Enter your choice: ");
  scanf("%d", &choice);
  switch(choice) {
   case 1: printf("Enter item to be inserted: ");
	   scanf("%d", &item);
	   push();
	   break;
   case 2: item_deleted = pop();
	   if(item_deleted == -1)
	    printf("Stack is empty");
	    else
	     printf("Item deleted is %d\n", item_deleted);
	    break;
   case 3: display();
	   break;
   default: exit(0);
  }
 }
 getch();
}