// switch(varible)
// {
//     case 1:
//         code
// }

#include<stdio.h>
void main()
{
    int choise;
    int a;
    int b;

    printf("\n--------option--------");
    printf("\nenter 1 for addition");
    printf("\nenter 2 for substraction");
    printf("\nenter 3 for multiplcation");
    printf("\nenter 4 for division");
    printf("\n----------------------");

    printf("\nenter your choice : ");
    scanf("%d",&choise);

    printf("enter number 1 : ");
    scanf("%d",&a);

    printf("enter number 2 : ");
    scanf("%d",&b);

    switch(choise)
    {
        case 1:
            printf("%d",a+b);
            break;

        case 2:
            printf("%d",a-b);
            break;

        case 3:
            printf("%d",a*b);
            break;

        case 4:
            printf("%d",a/b);
            break;

        default:
            printf("invalid input");
            break; 
    }
}