#include <stdio.h>
#include <stdlib.h>

// Define the Node structure
struct Node {
    int data;
    struct Node *next;
};

int main() {
    // Create nodes
    struct Node *head = malloc(sizeof(struct Node));
    struct Node *second = malloc(sizeof(struct Node));
    struct Node *third = malloc(sizeof(struct Node));

    // Initialize nodes
    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = NULL;

    printf("The memory address of struct Node *next is:%p while that of (*head).next is %p",  struct Node *next, head ->data);

    free(head);
    free(second);
    free(third);

    return 0;
}
