#include <stdio.h>

long long fibo(int n) {
    if(n == 1 || n == 2)
        return 1;
    return fibo(n - 1) + fibo(n - 2); 
}

int main() {
    int n;
    printf("Nhap n: "); scanf("%d", &n);

    printf("So fibonacci thu %d la: %lld", n, fibo(n));
}