#include<stdio.h>

int main()
{
 int i,j,m,n,a[600][600],max,s;
 FILE *p;
 char w;
 p=fopen("twincats.pgm","r");
 
 if(p==0)
 {
  printf("not able to read file");
  return 1;
 }
 
 fscanf(p,"%c%d",&w,&s); 
 fscanf(p,"%d %d",&m,&n);
 fscanf(p,"%d",&max);
 
 for(i=0;i<m;i++)
 {
  for(j=0;j<n;j++)
  {
   fscanf(p,"%d ",&a[i][j]);
   a[i][j]=max-a[i][j];
   fprintf(q,"%d ",a[i][j]);
  }
   fprintf(q,"\n");
 } 
   fclose(p);
  
 
 return 0;
 }
   
