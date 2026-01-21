#include<stdio.h>
void tisha(int i, int n)
{
    if(i<=n)
    {
        printf("I love Recursion\n");
        tisha(i+1, n);
    }
 
}
int main()
{
    int n;
    scanf("%d", &n);
    tisha(1,n);
}
