#include<stdio.h>
int main()
{
 int a[3][3],b[3][3],c[3][3],row1,col1,row2,col2,i,j,k,sum;

 printf("Enter 1st row and col for A matrix:");
scanf("%d%d",&row1,&col1);
printf("Enter 2nd  row and col for B matrix:");
 scanf("%d%d",&row2,&col2);

 //assigning elements to the 1st  matrix
 printf("\nEnter  matrix elements:\n");

 for(i=0;i<row1;i++)
 {
  for(j=0;j<col1;j++)
  {
    printf(" a[%d][%d]:", i,j);
    scanf("%d", &a[i][j]);

 }
 }
 //assigning elements to the 2nd matrix
printf("\nEnter  matrix elements:\n");
 for(i=0;i<row2;i++)
 {
  for(j=0;j<col2;j++)
  {
    printf(" b[%d][%d]:", i,j);
    scanf("%d", &b[i][j]);
  }
 }


 //printing the 1st matrix a[][]
 printf("\nMatrix of A:\n");
 for(i=0;i<row1;i++)
 {
  for(j=0;j<col1;j++)
  {
    printf("%d\t", a[i][j]);
  }

  printf("\n");
 }
  
 //printing the 2nd  matrix b[][]
 printf("\nMatrix of B:\n");  
 for(i=0;i<row2;i++)
{
  for(j=0;j<col2;j++)
  {

    printf("%d\t", b[i][j]);
  }


  printf("\n");
  }
 
//composing multiple
printf("\nproduct of the two matrix:\n");
  for(i=0;i<row1;i++)
    {

  for(j=0;j<col2;j++)
  {
  for(k=0;k<col1;k++)
  {

sum=sum+a[i][k]*b[k][j];
  } 
c[i][j]=sum;
sum=0;
 }
    }


  //product element

 for(i=0;i<row1;i++)
{
  for(j=0;j<col2;j++)
  {

    printf("%d\t", c[i][j]);
  }


  printf("\n");
  }
}



 


  
