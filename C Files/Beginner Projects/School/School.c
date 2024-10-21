#include <stdio.h>
/*
int main()
{
    char name[80];
    float hours = 0;
    float gross_pay = 0;
    float withholding = 0;
    float net_pay = 0;

    printf("Please enter your name and how many hours you've worked for:\n>");
    scanf("%s", &name);
    scanf("%f", &hours);

    gross_pay = hours * 281;
    withholding = gross_pay * 0.21;
    net_pay = gross_pay - withholding;

    printf("\nHello, %s!\n\n", name);
    printf("Hourly rate:  281.00\n");
    printf("Hours worked: %.2f\n", hours);
    printf("Gross Pay:    %.2f\n", gross_pay);
    printf("Withholding:  %.2f\n", withholding);
    printf("Net pay:      %.2f\n", net_pay);

    return 0;
}*/

int main()
{

    int cash, one_thou = 0, five_hun = 0, one_hun = 0, fifty = 0, twenty = 0, ten = 0, five = 0, one = 0;
    char name[80];
    printf("Please Enter your name:\n");
    scanf("%s", name);
    printf("Please Enter the cash of cash you have:\n");
    scanf("%d", &cash);

    // Multiplication and Subtraction
    /*
    if (cash >= 1000)
    {
        one_thou = cash / 1000;
        cash -= one_thou * 1000;
    }
    if (cash >= 500)
    {
        five_hun = cash / 500;
        cash -= five_hun * 500;
    }
    if (cash >= 100)
    {
        one_hun = cash / 100;
        cash -= one_hun * 100;
    }
    if (cash >= 50)
    {
        fifty = cash / 50;
        cash -= fifty * 50;
    }
    if (cash >= 20)
    {
        twenty = cash / 20;
        cash -= twenty * 20;
    }
    if (cash >= 10)
    {
        ten = cash / 10;
        cash -= ten * 10;
    }
    if (cash >= 5)
    {
        five = cash / 5;
        cash -= five * 5;
    }
    if (cash >= 1)
    {
        one = cash;
    } */

    // Modulus
    /*
     if (cash >= 1000)
     {
         one_thou = cash / 1000;
         cash %= 1000;
     }
     if (cash >= 500)
     {
         five_hun = cash / 500;
         cash %= 500;
     }
     if (cash >= 100)
     {
         one_hun = cash / 100;
         cash %= 100;
     }
     if (cash >= 50)
     {
         fifty = cash / 50;
         cash %= 50;
     }
     if (cash >= 20)
     {
         twenty = cash / 20;
         cash %= 20;
     }
     if (cash >= 10)
     {
         ten = cash / 10;
         cash %= 10;
     }
     if (cash >= 5)
     {
         five = cash / 5;
         cash %= 5;
     }
     if (cash >= 1)
     {
         one = cash / 1;
         cash %= 1;
     }
     */

    printf("\nHello, %s!\n", name);
    printf("Here is the break down of denominations you have:\n");
    printf("1000 = %d\n", one_thou);
    printf("500  = %d\n", five_hun);
    printf("100  = %d\n", one_hun);
    printf("50   = %d\n", fifty);
    printf("20   = %d\n", twenty);
    printf("10   = %d\n", ten);
    printf("5    = %d\n", five);
    printf("1    = %d\n", one);
}
