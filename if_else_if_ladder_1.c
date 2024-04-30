// write  a program to calculate electricity bill as per blow criteria
/*
    unit        per unit
    <=100       2
    <=200       3
    <=500       5
    <=1000      8
    >1000       10
    also calculate 5% gst
    display gross bill amount, gst and net bill amount
*/
#include <stdio.h>
void main()
{
    int gross_bill, unit;
    float gst, net_bill;

    printf("Enter units");
    scanf("%d", &unit); // 150

    if (unit <= 100)
    {
        gross_bill = unit * 2;
    }
    else if (unit <= 200)
    {
        gross_bill = unit * 3;
    }
    else if (unit <= 500)
    {
        gross_bill = unit * 5;
    }
    else if (unit <= 1000)
    {
        gross_bill = unit * 8;
    }
    else
    {
        gross_bill = unit * 10;
    }
    gst = (gross_bill * 5) / 100;
    net_bill = gross_bill + gst;
    printf("\n gross bill = %d", gross_bill);
    printf("\n gst  = %.2f", gst);
    printf("\n net bill  = %.2f", net_bill);
}
