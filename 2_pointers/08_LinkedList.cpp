// 141. Linked List Cycle
#include<iostream>
using namespace std;

struct ListNode{
    int val;
    ListNode* next;
    ListNode(int x): val(x), next(NULL){};
};

bool cyclePresent(ListNode* head){
    if(head == NULL){
        return false;
    }

    ListNode *slow = head;
    ListNode *fast = head;
    if(fast != nullptr || fast-> next != nullptr){
        slow = slow->next;
        fast = fast->next->next;
        if(fast == slow){
            return true;
        }
    }
    return false;
};
int main(){
    ListNode* head = new ListNode(3);
    ListNode *second = new ListNode(2);
    ListNode *third = new ListNode(0);
    ListNode *fourth = new ListNode(-4);

    head -> next = second;
    second -> next = third;
    third -> next = fourth;
    fourth -> next = second;

    cout << cyclePresent(head) << endl;

    return 0;
}