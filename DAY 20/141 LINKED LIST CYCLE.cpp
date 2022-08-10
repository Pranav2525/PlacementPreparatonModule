/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
     if(head==NULL)
     {
      return false;
     }
     ListNode *slow=head,*fast=head->next;
     while(slow!=fast)
     {
      slow=slow->next;
      if(fast!=NULL&&fast->next!=NULL)
      {
       fast=fast->next->next;
      }
      else
      {
       return false;
      }
     }
     return true;
    }
};