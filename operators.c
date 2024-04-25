#include<stdio.h>
void main()
{
    int a=10,b=20,result;

    result=a<b; //1
    printf("\n %d < %d = %d",a,b,result);

    result=a>b; //0
    printf("\n %d > %d = %d",a,b,result);

    result=a==b; //0
    printf("\n %d == %d = %d",a,b,result);

    result=a!=b; //1
    printf("\n %d != %d = %d",a,b,result);

    result=a<=b; //1
    printf("\n %d <= %d = %d",a,b,result);

    result=a>=b; //0
    printf("\n %d >= %d = %d",a,b,result);

    
}