#include<stdio.h>
void main()
{
    int a=10,b=20,c=30,result;

    result=a<b && b<c; //1
    printf("\n %d<%d && %d<%d = %d",a,b,b,c,result);

    result=a<b || b<c; //1
    printf("\n %d<%d || %d<%d = %d",a,b,b,c,result);


    result=c>a || b<a; 
    printf("\n %d<%d || %d<%d = %d",c,a,b,a,result);

    result=!(c>a && b<a); 
    printf("\n !(%d<%d && %d<%d) = %d",c,a,b,a,result);

    result=!a;
    printf("\n !%d = %d",a,result);

    

}