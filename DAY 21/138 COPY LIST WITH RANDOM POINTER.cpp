/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
     int done=0;
     map<Node*,Node*>mp;
     Node*temp=head,*prev,*head1,*temp2;
     while(temp!=NULL)
     {
      Node* temp1=new Node(temp->val);
      mp[temp]=temp1;
      if(done==0)
      {
       prev=temp1;
       head1=temp1;
       done=1;
      }
      else
      {
       prev->next=temp1;
       prev=prev->next;
      }
      temp=temp->next;
     }
     temp2=head1;
     temp=head;
     while(temp!=NULL)
     {
      temp2->random=mp[temp->random];
      temp=temp->next;
      temp2=temp2->next;
     }
     return head1;
    }
};