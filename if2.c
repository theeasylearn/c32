// write a program to accept product's manifecturing cost & sale price. findout profit/loss  amount & rate calculate
#include <stdio.h>
void main()
{
    int cost_price, sale_price, difference;
    float profit_loss_rate;
    printf("Enter Product's manifecturing cost");
    scanf("%d", &cost_price);

    printf("Enter Product's sale price");
    scanf("%d", &sale_price);

    difference = sale_price - cost_price;
    if (difference > 0) // < > <= >= == !=
    {
        printf("profit = %d", difference);
        // calculate rate
    }

    if (difference < 0)
    {
        printf("loss = %d", difference);
        profit_loss_rate = (100 * difference) / sale_price;
    }
    profit_loss_rate = (100 * difference) / sale_price;
    printf("\n Rate = %f",profit_loss_rate);
}
