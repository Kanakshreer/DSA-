#include<stdio.h>
#define size 7

struct stack
{
    int arr[size];
    int top;
};

struct stack s;

int isfull() {
    if (s.top == size - 1)
       return 1;
    else 
       return 0;
}
int isempty() {
    if (s.top == -1)
       return 1;
    else
       return 0;
}
void push(int x) {
    if (isfull())
        printf("*Overflow*\n");
    else {
        s.top = s.top + 1;
        s.arr[s.top] = x;
    }
}
void pop() {
    if (isempty())
        printf("*Underflow*\n");
    else {
        int x = s.arr[s.top];
        s.top--;
        printf("********** %d is deleted **********\n", x);
    }
}
void peek() {
    if (isempty())
        printf("********** Stack is Empty **********\n");
    else
        printf("********** %d is last element **********\n", s.arr[s.top]);
}

int main() {
    int x, y;
    s.top=-1;
    while (1) {
        printf("\nEnter your choice\n1. Push\n2. Pop\n3. Peek\n4. Exit\n: ");
        scanf("%d", &x);
        switch (x) {
            case 1:
                printf("Enter the number you want to push: ");
                scanf("%d", &y);
                push(y);
                break;
            case 2:
                pop();
                break;
            case 3:
                peek();
                break;
            case 4:
                return 0;
            default:
                printf("Invalid choice\n");
        }
    }
}
