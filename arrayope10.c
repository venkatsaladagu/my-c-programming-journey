#include <stdio.h>
int main() {
    int a[5] = {3, 6, 9, 12, 15};
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        if (i % 2 == 0)
            sum += a[i] / 3;
    }
    printf("%d", sum);
    return 0;
}