#include<stdio.h>

int main()
{
 int i,j,m,n,a[200][200],max,e;
 FILE *p,*q;
 char fn[20],fn2[20],w;
 
 printf("Enter a input file name: ");
 scanf("%s",fn);
 printf("Enter a output file name: ");
 scanf("%s",fn2);
 
 p=fopen(fn,"r");
 q=fopen(fn2,"w");
 
 if(p==0)
 {
  printf("not able to read file");
  return 1;
 }
  
 fscanf(p,"%c%d",&w,&e); 
 fscanf(p,"%d%d",&m,&n);
 fscanf(p,"%d",&max);
 
 fprintf(q,"%c%d\n",w,e); 
 fprintf(q,"%d %d\n",m,n);
 fprintf(q,"%d\n",max);
 
 for(i=0;i<n;i++)
 {
  for(j=0;j<m;j++)
  {
   fscanf(p,"%d",&a[i][j]);
  }
   fprintf(q,"\n");
 } 
 
for(i=n-1;i>=0;i--)
 {
  for(j=m-1;j>=0;j--)
  {
   fprintf(q,"%d ",a[i][j]);
  }
  fprintf(q,"\n");
 }
   fclose(p);
   fclose(q);
 
 return 0;
 }
