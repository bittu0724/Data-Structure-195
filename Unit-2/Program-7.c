/*Write a program to find the Smallest Common Divisor of a given
number.*/

#include<stdio.h>
#define MAX 30

int stack [MAX],top=-1;
void push(int value);
int pop();

void main()
{
    int num,i,div;

    printf("Enter a number : ");
    scanf("%d",&num);

   for(i=2;i<=num;i++);
   {
       if (num%i==0)
       {
           push(i);
       }
   }
   for(i=2;i<=num;i++)
   {
       if(num%i==0)
       {
           div=pop();
       }
   }
     printf("\n the Smallest Common Divisor is : %d",div);
}

void push(int value)
{
   if(top==MAX-1)
    {
        printf("\n stack overflow..");
    }
    else
    {
        top++;
        stack[top]=value;
    }
}

int pop()
{
    int val;
    if(top == -1)
    {
        printf("\n Stack is underflow..");
        return -1;
    }
    else
    {
        val=stack[top];
        top--;
        return val;
    }
}














