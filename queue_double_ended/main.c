#include <stdio.h>
#include <stdlib.h>
#include <unistd.h> // Untuk sleep pada Unix
// #include <windows.h> // Untuk Sleep pada Windows (komentari baris di atas dan uncomment baris ini jika menggunakan Windows)

#define MAX 100

int main() {
    int arr[MAX];
    int front = -1;
    int rear = 0;
    int size = 0;
    int choice, data;

    while (1) {
        printf("\nMenu:\n");
        printf("1. Insert Front\n");
        printf("2. Insert Rear\n");
        printf("3. Delete Front\n");
        printf("4. Delete Rear\n");
        printf("5. Display Deque\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: // Insert Front
                if (size == MAX) {
                    printf("Deque is full!\n");
                } else {
                    printf("Enter data to insert at front: ");
                    scanf("%d", &data);
                    if (front == -1) {
                        front = 0;
                        rear = 0;
                    } else if (front == 0) {
                        front = MAX - 1;
                    } else {
                        front--;
                    }
                    arr[front] = data;
                    size++;
                    printf("Inserted %d at front\n", data);
                }
                break;
            case 2: // Insert Rear
                if (size == MAX) {
                    printf("Deque is full!\n");
                } else {
                    printf("Enter data to insert at rear: ");
                    scanf("%d", &data);
                    if (front == -1) {
                        front = 0;
                        rear = 0;
                    } else if (rear == MAX - 1) {
                        rear = 0;
                    } else {
                        rear++;
                    }
                    arr[rear] = data;
                    size++;
                    printf("Inserted %d at rear\n", data);
                }
                break;
            case 3: // Delete Front
                if (size == 0) {
                    printf("Deque is empty!\n");
                } else {
                    printf("Deleted %d from front\n", arr[front]);
                    if (front == rear) {
                        front = -1;
                        rear = -1;
                    } else if (front == MAX - 1) {
                        front = 0;
                    } else {
                        front++;
                    }
                    size--;
                }
                break;
            case 4: // Delete Rear
                if (size == 0) {
                    printf("Deque is empty!\n");
                } else {
                    printf("Deleted %d from rear\n", arr[rear]);
                    if (front == rear) {
                        front = -1;
                        rear = -1;
                    } else if (rear == 0) {
                        rear = MAX - 1;
                    } else {
                        rear--;
                    }
                    size--;
                }
                break;
            case 5: // Display Deque
                if (size == 0) {
                    printf("Deque is empty!\n");
                } else {
                    printf("Elements in deque: ");
                    int i = front;
                    while (1) {
                        printf("%d ", arr[i]);
                        if (i == rear) break;
                        i = (i + 1) % MAX;
                    }
                    printf("\n");
                }
                break;
            case 6: // Exit
                exit(0);
            default:
                printf("Invalid choice!\n");
        }

        // Always display the current state of the deque
        if (size == 0) {
            printf("Deque is empty!\n");
        } else {
            printf("Current deque: ");
            int i = front;
            while (1) {
                printf("%d ", arr[i]);
                if (i == rear) break;
                i = (i + 1) % MAX;
            }
            printf("\n");
        }

        sleep(1); // Ganti sleep dengan Sleep(1000) jika menggunakan Windows
    }

    return 0;
}
