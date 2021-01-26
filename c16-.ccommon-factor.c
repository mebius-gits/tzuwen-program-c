#include <stdio.h>
#include <stdlib.h>

int main()
{
    int max, min;
    int i;

    printf("Please input two numbers:");
    scanf("%d %d", &max, &min);
    printf("=");

    if(max<min){
        min = i;
        min = max;
        max = i;
    }

    i = 1;
    while(i<=min){
        if(max%i==0 && min%i==0)
            printf("%d ", i);
        i++;
    }
}
