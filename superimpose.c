#include<stdio.h>

int main()
{
 int i,j,m1,n1,a1[600][600],max1,e1,m2,n2,max2,a2[600][600],e2;
 FILE *p,*q,*r;
 char fn1[20],fn2[20],fn3[20],w1,w2;
 
 printf("Enter a input file1 name:");
 scanf("%s",fn1);
 printf("Enter a input file2 name:");
 scanf("%s",fn2);
  
 printf("Enter a output file name:");
 scanf("%s",fn3);
 
 p=fopen(fn1,"r");
 q=fopen(fn2,"r");
 r=fopen(fn3,"w");
 
 if(p==0)
 {
  printf("not able to read file1\n");
  return 1;
 }
 if(q==0)
 {
  printf("not able to read file2\n");
  return 2;
 }
  
 fscanf(p,"%c%d",&w1,&e1); 
 fscanf(p,"%d%d",&m1,&n1);
 fscanf(p,"%d",&max1);
 
 fscanf(q,"%c%d",&w2,&e2); 
 fscanf(q,"%d%d",&m2,&n2);
 fscanf(q,"%d",&max2);
 
 
 if(m1!=m2 || n1!=n2)
 {
  printf("dimensions mismatch\n");
  return 3;
 }
 
 fprintf(r,"%c%d\n",w2,e2); 
 fprintf(r,"%d %d\n",m2,n2);
 fprintf(r,"%d\n",255);
 
 
  
 for(i=0;i<n1;i++)
 {
  for(j=0;j<m1;j++)
  {
   fscanf(p,"%d",&a1[i][j]);
  }
 } 
 
 for(i=0;i<n2;i++)
 {
  for(j=0;j<m2;j++)
  {
   fscanf(q,"%d",&a2[i][j]);
   fprintf(r,"%d ",(a1[i][j]+a2[i][j])/2);
  }
   fprintf(r,"\n");
 } 

   fclose(p);
   fclose(q);
   fclose(r);
 
 return 0;
}
