c
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

void enqueue(struct Node **queue, int data) {
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    new_node->data = data;
    new_node->next = NULL;

    if (*queue == NULL) {
        *queue = new_node;
    } else {
        struct Node *temp = *queue;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = new_node;
    }
}

int dequeue(struct Node **queue) {
    if (*queue == NULL) {
        return -1;
    }

    struct Node *temp = *queue;
    int data = temp->data;
    *queue = (*queue)->next;

    free(temp);

    return data;
}

int main() {
    struct Node *queue = NULL;

    enqueue(&queue, 1);
    enqueue(&queue, 2);
    enqueue(&queue, 3);

    printf("%d\n", dequeue(&queue));
    printf("%d\n", dequeue(&queue));
    printf("%d\n", dequeue(&queue));

    return 0;
}