#include<stdio.h>
int substring (char [],char []);

int main()
{
 int m,n,s=0;
 char s1[100],s2[50];
 
 printf("Enter a string:\n");
 scanf(" %[^\n]s",s1);
 
 printf("Enter a substring to be searched:\n");
 scanf(" %[^\n]s ",s2);
 
 s=substring(s1,s2);
 
 if(s==1)
 {printf("The string s2 is a substring of s1\n");}
 else if(s==2)
 {printf("The string s2 is not a substring of s1\n");}

 return 0;
}

int substring (char st1[],char st2[])
{
 int i,j;
 
 for(i=0;st1[i]!='\0';i++)
 {
  for(j=0;st2[j]!='\0';j++)
  {
   if(st1[i+j]!=st2[j])
   {break;}
  }
  if(st2[j]=='\0')
  { return 1;}
 }
 
 return 2;
}   
