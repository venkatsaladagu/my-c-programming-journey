#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a[100];      // original array
    int even[100];   // to store even numbers
    int odd[100];    // to store odd numbers
    int eCount = 0;  // count of even numbers
    int oCount = 0;  // count of odd numbers

    // Read elements into array a
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Separate even and odd
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            even[eCount] = a[i];
            eCount++;
        } else {
            odd[oCount] = a[i];
            oCount++;
        }
    }

    // Print even numbers
    printf("Even: ");
    for (int i = 0; i < eCount; i++) {
        printf("%d ", even[i]);
    }
    printf("\n");

    // Print odd numbers
    printf("Odd: ");
    for (int i = 0; i < oCount; i++) {
        printf("%d ", odd[i]);
    }
    printf("\n");

    return 0;
}