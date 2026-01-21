#include<stdio.h>
void tisha(int n)
{
    if(n>=1)
    {
        if(n==1)
            printf("%d", n);
        else
            printf("%d ", n);
        tisha(n-1);
    }
}
int main()
{
    int N;
    scanf("%d", &N);
    tisha(N);
 
}
