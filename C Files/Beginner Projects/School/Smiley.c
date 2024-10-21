#include <stdio.h>

int main()
{
    int first_num, sec_num, third_num, result;
    char name[80];

    printf("You are gonna double the sum of three numbers.\n");
    printf("Please enter your name:");
    scanf("%s", &name);
    printf("\nPlease enter your first number:");
    scanf("%d", &first_num);
    printf("\nPlease enter your second number:");
    scanf("%d", &sec_num);
    printf("\nPlease enter your third number:");
    scanf("%d", &third_num);

    result = 2 * (first_num + sec_num + third_num);

    printf("\nHello, %s! Twice the sum of your numbers %d %d %d is %d. :) :) :)", name, first_num, sec_num, third_num, result);
    return 0;
}