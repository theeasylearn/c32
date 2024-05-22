// 0,1,1,2,3,5,8,13.....

#include <stdio.h>
void main()
{
      int a, b,c=0;
      a = 0;
      b = 1;

      printf("\n%d", a);
      printf("\n%d", b);

      while (c<13)
      {
            c = a + b;
            printf("\n%d", c);
            a = b;
            b = c;
      }

      // c=a+b;
      // printf("%d",c);

      // a=b;
      // b=c;

      // c=a+b;
      // printf("%d",c);

      // a=b;
      // b=c;

      // c=a+b;
      // printf("%d",c);
}