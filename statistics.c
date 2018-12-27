#include <stdio.h>

int main()
{
 int success,count = 0,n,hm;
 char names[200][30];
 int marks[200];
 float avg=0.0;

 FILE *p;
 p = fopen("data01.txt", "r");
 /* Open the file test.c in read-only mode and assign its handle to p */

 if (p == 0)
 /* Check if the file was opened correctly */
 {
  printf("Error in opening the file\n");
  return(1);
 }
 
 hm=0;
 while(count < 200)
 {
  success = fscanf(p, "%s %d", names[count], &marks[count] );  
  /* Read the next name and marks from file */
  if(marks[count]>hm)
  {
   hm=marks[count];
  } 
  if(success == -1)
  {
   break;
  }
  count = count+1;
 }
 
 fclose(p);
 /* Close the file */

 count = count-1;
 n=count;
 
 printf("\nHighest marks:%d\n",hm);
 printf("\nStudents with highest marks:\n");
 
 while(count >= 0)
 {
  avg+=(float)marks[count]/n;
  if(marks[count]==hm)
  {
   printf("%s\n",names[count]);
  } 
  count = count - 1;
 }
 
 printf("\nAverage: %f\n",avg);
 
 return 0;
} 
