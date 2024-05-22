// 1,4,9,16....100

#include <stdio.h>
void main()
{
      int number;

      printf("enter number : ");
      scanf("%d", &number);

      if (number == 0)
      {
            printf("0");
      }
      else if (number < 0)
      {
            printf("invalid");
      }

      else
      {
            for (int count = 1; count <= number; count++)
            {
                  printf("%d ", count * count);
            }
      }

      // printf("%d",count*count);
      // count++;

      // printf("%d",count*count);
      // count++;
}