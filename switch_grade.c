#include<stdio.h>

int main()
{
  int m,f;
  printf("Enter your marks:");
  scanf("%d",&m);
  if(m>=90)
  f=0;
  else if(m<40)
  f=1;
  else if(m<80)
  f=2;
  else if(m<90)
  f=3;
  
  switch(f)
  {
  case 0:
  printf("A\n");
  break;
  case 1:
  printf("FAIL\n");
  break;
  case 2:
  printf("C\n");
  break;
  case 3:
  printf("B\n");
  break;
  defult :
  printf("ILLEGAL MARKS");
  }
  return 0;
}  
  
  
