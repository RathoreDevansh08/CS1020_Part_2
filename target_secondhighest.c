#include<stdio.h>

int main()
{
 int a[10],h,sh,c,b,i,j;
 
 printf("-----------------------------------------\n");
 printf("Enter 10 integers:");
 scanf("%d",&a[0]);                                              //scanning two numbers for initialisation of h and sh
 scanf("%d",&a[1]);
 
 c=a[0];
 b=a[1];
 
 if(c>b)
 {
  h=c;
  sh=b;
 }
 else
 {
  h=b;
  sh=c;
 } 
 
 for(i=2;i<10;i++)
 {
  scanf("%d",&a[i]);                                             //scanning rest of numbers
  if(a[i]>h)
  {                                                              //applying comparision
   sh=h;
   h=a[i];
  }
  else if(a[i]>sh)
  {
   sh=a[i];
  }
 }
  
  printf("\noutput: ");
  
  for(j=0;j<10;j++)                                              //printing in the given format
  {
   if(a[j]==sh)
   {
    printf("%d ",a[9]);
   }
   else
   {
    printf("%d ",a[j]);
   }
  }
  
  printf("\n-----------------------------------\n");
  return 0;
 }      
 
