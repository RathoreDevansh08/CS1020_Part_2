#include<stdio.h>

int main()
{
  int n,i,s=0;
  printf("enter a positive integer:");
  scanf("%d",&n);
  for (i=1;i<=n;i++)
  {
  s=s+i;
  }
  printf("\nthe sum of numbers from 1 to n=%d\n",s);
  return 0;
}
