//
// Created by czr on 2021/11/27.
//

#ifndef LEETCODE_P2_H
#define LEETCODE_P2_H

struct ListNode {
    int val;
    ListNode *next;
    ListNode(): val(0), next(nullptr) {}
    ListNode(int x): val(x), next(nullptr) {}
    ListNode(int x, ListNode *next): val(x), next(next) {}
};

class P2Solution1 {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2);
};

#endif //LEETCODE_P2_H
