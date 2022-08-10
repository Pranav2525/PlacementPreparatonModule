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
    ListNode *detectCycle(ListNode *head) {
     if(head==NULL)
     {
      return NULL;
     }
     ListNode* slow=head,*fast=head->next;
     while(slow!=fast)
     {
      if(fast!=NULL&&fast->next!=NULL)
      {
       slow=slow->next;
       fast=fast->next->next;
      }
      else
      {
       return NULL;
      }
     }
     fast=head;
     slow=slow->next;
     while(slow!=fast)
     {
      slow=slow->next;
      fast=fast->next;
     }
     return slow;
    }
};