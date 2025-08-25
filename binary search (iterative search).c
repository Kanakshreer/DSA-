#include <stdio.h>
int binary(int a[], int n, int num) {
    int low = 0, high = n - 1, mid;

    while (low <= high) {
        mid = (low + high) / 2;

        if (a[mid] == num)
            return mid;  
        else if (a[mid] < num)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;  
}

int main() {
    int num, x;
    int a[] = {2, 3, 5, 7, 12, 13, 16, 21, 90, 105, 654, 1081};
    int size = sizeof(a) / sizeof(int);

    printf("Enter the number you want to search: ");
    scanf("%d", &num);

    x = binary(a, size, num);

    if (x == -1)
        printf("%d does not exist in the array\n", num);
    else
        printf("%d is present at index %d\n", num, x);

    return 0;
}

