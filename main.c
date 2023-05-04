#include <stdio.h>

#define MAX 100

int stack[MAX];
int top = -1;

void push(int x) {
    if (top == MAX - 1) {
        printf("Error: Stack overflow\n");
        return;
    }
    stack[++top] = x;
}

void pop() {
    if (top == -1) {
        printf("Error: Stack underflow\n");
        return;
    }
    top--;
}

void display() {
    if (top == -1) {
        printf("Error: Stack is empty\n");
        return;
    }
    for (int i = top; i >= 0; i--) {
        printf("%d ", stack[i]);
    }
    printf("\n");
}

int main() {
    push(1);
    push(2);
    push(3);
    display();
    pop();
    display();
}