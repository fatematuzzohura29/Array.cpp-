#include<stdio.h>
int main()
{
 int a[3][3],b[3][3],c[3][3] ,row,col,i,j;
printf("Enter rows and columns:");
scanf("%d%d",&row,&col); 

 //assigning elements to the  1st matrix :
 printf("\nEnter the elements of A matrix.\n");
 for(i=0;i<row;i++)
 { 

  for(j=0;j<col;j++)
  {
    printf("a[%d][%d]:", i,j);
    scanf("%d", &a[i][j]);

 }
 printf("\n");

 }
  //assigning elements to the 2nd matrix:
 printf("\nEnter the elements of B matrix.\n");
 for(i=0;i<row;i++)
 { 
  

  for(j=0;j<col;j++)
  {
      printf(" b[%d][%d]:", i,j);
      scanf("%d", &b[i][j]);

 }
 printf("\n");

 }

 //printing the  1st matrix 
printf("\nA=");

 for(i=0;i<row;i++)
 { 
  printf("\t");


  for(j=0;j<col;j++)
  {
    printf("%d", a[i][j]);
  }

  printf("\n");



 }
  //printing the 2nd  matrix

printf("\nB=");

 for(i=0;i<row;i++)
 {
  printf("\t");
  for(j=0;j<col;j++)
  {
    printf("%d", b[i][j]);
  }

  printf("\n");
 }
 //computing the sum

  for(i=0;i<row;i++)
 {  
 

  for(j=0;j<col;j++)
  {
   c[i][j]=a[i][j]+b[i][j];
  }
 }
// crinting the sum
printf("\nsum=");

for(i=0;i<row;i++)
 {  
  printf("\t");

  for(j=0;j<col;j++){
printf("%d", c[i][j]);
  }
  printf("\n");


  }
 

  return 0;
  }

