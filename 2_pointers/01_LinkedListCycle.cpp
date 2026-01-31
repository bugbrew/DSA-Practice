// 141. Linked List Cycle
#include<iostream>
using namespace std;

struct ListNode{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

bool hasCycle(ListNode* head){
    if(head == nullptr){
        return false;
    }

    ListNode *slow = head;
    ListNode *fast = head;

    while(fast != nullptr && fast -> next != nullptr){
        slow = slow->next;
        fast = fast->next->next;

        if(slow == fast){
            return true;
        }
    }
    return false;
};
int main(){
    // Creating nodes
    ListNode *head = new ListNode(3);
    ListNode *second = new ListNode(2);
    ListNode *third = new ListNode(0);
    ListNode *fourth = new ListNode(-4);

    // Linking nodes
    head -> next = second;
    second -> next = third;
    third -> next = fourth;
    // Creating a cycle: last node points to second
    fourth -> next = second;

    cout << hasCycle(head) << endl;
    return 0;

    // int n;
    // cin >> n;
    
    // if (n == 0)
    // {
        // cout << 0 << endl;
        // return 0;
    // }

    // Create head
    // int x;
    // cin >> x;
    // ListNode *head = new ListNode(x);
    // ListNode *curr = head;

    // Store nodes to help create cycle
    // ListNode *nodes[1000];
    // nodes[0] = head;

    // for (int i = 1; i < n; i++)
    // {
        // cin >> x;
        // curr->next = new ListNode(x);
        // curr = curr->next;
        // nodes[i] = curr;
    // }

    // int pos;
    // cin >> pos; // position where tail connects

    // if (pos != -1)
    // {
        // curr->next = nodes[pos];
    // }

    // cout << hasCycle(head) << endl;
    // return 0;
}