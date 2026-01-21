#include <stdio.h>
 
int main() {
    int N;
    scanf("%d", &N);  
 
    long long A[N];
    for (int i = 0; i < N; i++) {
        scanf("%lld", &A[i]);  
    }
 
    int isPalindrome = 1; 
    for (int i = 0; i < N / 2; i++) {
        if (A[i] != A[N - 1 - i]) {
            isPalindrome = 0;  
            break;
        }
    }
 
    if (isPalindrome) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
 
    return 0;
}
