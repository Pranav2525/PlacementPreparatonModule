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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
     int carry=0,temp=0;
     ListNode* head=l1,*prev=NULL;
     while(l1!=NULL&&l2!=NULL)
     {
      if((l1->val+l2->val+carry)<=9)
      {
       l1->val=l1->val+l2->val+carry;
       carry=0;
      }
      else
      {
       temp=l1->val+l2->val+carry;
       l1->val=temp%10;
       carry=temp/10;
      }
      prev=l1;
      l1=l1->next;
      l2=l2->next;
     }
     if(l2==NULL)
     {
      while(l1!=NULL)
      {
       if((l1->val+carry)<=9)
       {
        l1->val=l1->val+carry;
        carry=0;
       }
       else
       {
        temp=l1->val+carry;
        l1->val=temp%10;
        carry=temp/10;
       }
       prev=l1;
       l1=l1->next;
      }
     }
     else
     {
      l1=prev;
      l1->next=l2;
      l1=l1->next;
      while(l1!=NULL)
      {
       if((l1->val+carry)<=9)
       {
        l1->val=l1->val+carry;
        carry=0;
       }
       else
       {
        temp=l1->val+carry;
        l1->val=temp%10;
        carry=temp/10;
       }
       prev=l1;
       l1=l1->next;
      }
     }
     if(carry==0)
     {
      return head;
     }
     else
     {
      ListNode *newnode=new ListNode(carry);
      prev->next=newnode;
     }
     return head;
    }
};