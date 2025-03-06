#include <stdio.h>

int main() {
    long long a, b;
    printf("Nhap a: "); scanf("%lld", &a);
    printf("Nhap b: "); scanf("%lld", &b);

    printf("%lld + %lld = %lld\n", a, b, a + b);
    printf("%lld - %lld = %lld\n", a, b, a - b);
    printf("%lld * %lld = %lld\n", a, b, a * b);
    printf("%lld / %lld = %lld\n", a, b, a / b);
    return 0;
}