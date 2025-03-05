#include <stdio.h>

double poww(double n, int m) {
    double s = 1;
    for(int i = 1; i <= m; i++) 
        s *= n;
    
    return s;
}

int main() {
    double s, g;
    scanf("%lf%lf", &s, &g);

    double tmp;
    int res = 0;

    printf("Nam\tGDP\n");
    do {
        tmp = s * poww(1 + (g / 100), res);
        printf("%d\t%lf\n", 2014 + res, tmp);
        res++;
    } while(tmp <= s * 2);

    return 0;
}