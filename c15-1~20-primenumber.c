#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2;
    int i = 1;
    printf("Please input num1:");
    scanf("%d", &num1);
    printf("Please input num2:");
    scanf("%d", &num2);
    int nums = num1;

    printf("%d~%d primenumber \n=", num1 , num2);
    if(nums == 1)
        nums+=1;

    while(nums<=num2){
        int count = 0;
        int i = 1;
        while(i*i<=nums){
            if(nums%i == 0)
                count++;
            if(count == 2)
                break;
            i++;
        }
        if(count == 1)
            printf("  %d", nums);
        nums++;
    }
}
