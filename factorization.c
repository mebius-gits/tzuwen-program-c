#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;  // 使用者輸入的整數
    int i;  // 迴圈標誌

    printf("Please input number:");
    scanf("%d",&n);
    printf("%d=",n);

     // n>=2才執行下面的迴圈
    for(i=2; i<=n; i++){
        while(n!=i){
            if(n%i==0){
                printf("%d*",i);
                    n=n/i;
            }
            else
                break;
        }
    }
    printf("%d\n",n);

    return 0;
}
