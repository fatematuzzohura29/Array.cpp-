#include<stdio.h>
int main()
{
   int DATA[7]={8,2,5,9,1},i,n=5,ITEM=2,LOC;

    DATA[n+1]=ITEM;
    LOC=1;


    while(DATA[LOC]!=ITEM)
    {
    LOC=LOC+1;

    }

  if (LOC==n+1)
  {
   LOC=0;
   printf("\n ITEM not found\n");
  }

  else{

  printf("ITEM found at position %d  \n",LOC);


  }
   return 0;
}







