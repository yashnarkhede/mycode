#include<stdio.h> 

#define MAX 10
void push(); void pop(); int peek(); void display();
int stack[MAX], top = -1;
void main() {
int value, choice;
while(1) {
printf("1. Push\n2. Pop\n3. Peek\n4. Display\n5.Exit"); printf("\nEnter your choice: ");
scanf("%d",&choice);
switch(choice)
{
case 1:
printf("Enter the value to be insert: "); scanf("%d",&value);
push(value);
break;
case 2: pop();

break; case 3:
peek();
break; case 4:
display();
break; case 5:
printf("\nEND");
break; default:
printf("\nInvalid input"); }
} }
void push(int x) {
int value;
if(top == MAX-1) {
printf("\nOVERFLOW"); }
else {
top++; stack[top] = x;
} }
void pop()

{
if(top == -1) {
printf("\nUNDERFLOW"); }
else {
top--; }
}
int peek() {
if(top == -1) {
printf("\nStack is Empty");
}
else {
printf("\nThe topmost element is %d",stack[top]); }
}
void display() {
if(top == -1) {
printf("\nSTACK IS EMPTY");
}

else {
int i;
printf("\nStack elements are:\n"); for(i=0; i<=top; i++)
{
printf("%d\n",stack[i]); }
}
}

  