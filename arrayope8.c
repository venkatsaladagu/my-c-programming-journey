#include <stdio.h>
int main() {
    int a[5] = {2, 3, 5, 7, 11};
    int prod = 1;
    for (int i = 0; i < 5; i++) {
        if (i % 2 == 1)
            prod *= a[i];
    }
    printf("%d", prod);
    return 0;
}