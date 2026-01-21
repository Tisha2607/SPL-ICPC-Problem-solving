#include <stdio.h>
#include <math.h>
 
long long N;
 
void isPrime() {
    if (N <= 1) {
        printf("NO\n");
        return;
    }
    if (N == 2) {
        printf("YES\n");
        return;
    }
    if (N % 2 == 0) {
        printf("NO\n");
        return;
    }
 
    for (long long i = 3; i * i <= N; i += 2) {
        if (N % i == 0) {
            printf("NO\n");
            return;
        }
    }
 
    printf("YES\n");
}
 
int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        scanf("%lld", &N);
        isPrime();
    }
    return 0;
}
