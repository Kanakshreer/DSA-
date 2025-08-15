#include <stdio.h>


int GCD(int A, int B) {
    if (B != 0)
        return GCD(B, A % B);
    else
        return A;
}

int main() {
    int A, B, d;

    printf("Enter two integers:\n");
    scanf("%d %d", &A, &B); 

    d = GCD(A, B);  

    printf("GCD of %d and %d is %d\n", A, B, d); 

    return 0;
}

