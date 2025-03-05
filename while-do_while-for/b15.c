#include <stdio.h>

double poww(double n, int m) {
    double s = 1;
    for(int i = 1; i <= m; i++) 
        s *= n;
    
    return s;
}

int main() {
    long long a, n;
    scanf("%ld%ld", &a, &n);

    printf("%lf", a * poww((1 + (0.45 / 100)), n));
    
    return 0;
}