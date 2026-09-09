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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int size = 0 ; 
        ListNode *dummy = head;
       while(dummy != NULL)
       {
        dummy = dummy->next;
        size++;
       }
      
       dummy = head;
       ListNode *target;
       ListNode *d;
       for(int i = 1 ; i < size-n ; i++ )
       {
        dummy = dummy->next;
        
       }
      if(size==n) return head->next;
      // target = dummy->next->next;
       dummy->next = dummy->next->next;
       return head;
    }
};