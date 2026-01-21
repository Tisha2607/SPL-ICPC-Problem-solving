#include<stdio.h>
int tisha(int n)
{
    for(int i=1; i<=n; i++)
    {
        if(i>1)
            printf(" ");
        printf("%d", i);
    }
    return 0;
}
int main()
{
    int N;
    scanf("%d", &N);
    tisha(N);
}
