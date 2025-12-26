/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* beforeLeft = nullptr;
        ListNode* start = head;
        for (int i = 1; i < left; i++) {
            beforeLeft = start;
            start = start->next;
        }

        ListNode* curr = start;
        ListNode* prev = nullptr;

        for (int i = left; i <= right; i++) {
            ListNode* next;

            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        if (left != 1) {
            beforeLeft->next = prev;
        } else {
            head = prev;
        }

        start->next = curr;

        return head;
    }
};