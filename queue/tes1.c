#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

// Define the queue structure
typedef struct {
    int items[MAX_SIZE];
    int front;
    int rear;
} Queue;

// Function to initialize the queue
void initializeQueue(Queue *queue) {
    queue->front = -1;
    queue->rear = -1;
}

// Function to check if the queue is empty
int isEmpty(Queue *queue) {
    return queue->front == -1;
}

// Function to check if the queue is full
int isFull(Queue *queue) {
    return queue->rear == MAX_SIZE - 1;
}

// Function to add an element to the rear of the queue (enqueue)
void enqueue(Queue *queue, int value) {
    if (isFull(queue)) {
        printf("Queue is full. Cannot enqueue.\n");
        return;
    }
    if (isEmpty(queue)) {
        queue->front = 0; // If the queue is empty, set front to 0
    }
    queue->rear++;
    queue->items[queue->rear] = value;
}

// Function to remove an element from the front of the queue (dequeue)
int dequeue(Queue *queue) {
    if (isEmpty(queue)) {
        printf("Queue is empty. Cannot dequeue.\n");
        exit(EXIT_FAILURE);
    }
    int removedItem = queue->items[queue->front];
    if (queue->front == queue->rear) {
        // If there's only one element in the queue, reset front and rear
        queue->front = -1;
        queue->rear = -1;
    } else {
        queue->front++;
    }
    return removedItem;
}

int main() {
    Queue queue;
    initializeQueue(&queue);

    // Enqueue elements
    enqueue(&queue, 1);
    enqueue(&queue, 2);
    enqueue(&queue, 3);

    // Dequeue elements and print
    printf("%d\n", dequeue(&queue)); // Output: 1
    printf("%d\n", dequeue(&queue)); // Output: 2
    printf("%d\n", dequeue(&queue)); // Output: 3

    return 0;
}

