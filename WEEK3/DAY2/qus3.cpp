//Leetcode problem- palindrome-linked-list
//https://leetcode.com/problems/palindrome-linked-list/
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
  ListNode* reverse(ListNode*  head2){
    ListNode* curr=head2;
    ListNode* back=NULL;
    ListNode* forward=head2;
    while(curr!=NULL){
        forward=curr->next;
        curr->next=back;
        back=curr;
        curr=forward;
    }
  return back;
  }
    bool isPalindrome(ListNode* head) {
        if(head==NULL || head->next==NULL) return true;
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=NULL && fast->next!=NULL){
            fast=fast->next;
            if(fast!=NULL && fast->next!=NULL){
                fast=fast->next;
                slow=slow->next;
            }
        }
         ListNode* newhead=slow->next;
         slow->next=NULL;
         ListNode* head2=reverse(newhead);
         ListNode* head1=head;
         while(head2!=NULL && head1!=NULL ){
            if(head1->val!=head2->val) return false;
            head2=head2->next;
            head1=head1->next;
         }
         return true;
    }
};