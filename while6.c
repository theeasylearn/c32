// 5 x 1 = 5
// 5 x 2 = 10

#include <stdio.h>
void main()
{
      int number ;
      int count = 0;
      int answer;
      int count2;

      printf("enter a number : ");
      scanf("%d",&number);

      printf("enter a number : ");
      scanf("%d",&count2);

      while (count<count2) 
      {
            count++;
            answer = number * count;
            printf("\n%d x %d = %d", number, count, answer);
      }

      // count++;
      // answer=number*count;
      // printf("\n%d x %d = %d",number,count,answer);

      // count++;
      // answer=number*count;
      // printf("\n%d x %d = %d",number,count,answer);

      // count++;
      // answer=number*count;
      // printf("\n%d x %d = %d",number,count,answer);

      // count++;
      // answer=number*count;
      // printf("\n%d x %d = %d",number,count,answer);
}