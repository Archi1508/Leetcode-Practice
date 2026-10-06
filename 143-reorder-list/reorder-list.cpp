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
    void reorderList(ListNode* head) {
         while(head!=nullptr && head->next!= nullptr && head->next->next != nullptr)
        {
        ListNode* prev = nullptr;
        ListNode* curr = head;

        while(curr->next!=nullptr)
        {
            prev = curr;
            curr=curr->next;
        }
        ListNode* nextHead = head->next;
        prev->next = NULL;
        head->next =  curr;
        curr->next = nextHead;

        head = nextHead;
        }
       
    }
    
};