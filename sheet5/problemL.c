#include <stdio.h>
 
void mahi(int arr1[], int arr2[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr2[i]);
    }
 
    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr1[i]);
    }
}
 
int main()
{
    int n;
    scanf("%d", &n);
 
    int arr1[n], arr2[n];
 
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }
 
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr2[i]);
    }
 
    mahi(arr1, arr2, n);
    return 0;
}
