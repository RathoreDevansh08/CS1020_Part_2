#include<stdio.h>

int main()
{
 int a[10],h,sh,c,b,i,j;
 
 printf("-----------------------------------------\n");
 printf("Enter 10 integers:");
 scanf("%d",&c);
 scanf("%d",&b);
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
  scanf("%d",&a[i]);
  if(a[i]>h)
  {
   sh=h;
   h=a[i];
  }
  else if(a[i]>sh)
  {
   sh=a[i];
  }
 }
  
  for(j=0;j<10;j++)
  {
   if(a[j]==sh)
   {
    printf("%d  ",a[9]);
   }
   else
   {
    printf("%d  ",a[j]);
   }
  }
  
  printf("\n-----------------------------------\n");
  return 0;
 }      
 
