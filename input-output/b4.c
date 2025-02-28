#include <stdio.h>

#define PI 3.141592653589793238462643383279

int main() {
    double r;
    scanf("%lf", &r);
    printf("Dien tich: %lf\n", 4 * PI * r * r);
    printf("The tich: %lf\n", (4 / 3) * PI * r * r * r);
    return 0;
}