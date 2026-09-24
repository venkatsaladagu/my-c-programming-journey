#include <stdio.h>
int main() {
    int i = 1;
    do {
        if(i == 2)
            break;
        printf("%d ", i);
        i++;
    } while(i <= 4);
    return 0;
}