#include <stdio.h>
#include <stdlib.h>

int main()
{
    int persons = 0;
    printf("How many persons?");
    scanf("%d", &persons);
    int money = persons*300;


    if (money >= 3000)
        printf("%.f", money*0.8);

    else
        printf("%d", money);

    return 0;
}
