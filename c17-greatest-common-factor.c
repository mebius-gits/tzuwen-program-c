#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2;
    int num;
    printf("Please input num1 and num2:");
    scanf("%d %d", &num1, &num2);
    printf("%d and %d Greatest common factor = ", num1, num2);
    if(num1 < num2)
        num = num2/2;
    else
        num = num1/2;

    while(num > 0){
        if(num1%num == 0 && num2%num == 0){
            printf("  %d", num);
            break;
        }
        if(num == 0)
            printf("The two numbers have no greatest common factor");
        num--;
    }

}
