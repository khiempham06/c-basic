#include <stdio.h>

int main() {
    int a[] = {1, 4, 6, 9, 4, 0, 5, 3, 3, 10};
    int len = sizeof(a) / sizeof(a[0]);

    for(int i = 0; i < len; i++) 
        printf("%d ", a[i]);
    return 0;
}