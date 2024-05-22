// ****
// ***
// **
// *

#include <stdio.h>
void main()
{

      int count;

      printf("enter number : ");
      scanf("%d",&count);

      // printf("*");
      // printf("*");
      // printf("*");

      for (int j = count; j >= 1; j--)
      {
            for (int i = 1; i <= j; i++)
            {
                  printf("*");
            }
            printf("\n");
      }

      // printf("*");
      // printf("*");
      // printf("*");
      // for(int i=1;i<=3;i++)
      // {
      //       printf("*");
      // }
      // printf("\n");

      // // printf("*");
      // // printf("*");
      // for(int i=1;i<=2;i++)
      // {
      //       printf("*");
      // }
      // printf("\n");

      // for(int i=1;i<=1;i++)
      // {
      //       printf("*");
      // }
      // printf("\n");
}