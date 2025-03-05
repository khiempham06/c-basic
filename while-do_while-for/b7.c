#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    double s = 0;
    for(int i = 1; i <= n; i++) 
        s += (1.0 / i);
    
    printf("%lf", s);
    
    return 0;
}