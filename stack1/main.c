#include <stdio.h>
#include <stdlib.h>

#define MAX 5

int main() {
    int stack[MAX];
    int top = -1;
    int choice, item;

    while (1) {
        printf("\nMenu:\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            // Push operation
            if (top == MAX - 1) {
                printf("Stack is full. Cannot push element.\n");
            } else {
                printf("Enter the element to push: ");
                scanf("%d", &item);
                stack[++top] = item;
                printf("Pushed: %d\n", item);
            }
        } else if (choice == 2) {
            // Pop operation
            if (top == -1) {
                printf("Stack is empty. Cannot pop element.\n");
            } else {
                item = stack[top--];
                printf("Popped: %d\n", item);
            }
        } else if (choice == 3) {
            // Display operation
            if (top == -1) {
                printf("Stack is empty.\n");
            } else {
                printf("Stack elements: ");
                for (int i = 0; i <= top; i++) {
                    printf("%d ", stack[i]);
                }
                printf("\n");
            }
        } else if (choice == 4) {
            // Exit
            exit(0);
        } else {
            printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
