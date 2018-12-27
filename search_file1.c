#include<stdio.h>
int substring(char [], char[]);

int main()
{
 int m=0,n,s=0;
 char st[50],fi[100];
 FILE *f;
 
 f=fopen("quotes.txt","r");
 
 printf("Enter a string to be searched: \n");
 scanf(" %[^\n]s ",st);
 
do
 {
  fscanf(f,"%c",&fi[m]);
   m++;
 }while(!feof(f));
 
 s=substring(st,fi);
 
 if(s==1)
 {printf("The string st is there in the file\n");}
 else if(s==2)
 {printf("The string is not there in the file\n");}
 
 fclose(f);
 
 return 0;
}

int substring(char st[],char fi[])
{
  int i,j;
  
  for(i=0;fi[i]!='\0';i++)
  {
   for(j=0;st[j]!='\0';j++)
   {
    if(fi[i+j]!=st[j])
    {break;}
   }
   if(st[j]=='\0')
   {return 1;}
  }
  
  return 2;
  
}    
