#include<stdio.h>
void main()
{
      int number;

      printf("enter a number : ");
      scanf("%d",&number);

      if(number>0)
      {
            printf("positive number");
      }

      else if(number<0)
      {
            printf("negetive number");
      }

      // else if(number==0)
      else
      {
            printf("number is zero");
      }
}