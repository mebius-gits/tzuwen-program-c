#include <stdio.h>
#include <stdlib.h>
int main()
{
    int max, min;
    int i;
    int multiple = 1;
    printf("Please input two numbers:");
    scanf("%d %d", &max, &min);
    int biggest;
    if(max < min){
        biggest = min;
        min = max;
        max = biggest;
    }
    printf("%d and %d least common multiple = ", max, min);

    for(i=2;i<=min;i++){
        while(max!=i){
            if(max%i==0 && min%i == 0){
                max = max/i;
                min = min/i;
                multiple = multiple*i;
            }
            else
                break;
        }
    }
    printf("%d", multiple*max*min);
    return 0;
}
