#include<stdio.h>

int main()
{
 int i,j,m,n,a[600][600],max,e;
 FILE *p,*q;
 char fn[20],fn2[20],w;
 
 p=fopen("cat.pgm","r");
  
 printf("Enter a output file name: ");
 scanf("%s",fn2);
 
 q=fopen(fn2,"w");
 
 if(p==0)
 {
  printf("not able to read file");
  return 1;
 }
  
 fscanf(p,"%c%d",&w,&e); 
 fscanf(p,"%d%d",&m,&n);
 fscanf(p,"%d",&max);
 
 fprintf(q,"%c%d\n",w,e+1); 
 fprintf(q,"%d %d\n",m,n);
 fprintf(q,"%d\n",max);

 for(i=0;i<n;i++)
 {
  for(j=0;j<m;j++)
  {
   fscanf(p,"%d",&a[i][j]);
  }
 } 
 
 for(i=0;i<n;i++)
 {
  for(j=0;j<m;j++)
  {
   fprintf(q,"%d 0 %d  ",(255-a[i][j]),(255-a[i][m-j-1]));
  }
  fprintf(q,"\n");
 } 
   fclose(p);
   fclose(q);
   
 return 0;
 }
   
