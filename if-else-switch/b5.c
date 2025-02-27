#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    scanf("%f%f%f", &a, &b, &c);

    if(a == 0) {
        printf("Vui long nhap pt bac 2");
    }
    else {
        float delta = b * b - 4 * a * c;
        if(delta < 0) {
            printf("Vo nghiem!");
        }
        else if(delta > 0) {
            float x1 = (-b + sqrt(delta)) / (2 * a);
            float x2 = (-b - sqrt(delta)) / (2 * a);
            printf("%f %f", x1, x2);
        }
        else {
            float x = (-b) / (2 * a);
            printf("%f", x);
        }
    }
}