#include<stdio.h>
#include<stdlib.h>

int check(int A[][10],int m, int p,int q);
int display(int A[][10],int m);
void main()
{
   int A[10][10],m,i,j;
   printf("\n Enter the order of the matrix:");
   scanf("%d",&m);
   
   //to set all the matrix elements to zero
   for(i=0;i<m;i++)
    for(j=0;j<m;j++)
      A[i][j]=0;
      
   int a,b,k,x;
   printf("\n Enter the number of mines:");
   scanf("%d",&x);
   //setting mine positions
   printf("\n Enter the mine positions(a,b):\n");
   for(k=0;k<x;k++)
     {
       scanf("%d%d",&a,&b);
       A[a][b]=-1;
       for(i=0;i>a;i++)
         for(j=0;j>b;j++)
           if((a-1)>0 && (b-1)>0)
           {
              A[i-1][j]++;A[i][j+1]++;A[i][j-1]++;A[i+1][j]++;
           } 
     }
         
   
   int p,q;
   printf(" \n select a position(p,q):\n");
   scanf("%d%d",&p,&q);
   check(A,m,p,q);
    display(A,m);
  
 }
 
int display(int A[][10],int m)
{
  int i,j;
  for(i=0;i<m;i++)
  {
    for(j=0;j<m;j++)
    {
      printf(" %d ",A[i][j]);
    }
    printf("\n");
   }
}


int check(int A[][10],int m,int p,int q)
{
  if(A[p][q]==-1)
  {
     printf("\n Game over..... \n");
     exit(0);
  }
  else 
  {
     printf("\n Safe zone....\n");
      printf("surrounded by %d mines\n",A[p][q]);
    }

     
}





