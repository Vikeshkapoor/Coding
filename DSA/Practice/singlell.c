//Write a C program to create a Single linked list using structure and Count the Occurrences of Elements in a Linked List.

#include <stdio.h>
#include <stdlib.h>

// Define a structure for a node in the linked list
struct Node {
    int data;
    struct Node* next;
};

// Function to insert a new node at the end of the linked list
void insertNode(struct Node** head, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;

    if (*head == NULL) {
        *head = newNode;
    } else {
        struct Node* current = *head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = newNode;
    }
}

// Function to count the occurrences of a given element in the linked list
int countOccurrences(struct Node* head, int target) {
    int count = 0;
    struct Node* current = head;

    while (current != NULL) {
        if (current->data == target) {
            count++;
        }
        current = current->next;
    }

    return count;
}

int main() {
    struct Node* head = NULL;
    int n, data;

    printf("Enter the number of elements in the linked list: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &data);
        insertNode(&head, data);
    }

    printf("Enter the element to count occurrences: ");
    scanf("%d", &data);

    int occurrences = countOccurrences(head, data);
    printf("Occurrences of %d in the linked list: %d\n", data, occurrences);

    return 0;
}
