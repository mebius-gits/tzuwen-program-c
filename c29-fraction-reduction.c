#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m;
    int i;

    printf("Please input two numbers:");
    scanf("%d %d", &n, &m);
    printf("%d / %d = ", n, m);

    if(m == 0){
        printf("Error");
        return 0;
    }
    if(n == 0){
        printf("%d", n);
        return 0;
    }
    if(m<=-1 && n <=-1){
        m = -m;
        n = -n;
    }
    if(m<-1 && n>1){
        m=-m;
        n=-n;
    }

    for(i=2;i<=n || i<=-n;i++){
        while(n!=i || -n!=i){
            if((n%i==0 && m%i==0)){
                m=m/i;
                n=n/i;
            }
            else
                break;
        }
    }

    if(m>1 || m<-1)
        printf("%d / %d", n, m);
    else
        printf("%d", n);

    return 0;
}
