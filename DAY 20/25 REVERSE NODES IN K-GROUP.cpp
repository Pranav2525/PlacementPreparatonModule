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
    ListNode* reverseKGroup(ListNode* head, int k) {
     int count=0,done=0;
     if(k==1)
     {
      return head;
     }
     ListNode *prev1=NULL,*next1=NULL,*mover=head,*mover1=head,*start,*prev=NULL,*next,*curr;
     while(mover!=NULL)
     {
      count=1;
      mover1=mover;
      while(count!=k&&mover1!=NULL)
      {
       count++;
       mover1=mover1->next;
      }
      if(mover1==NULL)
      {
       break;
      }
      else
      {
       count=0;
       start=mover;
       curr=mover;
       prev=NULL;
       while(count!=k)
       {
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
        count++;
       }
       if(done==0)
       {
        head=prev;
        done=1;
       }
       if(prev1==NULL)
       {
        prev1=start;
       }
       else
       {
        prev1->next=prev;
        prev1=start;
       }
       mover=curr;
      }
     }
     prev1->next=mover;
     return head;
    }
};