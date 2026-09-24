#include <stdio.h>
int main() {
    int i = 1;
    do {
        if(i == 3)
            break;
        printf("%d ", i);
        i++;
    } while(i <= 5);
    return 0;
}