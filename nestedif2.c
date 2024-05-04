// write a program that display days in month

#include<stdio.h>
void main()
{
      int month;

      printf("enter month : ");
      scanf("%d",&month);

      if(month<13)
      {
            if(month>0)
            {
                  if(month==1 || month==3 || month==5 || month==7 ||month==9 || month==11)
                  {
                        printf("it has 31 days");
                  }

                  else if(month==2)
                  {
                        printf("it has 28 days");
                  }

                  else
                  {
                        printf("it has 30 days");
                  }
            }
            else
            {
                  printf("invalid input");
            }
      }

      else
      {
            printf("out of range");
      }
}