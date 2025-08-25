#include <stdio.h>

int binary_search(int *a, int low, int high, int num) {
    if (high < low)
        return -1;

    int mid = (low + high) / 2;

    if (a[mid] == num)
        return mid;
    else if (a[mid] < num)
        return binary_search(a, mid + 1, high, num);
    else
        return binary_search(a, low, mid - 1, num);
}

int main() {
    int num, x, low = 0, high;
    int a[] = {3, 5, 7, 12, 21, 43, 90, 105};
    int size = sizeof(a) / sizeof(int);

    printf("Enter the number which you want to search: ");
    scanf("%d", &num);

    high = size - 1;
    x = binary_search(a, low, high, num);

    if (x != -1) {
        printf("Element found at index: %d\n", x);
    } else {
        printf("Element not found\n");
    }

    return 0;
}

