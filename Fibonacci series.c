#include <stdio.h>

int i = 0, prev1 = 0, prev2 = 1, next;
void Fibonacci(int n) {
    if (i >= n)  
        return;

    if (i == 0 || i == 1)
        printf("%d",i);
    else {
        next = prev1 + prev2;
        printf("%d",next);
        prev1 = prev2;
        prev2 = next;
    }

    
    i++;
    return Fibonacci(n);  
}

main() {
    int n;
    printf("Enter number of terms: ");
    scanf("%d", &n);  

    printf("Fibonacci series: ");
    Fibonacci(n);
    return 0;
}

