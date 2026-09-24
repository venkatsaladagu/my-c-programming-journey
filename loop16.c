#include <stdio.h>
int main() {
    int i = 1, j = 1;
    while(i <= 2) {
        while(j <= 3) {
            printf("%d ", j);
            j++;
        }
        i++;
    }
    return 0;
}
