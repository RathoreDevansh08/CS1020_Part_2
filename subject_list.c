#include<stdio.h>

int main()
{
 int i,j,n=0,p[50],m[50],c[50];
 char name[50][10],sname[50][10],sub[10],roll[50][10];
 char a[6][15];
 FILE *f;
 
 f=fopen("data3A.txt","r");
 
 if(f==NULL)
 {
  printf("\nFile detection error\n");
  return 1;
 }
 else
 {
  printf("Enter a subject name (Phy/Che/Mat) :");
  scanf("%s",sub);
  
  fscanf(f," %s %s %s %s %s %s",a[0],a[1],a[2],a[3],a[4],a[5]);
  
  for(i=0;i<50;i++)                                                             //taking input from the file
  {
   fscanf(f,"%s %s %s %d %d %d",roll[i],name[i],sname[i],&p[i],&c[i],&m[i]);
  }
 
                                                                                //checking for the subject entered
   if(sub[0]=='P')                                                              //physics
   {
   printf("Student details:\n");
   for(i=0;i<50;i++)
   {
    printf("%s %s %s\n",roll[i],name[i],sname[i]);
    
    if(p[i]>=81 && p[i]<=90) 
    { 
      n++;
    }
   }
   printf("\nnumber of students with A grade in physics: %d\n",n);
   return 0;
   }
   
   else if(sub[0]=='C')                                                          //chemistry
   {
   
   printf("Student details:\n");
   for(i=0;i<50;i++)
   {
    printf("%s %s %s\n",roll[i],name[i],sname[i]);
    
    
    if(c[i]>=81 && c[i]<=90) 
    { 
      n++;
    }
   }
   printf("\nnumber of students with A grade in chemistry: %d\n",n);
   return 0;
   }
   
   else if(sub[0]=='M')                                                          //mathematics
   {
   printf("Student details:\n");
   for(i=0;i<50;i++)
   {
    printf("%s %s %s\n",roll[i],name[i],sname[i]);
    
    if(m[i]>=81 && m[i]<=90) 
    { 
      n++;
    }
   }
   printf("\nnumber of students with A grade in mathematics: %d\n",n);
   return 0;
   }
   
 }
   

 fclose(f);
 return 0; 
 }
    
