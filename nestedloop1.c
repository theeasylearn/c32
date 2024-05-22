// *
// **
// ***

#include <stdio.h>
void main()
{
      int count ;
      char symbol;

      printf("enter a symbol : ");
      scanf("%c",&symbol);
      
      printf("enter number : ");
      scanf("%d",&count);


      for (int j = 1; j <= count; j++)
      {
            for (int i = 1; i <= j; i++)
            {
                  printf("%c",symbol);
            }
            printf("\n");
            // count++;
      }

      // printf("*");
      // for(int i=1;i<=2;i++)
      // {
      //       printf("*");
      // }
      // printf("\n");

      // for(int i=1;i<=3;i++)
      // {
      //       printf("*");
      // }
      // printf("\n");

      // for(int i=1;i<=4;i++)
      // {
      //       printf("*");
      // }
      // printf("\n");
}