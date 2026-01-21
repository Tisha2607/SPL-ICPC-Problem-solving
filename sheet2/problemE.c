#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int t = -99999;
    for(int i = 1; i<=n; i++)
    {
        int x;
        scanf("%d", &x);
        if(t<x)
            t = x;
 
    }
    printf("%d\n", t);
 
 
}
