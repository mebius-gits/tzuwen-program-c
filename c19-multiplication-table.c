#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2;

    for(num1 = 1; num1<=9; num1++){
        for(num2 = 1;num2<=9; num2++){
            printf("%d * %d= %02d  ", num1, num2, num1*num2);
        }
        printf("\n");
    }

}
