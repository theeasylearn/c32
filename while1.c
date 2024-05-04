// ***********

#include<stdio.h>
void main()
{
      int number;
      char symbol;


      printf("enter symbol : ");
      scanf("%c",&symbol);

      printf("enter number : ");
      scanf("%d",&number);
      
      int count=1;
      while(count<=number)
      {
            printf("%c",symbol);
            count=count+1;  //incriment
      }
      // printf("*");
      // printf("*");
      // printf("*");
      // printf("*");
      // printf("*");
      // printf("*");
      // printf("*");
      // printf("*");
      // printf("*");
}