#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    int priority;
    struct node* next;
};

struct node* newNode(int data, int priority) {
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->data = data;
    temp->priority = priority;
    temp->next = NULL;

    return temp;
};

int peek(struct node** head) {
    return (*head)->data;
}

void pop(struct node** head) {
    struct node* temp = *head;
    (*head) = (*head)->next;
    free(temp);
}

void push(struct node** head, int data, int priority) {
    struct node* start = (*head);
    struct node* temp = newNode(data, priority);

    if ((*head)->priority > priority) {
        temp->next = *head;
        (*head) = temp;
    } else {
        while (start->next != NULL && start->next->priority < priority) {
            start = start->next;
        }
        temp->next = start->next;
        start->next = temp;
    }
}

int isEmpty(struct node** head) {
    return (*head) == NULL;
}

int main() {
    // Create a Priority Queue
    // 7->4->5->6
    struct node* pq = newNode(4, 1);
    push(&pq, 5, 2);
    push(&pq, 6, 3);
    push(&pq, 7, 0);

    while (!isEmpty(&pq)) {
        printf("%d ", peek(&pq));
        pop(&pq);
    }

    return 0;
}