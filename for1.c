// for(variable ; condition ; incriment/decriment)
// {
//       code
// }

// write  aprogram that display table
// 5 x 1 = 5

#include <stdio.h>
void main()
{
      int number;
      int number2;
      
      printf("enter number : ");
      scanf("%d",&number);

      printf("enter count : ");
      scanf("%d",&number2);

      for (int count = 1 ; count<=number2 ; count++)
      {
            // count++;
            printf("\n%d x %d = %d", number, count, number * count);
      }

      // count++;
      // printf("\n%d x %d = %d",number,count,number*count);

      // count++;
      // printf("\n%d x %d = %d",number,count,number*count);

      // count++;
      // printf("\n%d x %d = %d",number,count,number*count);

      // count++;
      // printf("\n%d x %d = %d",number,count,number*count);
}