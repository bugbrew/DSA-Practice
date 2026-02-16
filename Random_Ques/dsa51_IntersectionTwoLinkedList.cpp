// 160. Intersection of Two Linked Lists
#include<iostream>
using namespace std;


struct ListNode{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL){}
                                   
};

ListNode *getIntersectionNode(ListNode *headA, ListNode *headB){
    ListNode *a = headA;
    ListNode *b = headB;

    while(a != b){
        if(a == NULL){
            a = headB;
        }
        a->next;
        if(b == NULL){
            b = headA;
        }
        b->next;
    }
    return a;
};

int main(){
    return 0;
}