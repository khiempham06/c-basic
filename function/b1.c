#include <stdio.h>

long long poww(int x, int y) {
    long long res = 1;
    for(int i = 0; i < y; i++) 
        res *= x;
    
    return res;
}
int main() {
    int x, y;
    printf("Nhap x: "); scanf("%d", &x);
    printf("Nhap y: "); scanf("%d", &y);

    printf("%d ^ %d = %lld", x, y, poww(x, y));
}