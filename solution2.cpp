#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

bool hasCycle(ListNode *head) {
    ListNode *nospeed = head;
    ListNode *speed = head;
    
    while (speed != NULL && speed->next != NULL) {
        nospeed = nospeed->next;      
        speed = speed->next->next;   
        if (nospeed == speed) {
            return true;
        }
    }
    return false;
}

int main() {

    ListNode *head = new ListNode(1);
    ListNode *node3 = new ListNode(3);
    ListNode *node4 = new ListNode(4);
    
    head->next = node3;     
    node3->next = node4;    
    node4->next = node3;      
    
    cout << (hasCycle(head) ? "true" : "false") << endl;

    return 0;
}
