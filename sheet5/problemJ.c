#include<stdio.h>
float average(float a[], int n)
{
    float sum=0.0;
    for(int i=0;i<=n; i++)
    {
        sum+=a[i];
    }
    printf("%.7f", (float)sum/n);
    return sum/n;
}
int main()
{
    int n;
    scanf("%d", &n);
    float a[100000];
    for(int i=0; i<=n; i++)
    {
        scanf("%f", &a[i]);
    }
    average(a,n);
}
