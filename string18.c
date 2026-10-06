#include <stdio.h>
int main() {
    int a[5] = {10, 15, 20, 25, 30};
    for (int i = 0; i < 5; i++) {
        if (a[i] % 2 == 0)
            a[i] = a[i] / 2;
        else
            a[i] = a[i] * 2;
    }
    printf("%d", a[1] + a[3]);
    return 0;
}