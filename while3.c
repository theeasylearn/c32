// write a program that print 100 to 1

#include<stdio.h>
void main()
{
      int count;
      int end;

      printf("enter starting number : ");
      scanf("%d",&count);

      printf("enter ending number : ");
      scanf("%d",&end);

      while(count>=end)
      {
            printf("\n%d",count);
            count--;
      }

      // printf("%d",count);
      // count=count-1;

      // printf("%d",count);
      // count=count-1;  //count--

      // printf("%d",count);
      // count=count-1;
}