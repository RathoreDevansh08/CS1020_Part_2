#include<stdio.h>

int main()
{
 int i,j=0,m,n;
 printf("enter a positive integer:");       //entering a positive integer
 scanf("%d",&n);
 
 while(n>=j*j+1)                            //running loop for the check
 {
  if(n==j*j+1)
  {
   printf("\nYES\n");
   return 1;
  }
  j++;
 }
 
 printf("\nNO\n");
 
 return 0;
}
   
 
