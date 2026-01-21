#include<stdio.h>
int fib(int n)
{
   int ans;
   if(n==1)
        ans=0;
   else if(n==2)
    ans=1;
   else
    ans=fib(n-1)+fib(n-2);
   return ans;
}
int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", fib(n));
    return 0;
}
