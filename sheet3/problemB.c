#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    long long a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%lld",&a[i]);
    }
    long long t;
    scanf("%lld", &t);
    for(int i=0; i<n; i++)
    {
        if(t==a[i])
        {
            printf("%d\n",i);
            return 0;
        }
    }
    printf("-1\n");
}
