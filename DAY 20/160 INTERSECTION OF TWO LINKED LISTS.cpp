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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
     ListNode *temp1,*temp2;
     int list1=0,list2=0;
     temp1=headA;
     temp2=headB;
     while(temp1!=NULL)
     {
      list1++;
      temp1=temp1->next;
     }
     while(temp2!=NULL)
     {
      list2++;
      temp2=temp2->next;
     }
     temp1=headA;
     temp2=headB;
     if(list1>list2)
     {
      while(list1!=list2)
      {
       temp1=temp1->next;
       list1--;
      }
     }
     else if(list1<list2)
     {
      while(list1!=list2)
      {
       temp2=temp2->next;
       list2--;
      }
     }
     while(temp1!=NULL)
     {
      if(temp1==temp2)
      {
       return temp2;
      }
      else
      {
       temp1=temp1->next;
       temp2=temp2->next;
      }
     }
     return NULL;
    }
};