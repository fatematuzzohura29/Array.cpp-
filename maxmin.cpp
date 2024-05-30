#include<stdio.h>
int main()
{   
  int data [5],i,n,max,min;
  printf("Enter number of elements:");
  scanf("%d",&n);
  printf("Enter %d elements of the array\n:");
  for(i=0;i<n;i++)
  {

    scanf("%d", &data[i]);//storing values in the Array
  
    max=data[0];
    min=data[0];
  }

   for(i=1;i<n;i++)
  
{
    if(data[i]>max)//maximum value check
     max=data[i];

    if(data[i]< min)//minimum value check
    min=data[i];
}
   printf("Maximum element :%d\n", max);
   printf("Minimum element :%d\n", min);

  }

