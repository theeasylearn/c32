// 1
// 12
// 123
// 1234

#include <stdio.h>
void main()
{
      int count;

      printf("enter a number : ");
      scanf("%d",&count);
      // printf("1");

      for (int j = 1; j <= count; j++)
      {
            for (int i = 1; i <= j; i++)
            {
                  printf("%d ", i);
            }
            printf("\n");
      }

      // for(int i=1;i<=2;i++)
      // {
      //       printf("%d",i);
      // }
      // // printf("2");
      // printf("\n");

      // // printf("1");
      // // printf("2");
      // // printf("3");

      // for(int i=1;i<=3;i++)
      // {
      //       printf("%d",i);
      // }
      // printf("\n");

      // for(int i=1;i<=4;i++)
      // {
      //       printf("%d",i);
      // }
      // printf("\n");
}
