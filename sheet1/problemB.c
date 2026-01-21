#include <stdio.h>
 
int main() {
    int i;
    long long ll;
    char ch;
    float f;
    double d;
 
    scanf("%d %lld %c %f %lf", &i, &ll, &ch, &f, &d);
 
    printf("%d\n", i);
    printf("%lld\n", ll);
    printf("%c\n", ch);
    printf("%g\n", f);
    printf("%g\n", d);
 
    return 0;
}
