#include<stdio.h>
int main()
{
    long long int a;
    long long int b;
    scanf ("%lld %lld", &a,&b);
    long long int sum = a%10+b%10;
    printf("%lld",sum);
}
