// Add Two Numbers
// Source: https://leetcode.com/problems/add-two-numbers/

#include <stdio.h>
typedef struct ListNode
{
    int val;
    struct ListNode *next;
}ListNode;

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
{
    struct ListNode *result = NULL;
    struct ListNode *tail = NULL;
    int carry = 0, sum = 0;

    while (l1 != NULL || l2 != NULL || carry != 0)
    {
        int val1 = (l1 != NULL) ? l1->val : 0;
        int val2 = (l2 != NULL) ? l2->val : 0;
        sum = val1 + val2 + carry;
        carry = sum / 10;

        ListNode *newNode = malloc(sizeof(ListNode));
        newNode->val = sum % 10;
        newNode->next = NULL; // Ending newNode otherwise connects to garbage values

        if (result == NULL)
        {
            result = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }

        if (l1 != NULL) l1 = l1->next;
        if (l2 != NULL) l2 = l2->next;
    }

    return result;
}
