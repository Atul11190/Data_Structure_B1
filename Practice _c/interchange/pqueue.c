#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

// Structure to represent a priority queue
struct PriorityQueue {
    int arr[MAX_SIZE];
    int size;
};

// Function to initialize an empty priority queue
void initialize(struct PriorityQueue* pq) {
    pq->size = 0;
}

// Function to swap two elements in the priority queue
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Function to enqueue an element with a priority
void enqueue(struct PriorityQueue* pq, int element) {
    if (pq->size >= MAX_SIZE) {
        printf("Priority queue is full. Cannot enqueue.\n");
        return;
    }

    // Add the element to the end of the array
    pq->arr[pq->size] = element;
    int current = pq->size;
    pq->size++;

    // Heapify up to maintain the min-heap property
    while (current > 0) {
        int parent = (current - 1) / 2;
        if (pq->arr[current] < pq->arr[parent]) {
            swap(&pq->arr[current], &pq->arr[parent]);
            current = parent;
        } else {
            break;
        }
    }
}

// Function to dequeue the element with the highest priority
int dequeue(struct PriorityQueue* pq) {
    if (pq->size == 0) {
        printf("Priority queue is empty. Cannot dequeue.\n");
        return -1; // Return a sentinel value to indicate an error.
    }

    int removed = pq->arr[0];
    pq->size--;

    // Move the last element to the root
    pq->arr[0] = pq->arr[pq->size];

    // Heapify down to maintain the min-heap property
    int current = 0;
    while (1) {
        int left = 2 * current + 1;
        int right = 2 * current + 2;
        int smallest = current;

        if (left < pq->size && pq->arr[left] < pq->arr[smallest]) {
            smallest = left;
        }

        if (right < pq->size && pq->arr[right] < pq->arr[smallest]) {
            smallest = right;
        }

        if (smallest != current) {
            swap(&pq->arr[current], &pq->arr[smallest]);
            current = smallest;
        } else {
            break;
        }
    }

    return removed;
}

int main() {
    struct PriorityQueue pq;
    initialize(&pq);

    enqueue(&pq, 3);
    enqueue(&pq, 1);
    enqueue(&pq, 4);
    enqueue(&pq, 1);
    enqueue(&pq, 5);

    while (pq.size > 0) {
        printf("%d ", dequeue(&pq));
    }

    return 0;
}
