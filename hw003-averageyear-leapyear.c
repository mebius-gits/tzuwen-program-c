#include <stdio.h>
#include <stdlib.h>

int main()
{
    int year = 0;

    printf("Please input a year:");
    scanf("%d", &year);

    if ((year%4==0 && year%100!=0) || year % 400 == 0)
        printf("Leap year");
    else
        printf("Average year");
    return 0;
}
