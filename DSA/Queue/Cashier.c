//Write a C program to create a Queue using structure for Cashier line in a store and display the results.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CUSTOMERS 100

struct Customer {
    int id;
    char name[50];
};

struct Queue {
    struct Customer data[MAX_CUSTOMERS];
    int front, rear, size;
};

void initialize(struct Queue* queue) {
    queue->front = -1;
    queue->rear = -1;
    queue->size = 0;
}

int isEmpty(const struct Queue* queue) {
    return queue->size == 0;
}

int isFull(const struct Queue* queue) {
    return queue->size == MAX_CUSTOMERS;
}

void enqueue(struct Queue* queue, struct Customer customer) {
    if (isFull(queue)) {
        printf("Queue is full\n");
        return;
    }

    if (isEmpty(queue)) {
        queue->front = 0;
    }

    queue->rear = (queue->rear + 1) % MAX_CUSTOMERS;
    queue->data[queue->rear] = customer;
    queue->size++;
}

struct Customer dequeue(struct Queue* queue) {
    if (isEmpty(queue)) {
        struct Customer emptyCustomer = {-1, "Empty"};
        printf("Queue is empty\n");
        return emptyCustomer;
    }

    struct Customer customer = queue->data[queue->front];
    if (queue->front == queue->rear) {
        queue->front = -1;
        queue->rear = -1;
    } else {
        queue->front = (queue->front + 1) % MAX_CUSTOMERS;
    }

    queue->size--;
    return customer;
}

int main() {
    struct Queue cashierQueue;
    initialize(&cashierQueue);

    int numCustomers;
    printf("Enter the number of customers: ");
    scanf("%d", &numCustomers);

    for (int i = 1; i <= numCustomers; i++) {
        struct Customer customer;
        customer.id = i;
        printf("Enter the name of Customer %d: ", i);
        scanf("%s", customer.name);
        enqueue(&cashierQueue, customer);
    }

    printf("\nCustomers at the cashier line:\n");
    while (!isEmpty(&cashierQueue)) {
        struct Customer customer = dequeue(&cashierQueue);
        printf("Customer %d: %s\n", customer.id, customer.name);
    }

    return 0;
}
