#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Queue {
    struct Node *front;
    struct Node *rear;
};

void enqueue(struct Queue *queue, int data) {
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    new_node->data = data;
    new_node->next = NULL;

    if (queue->rear == NULL) {
        queue->front = new_node;
        queue->rear = new_node;
    } else {
        queue->rear->next = new_node;
        queue->rear = new_node;
    }
}

int dequeue(struct Queue *queue) {
    if (queue->front == NULL) {
        return -1;
    }

    struct Node *temp = queue->front;
    int data = temp->data;
    queue->front = queue->front->next;

    if (queue->front == NULL) {
        queue->rear = NULL;
    }

    free(temp);

    return data;
}

int main() {
    struct Queue *queue = (struct Queue *)malloc(sizeof(struct Queue));
    queue->front = NULL;
    queue->rear = NULL;

    enqueue(queue, 1);
    enqueue(queue, 2);
    enqueue(queue, 3);

    printf("%d\n", dequeue(queue));
    printf("%d\n", dequeue(queue));
    printf("%d\n", dequeue(queue));

    return 0;
}