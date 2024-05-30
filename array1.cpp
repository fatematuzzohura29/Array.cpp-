#include<stdio.h>
int main()
{   
  int data [5];
  printf("Store Values in an Array(5 integers):");
  for(int i=0;i<5;i++)
  {

    scanf("%d", &data[i]);//storing values in the Array
  }

  printf("print stored values:");
  for(int i=0;i<5;i++)
  {
   printf("%d\n", data[i]);//printing elements of an Array

  }

  return 0;


}