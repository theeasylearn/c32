//write a program to findout qube of user given positive number;
#include<stdio.h>
void main()
{
    int number,qube;
    printf("Enter positive number");
    scanf("%d",&number);

    if(number<0) // < > <= >= == !=
    {
        printf("it is negative number");
        number= 0 - number; 
    }
    qube = number * number * number;
    printf("\n qube = %d",qube);

}