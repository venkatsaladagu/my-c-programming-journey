#include <stdio.h>
int main() {
    int a[5] = {10, 15, 20, 25, 30};
    int i = 2;
    printf("%d", a[i] + a[i+1] - a[i-1]);
    return 0;
}