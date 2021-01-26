#include <stdio.h>
#include <string.h>
int main()
{
    char alphabets[101];

    int count[127] = {0};
    printf("Please input English alphabets:");
    scanf("%s", alphabets);
    int l = strlen(alphabets);

    for(int i=0;i<=l-1;i++){
        count[alphabets[i]]++;
    }

    for(char i='a';i<='z';i++){
        if(count[i]!=0)
            printf("%c:%d\n", i, count[i]);
    }

    return 0;
}
