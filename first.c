#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 0;
    printf("Please input number?");
    scanf("%d", &x);
    switch(x){
        case 1:
            printf("x is one");
            break;
        case 2:
            printf("x is two");
            break;
        case 3:
        case 4:
            printf("x is three or four");
            break;
        default:
            printf("x is other");
            break;
    }
    return 0;
}
