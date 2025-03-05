#include <stdio.h>

int main() {
    long long s = 0;
    for(int i = 0; i < 10; i++) {
        int n;
        scanf("%d", &n);
        s += n;
    }
    printf("%ld", s);

    return 0;
}