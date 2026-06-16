//Leetcode problem- remove-nth-node-from-end-of-list
//https://leetcode.com/problems/remove-nth-node-from-end-of-list/
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
        if(head==NULL) return head;
        if(head->next==NULL && n==1) return NULL;
        ListNode* fast=head;
        ListNode* temp=head;
        ListNode* slow=head;
        int cnt=0;
        while(fast!=NULL && cnt<n){
            fast=fast->next;
            cnt++;
        }
        if(fast==NULL) {
            ListNode* temp = head;
head = head->next;
delete temp;
return head;
        }
      while(fast!=NULL && fast->next!=NULL ){
           fast=fast->next;
           slow=slow->next;
      }
      ListNode* todelete=slow->next;
      if( slow && todelete ){slow->next=todelete->next;
      delete(todelete);
      }
      return  head;
    }
};