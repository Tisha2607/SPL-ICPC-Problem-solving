#include <stdio.h>
 
unsigned long long factorial(int n) {
    unsigned long long result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}
 
int main() {
    int T;
    scanf("%d", &T);
 
    for (int t = 0; t < T; t++) {
        int N;
        scanf("%d", &N);
        printf("%llu\n", factorial(N));
    }
 
    return 0;
}
