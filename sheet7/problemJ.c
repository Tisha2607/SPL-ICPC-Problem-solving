#include<stdio.h>
int mahi(int i, int n, long long t)
{
    if(i>n)
    {
        printf("%lld", t);
    }
    else
    {
        mahi(i+1, n, t*i);
    }
 
 
 
 
}
 
int main()
{
    int n;
    scanf("%d", &n);
    mahi(1, n, 1);
}
