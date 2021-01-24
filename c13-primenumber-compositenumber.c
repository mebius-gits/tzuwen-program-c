#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    int n = 0;
    printf("Please input number:");
    scanf("%d", &num);

    if(num == 1)
        printf("1 is not primenumber and compositenumber");
    else{
        int i = 1;

        while(i*i<=num){
            if(num%i==0)
                n++;
            if(n==2)
                break;
            i++;
            }
        }
    if(n==1)
        printf("%d is prime number", num);
    else
        printf("%d is composite number", num);

}
