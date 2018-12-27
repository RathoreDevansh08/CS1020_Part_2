#include<stdio.h>

int main(void)
{
 int a[20],n,counter,num,posn,found;
 printf("enter n (<=20) \n");
 scanf("%d",&n);
 
 if(n>20)
 {
  printf("wrong input \n");
 }
 
 else
 { 
 counter =0;
 
 while(counter<n)
 {
  printf("enter the next element \n");
  scanf("%d",&a[counter]);
  counter=counter+1;
 } 
 
  printf("enter the number to search \n");
  scanf("%d",&num);
  counter =0;
  found=0;
  
 while(counter<n)
 {
  if(num==a[counter])
  {  
   found=1;
   posn=counter;
   break;
  }
  counter=counter+1;
  }
 }
  
 if(found==0)
  {
   printf("searched number not found\n");
  }
  
 else
 { 
  printf("searched number is the %dth item in the list\n",posn+1);
 }
  return 0;
}
