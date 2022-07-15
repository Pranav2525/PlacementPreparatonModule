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
    ListNode* reverseList(ListNode* head) {
     ListNode *start,*prev;
     int temp=0,i;
     start=head;
     vector<int>store;
     prev=start;
     while(prev!=NULL)
     {
      store.push_back(prev->val);
      prev=prev->next;
      temp++;
     }
     while(start!=NULL)
     {
      start->val=store[temp-1];
      start=start->next;
      temp--;
     }
     return head;
    }
};