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
    ListNode* removeElements(ListNode* head, int val) {
     ListNode *result=NULL,*temp,*prev;
     while(result==NULL)
     {
      if(head==NULL)
      {
       return head;
      }
      else if(head->val==val)
      {
       head=head->next;
      }
      else
      {
       result=prev=head;
       temp=head->next;
      }
     }
     while(temp!=NULL)
     {
      if(temp->val!=val)
      {
       prev->next=temp;
       prev=temp;
      }
      temp=temp->next;
     }
     prev->next=NULL;
     return result;
    }
};