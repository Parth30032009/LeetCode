#include <stdio.h>
#include <stdlib.h>
#include "solution.c"
#include "../../utils/timer.h"



// Function prototypes
ListNode* makeList(int size);
void printList(ListNode* head);

int main() {
    start_timer();

    // Create test lists
    ListNode *l1 = makeList(3);  // Example: random 3-digit number as list
    ListNode *l2 = makeList(3);  // Example: another 3-digit number

    printf("List 1: ");
    printList(l1);
    printf("List 2: ");
    printList(l2);

    // Add the two numbers
    ListNode *result = addTwoNumbers(l1, l2);
    printf("Result: ");
    printList(result);

    end_timer();
    return 0;
}

ListNode* makeList(int size) {
    if (size <= 0) return NULL;

    ListNode *head = (ListNode*)malloc(sizeof(ListNode));
    head->val = rand() % 10;
    head->next = NULL;

    ListNode *current = head;
    for (int i = 1; i < size; i++) {
        ListNode *node = (ListNode*)malloc(sizeof(ListNode));
        node->val = rand() % 10;
        node->next = NULL;
        current->next = node;
        current = node;
    }
    return head;
}

void printList(ListNode* head) {
    while (head) {
        printf("%d", head->val);
        if (head->next) printf(" -> ");
        head = head->next;
    }
    printf("\n");
}
