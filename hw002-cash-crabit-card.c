#include <stdio.h>
#include <stdlib.h>

int main()
{
    int persons;
    int use;
    int money;

    printf("How many persons?");
    scanf("%d", &persons);
    printf("In cash(0) or by credit card(1)?");
    scanf("%d", &use);

    money = persons*300;

    if(money >= 3000)
        money = money*0.8;

    if(use == 1)
        money = money - 50;

    printf("%d" ,money);
    return 0;
}
