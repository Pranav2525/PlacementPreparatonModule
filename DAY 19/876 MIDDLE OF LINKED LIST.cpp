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
    ListNode* middleNode(ListNode* head) {
     ListNode *temp=head,*middle=head;
     int count=0;
     while(temp!=NULL)
     {
      count++;
      temp=temp->next;
     }
     count/=2;
     while(count)
     {
      middle=middle->next;
      count--;
     }
     return middle;
    }
};