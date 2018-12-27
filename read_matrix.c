#include<stdio.h>

int main()
{
 int m,n,i,j;
 FILE *fp;
 char file[100];
 float matrix[100][100];
 
 printf("Enter the filename:");
 scanf("%s",file);
 
 fp=fopen(file,"r");
 
 if(fp==0)
 {
  printf("Unable to reach the file");
  return 1;
 }
 else
 {
  
 fscanf(fp, "%d", &m);
 fscanf(fp, "%d", &n);
 
 for(i = 0; i < m; i++)
 {
  for(j = 0; j < n; j++)
  {
   fscanf(fp, "%f", &matrix[i][j]);               /* Read one entry */
  }
 }
 }
 
/* Code to print the matrix in transpose form here */
 for(i = 0; i < n; i++)
 {
  for(j = 0; j < m; j++)
  {
   printf("%f\t", matrix[j][i]);
  }
  printf("\n");
 }   
 
 return 0;
} 
