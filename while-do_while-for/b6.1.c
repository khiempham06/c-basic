#include <stdio.h>

int main() {
    int a, b;
    printf("Nhap a: "); scanf("%d", &a);
    printf("Nhap b: "); scanf("%d", &b);

    int gcd = (a < b) ? a : b;
    while(gcd > 0)
    {
       if(a % gcd == 0 && b % gcd == 0)
         break;
       gcd--;
    }

    long long lcm = (a / gcd) * b;
    printf("Uoc chung lon nhat: %d\nBoi chung nho nhat: %ld\n", gcd, lcm);
    
    return 0;
}