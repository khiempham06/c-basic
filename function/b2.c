#include <stdio.h>

long long gt(int n) {
    if(n == 0)
        return 1;
    return n * gt(n - 1);
}

int main() {
    int n;
    printf("Nhap n: "); scanf("%d", &n);

    printf("%d! = %lld", n, gt(n));
}