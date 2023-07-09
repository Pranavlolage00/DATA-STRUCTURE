#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_SIZE 100

typedef struct {
    char arr[MAX_SIZE];
    int top;
} Stack;

void initialize(Stack* stack) {
    stack->top = -1;
}

int isFull(Stack* stack) {
    return stack->top == MAX_SIZE - 1;
}

int isEmpty(Stack* stack) {
    return stack->top == -1;
}

void push(Stack* stack, char c) {
    if (isFull(stack)) {
        printf("Stack Overflow!\n");
        exit(1);
    }
    stack->arr[++stack->top] = c;
}

char pop(Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack Underflow!\n");
        exit(1);
    }
    return stack->arr[stack->top--];
}

int isPalindrome(char* str) {
    Stack stack;
    initialize(&stack);
    int length = strlen(str);
    int i;

    for (i = 0; i < length / 2; i++) {
        push(&stack, str[i]);
    }

    if (length % 2 == 1) {
        i++;
    }

    while (str[i] != '\0') {
        char c = pop(&stack);
        if (c != str[i]) {
            return 0; // Not a palindrome
        }
        i++;
    }

    return 1; // Palindrome
}

int main() {
    char str[MAX_SIZE];
    printf("Enter a string: ");
    fgets(str, MAX_SIZE, stdin);
    str[strcspn(str, "\n")] = '\0'; // Remove trailing newline character

    if (isPalindrome(str)) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}
