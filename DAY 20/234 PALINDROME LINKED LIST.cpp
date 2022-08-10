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
    bool isPalindrome(ListNode* head) {
     if(head->next==NULL)
     {
      return true;
     }
     int count=0;
     ListNode* temp=head;
     while(temp!=NULL)
     {
      count++;
      temp=temp->next;
     }
     if(count%2==0)
     {
      count/=2;
     }
     else
     {
      count/=2;
      count+1;
     }
     ListNode *prev=NULL,*curr,*next,*start;
     temp=head;
     while(count)
     {
      temp=temp->next;
      count--;
     }
     curr=temp;
     while(curr!=NULL)
     {
      next=curr->next;
      curr->next=prev;
      prev=curr;
      curr=next;
     }
     start=prev;
     while(start!=NULL)
     {
      if(start->val!=head->val)
      {
       return false;
      }
      start=start->next;
      head=head->next;
     }
     return true;
    }
};