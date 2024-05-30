#include<stdio.h>
int main()
{
 int a[10][10],transpose[10][10],row,col,i,j;
 printf("Enter rows and columns:");
 scanf("%d%d",&row,&col);


 //assigning elements to the matrix
 printf("\nEnter  matrix elements:\n");
 for(i=0;i<row;i++)
 {
  for(j=0;j<col;j++)
  {
    printf("Enter element a%d%d:", i+1,j+1);
    scanf("%d", &a[i][j]);

 }
 }

 //printing the matrix a[][]
 printf("\nEnter  matrix elements:\n");
 for(i=0;i<row;i++)
 {
  for(j=0;j<col;j++)
  {
    printf("%d", a[i][j]);
  }

  printf("\n");
 }
 //computing the transpose
 for(i=0;i<row;i++)
 {
  for(j=0;j<col;j++)
  {
   transpose [j][i]=a[i][j];
  }
 }
//crinting the transpose
printf("\n Transpose of thr matrix:\n");

for(i=0;i<row;i++)
 {
  for(j=0;j<col;j++){
printf("%d", transpose[i][j]);
  }
  printf("\n");

  }
  return 0;}