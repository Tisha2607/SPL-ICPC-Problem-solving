#include<stdio.h>
void tisha(int i, int n)
{
    if(i<=n)
    {
        tisha(i, n-1);
        printf("%d\n", n);
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    tisha(1,n);
}
