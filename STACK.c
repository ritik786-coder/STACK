/*STACK implementation using static array*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define CAPACITY 5 //  pre- processor macro
int stack[CAPACITY],top=-1;
void push();
void pop();
void peek();
void poll();
int isempty();
int isfull();
void main(){
	int choice;
	while(1){
	
	printf("\n\n1. push \n2.pop \n3.peek\n4.traverse\n5.quit");
	printf("\nenter your choice");
	scanf("%d",&choice);
	switch(choice){
		case 1: push();
		break;
		case 2: pop();
		break;
		case 3: peek();
		break;
		case 4: poll();
		break;
		case 5: exit(0);
		break;
		default: printf("\n\nyou enter the wrong input");
	}
  }
}

void push()
{   
    int element;
    if(isfull()){
    	printf("\nstack is full you can not enter the elements");
	}
	else
	{
	printf("\n enter the element");
	scanf("%d",&element);
	top++;
	stack[top]=element;
	printf("\nelement is push");
    } 
}

int isfull()
{	
	if(top==CAPACITY-1)
	{
		return(1);
	}
	else
	{
		return(0);
	}
	
}

void pop()
{
    int element;
 	if(isempty()){
		printf("\nstack is empty nothin to pop");
	}
	else{
		element=stack[top];
		top--;
		printf("\nelement is popped",element);
	}
}

int isempty()
{
	if(top==-1){
		return (1);
	}
	else{
		return(0);
	}
}

void peek(){
	if(isempty()){
		printf("\n stack is empty");
	}
	else{
		printf("\nthe peek element-->%d\n",stack[top]);
	}
}

void poll(){
	int i;
	if(isempty()){
		printf("\nstack is empty");
	}
	else{
		for(i=0;i<=top;i++){
			printf("\n%d",stack[i]);
		}
	}
}
