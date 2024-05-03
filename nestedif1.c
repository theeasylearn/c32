// write a program that check big number from 3 numbers
// nested if

#include<stdio.h>
void main()
{
      int a;
      int b;
      int c;

      printf("enter number 1 : ");
      scanf("%d",&a);

      printf("enter number 2 : ");
      scanf("%d",&b);

      printf("enter number 3 : ");
      scanf("%d",&c);

      if(a>b)
      {
            // printf("a is grater then b");
            if(a>c)
            {
                  printf("number 1 is max");
            }
      }

      if(b>a)
      {
            if(b>c)
            {
                  printf("number 2 is max");
            }
      }

      if(c>a)
      {
            if(c>b)
            {
                  printf("number 3 is max");
            }
      }
}