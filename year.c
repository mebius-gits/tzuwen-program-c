#include <stdio.h>
#include <stdlib.h>
int main()
{
    int year;
    printf("Please input a year:");
    scanf("%d", &year);
    if(year<2020 || year>2999){
        printf("Error");
        return 0;
    }

    if((year-2018)%20 == 0){
        printf("NPSC:%d years", year-1998);
    }
    else
        printf("NPSC %d", year);
}
