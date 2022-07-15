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
     int count=0,count2=0;
     ListNode*temp=head,*store=head,*move=head;
     while(temp!=NULL)
     {
      count++;
      temp=temp->next;
     }
     if(count==1)
     {
      return NULL;
     }
     count=count-n;
     count2=count;
     if(count==0)
     {
      head=head->next;
      return head;
     }
     while(count2!=0)
     {
      count2--;
      store=store->next;
     }
     count--;
     while(count!=0)
     {
      count--;
      move=move->next;
     }
     move->next=store->next;
     return head;
    }
};