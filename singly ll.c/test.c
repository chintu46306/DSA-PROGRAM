#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};

void printer(struct Node *head)
{
    printf("\nLinked List is : \n");
    while (head != NULL)
    {
        printf("%d \t", head->data);
        head = head->next;
    }
    printf("\n");
}

void insetAtBegin(struct Node *head)
{
    int choice = 0, temp = 0;
    printf("want to insert at begin (0 or 1): ");
    scanf("%d", &choice);
    if (choice == 1)
    {
        printf("Enter the element: ");
        scanf("%d", &temp);

        struct Node *beginNode = (struct Node *)malloc(sizeof(struct Node));
        beginNode->data = temp;
        beginNode->next = head;

        head = beginNode;
    }
}

void main()
{
    printf("Please enter the first element: ");
    int temp;
    scanf("%d", &temp);
    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
    head->data = temp;
    head->next = NULL;

    struct Node *current = head;

    int choice = 0;
    printf("want to continue (0 or 1): ");
    scanf("%d", &choice);

    while (choice == 1)
    {
        printf("Enter the element: ");
        scanf("%d", &temp);

        struct Node *tempNode = (struct Node *)malloc(sizeof(struct Node));
        tempNode->data = temp;
        tempNode->next = NULL;

        current->next = tempNode;
        current = current->next;
        printf("want to continue (0 or 1): ");
        scanf("%d", &choice);
    }

    printer(head);

    printer(head);
}