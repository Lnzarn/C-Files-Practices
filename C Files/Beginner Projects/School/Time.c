#include <stdio.h>

int main()
{
    int t, secs, mins, hours;

    char name[80];
    printf("Please enter your name: ");
    scanf("%s", &name);
    printf("Please enter the seconds: ");
    scanf("%d", &t);

    printf("\nHey, %s! You have entered %d seconds.\n", name, t);

    hours = t / 3600;
    t = t % 3600;

    mins = t / 60;
    t = t % 60;

    secs = t;

    printf("\tseconds: %d\n", secs);
    printf("\tminutes: %d\n", mins);
    printf("\thours: %d\n", hours);
    printf("The time is %d:%d:%d", hours, mins, secs);

    return 0;
}