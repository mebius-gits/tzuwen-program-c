#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    int i;
    printf("Number?");
    scanf("%d", &num);
    printf("%d=", num);
    for(i=1;i*i<=num;i++){
        if(num%i==0)
            printf("\n%d * %d", i, num/i);
    }
    return 0;
}
