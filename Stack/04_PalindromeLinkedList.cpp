// 234. Palindrome L#ked List
#include <iostream>
using namespace std;

// Definition for singly-linked list
struct ListNode
{
    int val;
    ListNode *next;

    ListNode(int x)
    {
        val = x;
        next = NULL;
    }
};

class Solution
{
public:
    bool isPalindrome(ListNode *head)
    {
        if (head == NULL || head->next == NULL)
            return true;

        // Step 1: Find middle
        ListNode *slow = head;
        ListNode *fast = head;

        while (fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }

        // Step 2: Reverse second half
        ListNode *prev = NULL;
        while (slow != NULL)
        {
            ListNode *nextNode = slow->next;
            slow->next = prev;
            prev = slow;
            slow = nextNode;
        }

        // Step 3: Compare
        ListNode *left = head;
        ListNode *right = prev;

        while (right != NULL)
        {
            if (left->val != right->val)
                return false;

            left = left->next;
            right = right->next;
        }

        return true;
    }
};

int main()
{
    /*
        Linked List:
        1 -> 2 -> 2 -> 1
    */

    ListNode *head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(2);
    head->next->next->next = new ListNode(1);

    Solution sol;

    if (sol.isPalindrome(head))
        cout << "Linked List is a Palindrome" << endl;
    else
        cout << "Linked List is NOT a Palindrome" << endl;

    return 0;
}
