#include <stdio.h>
#include <math.h>

int main() {
    long long s = 0;
    for(int i = 1; i <= 100; i++) {
        if(i % 2 != 0) 
            s += i;
    }
    printf("%ld", s);

    return 0;
}