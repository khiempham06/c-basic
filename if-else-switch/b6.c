#include <stdio.h>
#include <math.h>

int main() {
    // cramer
    float a, b, c, d, e, f;
    scanf("%f%f%f%f%f%f", &a, &b, &c, &d, &e, &f);

    float D = a * e - d * b, D1 = c * e - f * b, D2 = a * f - d * c;
    if(D == 0) {
        if(D1 == 0 && D2 == 0) 
            printf("Vo so nghiem");
        else 
            printf("Vo nghiem");
    }
    else {
        printf("%f %f", D1 / D, D2 / D);
    }
}