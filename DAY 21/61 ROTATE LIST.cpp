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
    ListNode* rotateRight(ListNode* head, int k) {
     int count=0,rotate=0;
     ListNode *temp=head,*prev,*begin,*next,*temp1;
     if(head==NULL||head->next==NULL)
     {
      return head;
     }
     while(temp!=NULL)
     {
      count++;
      prev=temp;
      temp=temp->next;
     }
     k=k%count;
     if(k==0)
     {
      return head;
     }
     rotate=count-k-1;
     temp1=head;
     while(rotate)
     {
      temp1=temp1->next;
      rotate--;
     }
     next=temp1->next;
     temp1->next=NULL;
     prev->next=head;
     return next;
    }
};