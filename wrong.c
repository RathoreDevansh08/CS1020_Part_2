/*
Program name: wrong.c
Program description:
Date:
*/
#include<stdio.h> //<--first error

int main()
{                 //<--second error

 int a;            //a is an integer
 int b,c;
 int d;
 int e;
 printf("Enter a number: ");
 scanf("%d",&a);/*Command to read the first integer and store it in a variable a.*/
 printf("Enter a number: ");
 scanf("%d",&b);   //<--third error
 printf("Enter a number: ");
 scanf("%d",&c);
 d=a;              //<--forth error  
 e=d;              //<--fifth error
 if(b>d)           //<--sixth error
 d=b;
 else
 e=b;
 if(c<e)
 e=c;
 if(c>d)
 d=c;
 printf("%d,%d\n",d,e); //<--seventh error
 return 0;        //<--eigth error
 }
