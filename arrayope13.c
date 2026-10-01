#include <stdio.h>
int main() {
    int a[5] = {2, 3, 5, 7, 11};
    int cnt = 0;
    for (int i = 0; i < 5; i++) {
        int f = 0;
        for (int j = 2; j * j <= a[i]; j++) {
            if (a[i] % j == 0)
                f = 1;
        }
        if (f == 0 && a[i] > 1)
            cnt++;
    }
    printf("%d", cnt);
    return 0;
}