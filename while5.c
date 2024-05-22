// 0,1,1,2,3,5,8,13
// fibonaci patern

#include <stdio.h>
void main()
{
      int a, b, c, num;
      // int b;

      printf("enter a number : ");
      scanf("%d", &num);

      a = 0;
      b = 1;

      printf("%d ", a);
      printf("%d ", b);

      c = a + b;
      printf("%d ", c);

      while (c < num)
      {
            a = b;
            b = c;
            c = a + b;
            printf("%d ", c);
      }

      // a=b;
      // b=c;
      // c=a+b;
      // printf("%d",c);

      // a=b;
      // b=c;
      // c=a+b;
      // printf("%d",c);
}