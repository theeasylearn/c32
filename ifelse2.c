/* write a program to findout whether shape is potrait or landscape from user given dimension */
#include<stdio.h>
void main()
{
    int length,width;
    printf("Enter length");
    scanf("%d",&length);

    printf("Enter width");
    scanf("%d",&width);

    if(length>width) //< > <= >= == !=
    {
        printf("this is potrait shape");
    }
    else 
    {
        printf("this is landscape shape");
    }
}