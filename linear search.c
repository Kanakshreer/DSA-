#include <stdio.h> 
 
int linear_search(int*a, int size, int num) {
	int i; 
    for ( i = 0; i < size; i++) { 
        if (a[i] == num)  
            return i; 
    } 
     
    return -1;
}
 
int main() {
	int num,x,size; 
    int a[] = {2, 4, 0, 1, 9}; 
    size = sizeof(a) / sizeof(int); 
    printf("Enter the number which you want to search:");
    scanf("%d",&num);
    x=linear_search(a,size,num);

    if (x != -1) { 
        printf("Element found at index: %d\n", x); 
    } else { 
        printf("Element not found\n"); 
    } 
    return 0; 
}

