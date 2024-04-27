/* write a program to display user given 24 hour time into 12 hour format time */
#include<stdio.h>
void main()
{
    int time,time12;
    printf("Enter time in 24 hour format");
    scanf("%d",&time);

    if(time<=12) //< > <= >= == !=
    {
        printf("current time = %d AM",time);
    }
    else 
    {
        time12 = time - 12;
        printf("current time = %d PM",time12);
    }
}