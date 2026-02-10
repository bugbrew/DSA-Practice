// 160. Intersection of Two Linked Lists
#include <iostream>
using namespace std;

struct ListNode{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
{
    if (!headA || !headB)
        return NULL;

    ListNode *a = headA;
    ListNode *b = headB;

    while (a != b)
    {
        if (a == NULL)
            a = headB;
        else
            a = a->next;

        if (b == NULL)
            b = headA;
        else
            b = b->next;
    }

    return a; // intersection node or NULL
}

int main(){
    ListNode* intersect = new ListNode(8);
    intersect->next = new ListNode(4);
    intersect->next->next = new ListNode(5);

    // ----- List A: 4 -> 1 -> 8 -> 4 -> 5 -----
    ListNode *headA = new ListNode(4);
    headA -> next = new ListNode(1);
    headA->next->next = intersect;

    // ----- List B: 5 -> 6 -> 1 -> 8 -> 4 -> 5 -----
    ListNode *headB = new ListNode(5);
    headB->next = new ListNode(6);
    headB->next->next = new ListNode(1);
    headB->next->next->next = intersect;

    ListNode *ans = getIntersectionNode(headA, headB);

    if (ans)
        cout << "Intersected at '" << ans->val << "'" << endl;
    else
        cout << "No intersection" << endl;

    return 0;
}
