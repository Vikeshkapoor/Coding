//Write a C program to create a Circular linked list using structure and Swap Adjacent Nodes in a Circular Linked List

#include <stdio.h>
#include <stdlib.h>

// Define a structure for a node in the circular linked list
struct Node {
    int data;
    struct Node* next;
};

// Function to insert a new node at the end of the circular linked list
void insertNode(struct Node** head, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;

    if (*head == NULL) {
        newNode->next = newNode; // Make it point to itself for the first node
        *head = newNode;
    } else {
        struct Node* tail = (*head)->next;
        while (tail->next != (*head)) {
            tail = tail->next;
        }
        newNode->next = (*head);
        tail->next = newNode;
    }
}

// Function to swap adjacent nodes in a circular linked list
void swapAdjacentNodes(struct Node** head) {
    if (*head == NULL || (*head)->next == *head) {
        printf("Circular linked list is empty or has only one element, cannot swap.\n");
        return;
    }

    struct Node* prev = *head;
    struct Node* current = (*head)->next;
    struct Node* nextNode = current->next;

    // Make the next node of the first node point to the node after the second node
    current->next = nextNode->next;
    nextNode->next = current;
    *head = nextNode; // Update the head if necessary

    // Adjust the 'prev' pointer to point to the new first node
    prev->next = *head;
}

// Function to display the circular linked list
void displayList(struct Node* head) {
    if (head == NULL) {
        printf("Circular linked list is empty.\n");
        return;
    }

    struct Node* current = head;

    do {
        printf("%d -> ", current->data);
        current = current->next;
    } while (current != head);

    printf("\n");
}

int main() {
    struct Node* head = NULL;
    int n, data;

    printf("Enter the number of elements in the circular linked list: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &data);
        insertNode(&head, data);
    }

    printf("Circular linked list before swapping adjacent nodes: ");
    displayList(head);

    swapAdjacentNodes(&head);

    printf("Circular linked list after swapping adjacent nodes: ");
    displayList(head);

    return 0;
}

