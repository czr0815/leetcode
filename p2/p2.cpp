//
// Created by czr on 2021/11/27.
//
#include "p2.h"
#include <vector>
using namespace std;

ListNode* P2Solution1::addTwoNumbers(ListNode *l1, ListNode *l2) {
    ListNode *l = new ListNode(0);
    ListNode *s = nullptr;
    int x = 0;
    while(l1 != nullptr || l2 != nullptr){
        if(l1 != nullptr) {
            x += l1->val;
            l1 = l1->next;
        }
        if(l2 != nullptr) {
            x += l2->val;
            l2 = l2->next;
        }
        l->next = new ListNode(x%10, nullptr);
        l = l->next;
        if(s == nullptr) {
            s = l;
        }
        x = x/10;
    }
    if(x != 0) {
        l->next = new ListNode(x, nullptr);
    }
    return s;
}
