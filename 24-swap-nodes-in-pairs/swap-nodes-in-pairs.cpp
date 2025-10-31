/**
 * Definition for singly‐linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(nullptr) {}
 * };
 */
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        ListNode dummy(0);
        dummy.next = head;
        ListNode* prev = &dummy;
        ListNode* curr = head;

        while (curr && curr->next) {
            ListNode* first = curr;
            ListNode* second = curr->next;

            // swap
            prev->next = second;
            first->next = second->next;
            second->next = first;

            // advance pointers
            prev = first;
            curr = first->next;
        }

        return dummy.next;
    }
};
