#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int MyRand(int min, int max)
{
    int r = rand()%(max-min+1)+min;
    return r;
}

int main()
{
    srand(time(NULL));

    int num1, num2;
    int nums;
    int i;
    printf("Please input num1 ~ num2:");
    scanf("%d %d", &num1, &num2);
    int x = MyRand(num1, num2);

    for(i=1;i<=3;i++){
        printf("Please input number:");
        scanf("%d", &nums);
        if(nums>x)
            printf("Too high\n");
        else if(nums<x)
            printf("Too low\n");
        else{
            printf("Bingo\n");
            break;
        }
    }
    printf("The number is %d ", x);
}
