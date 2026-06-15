//Leetcode problem - linked-list-cycle
//https://leetcode.com/problems/linked-list-cycle/
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
    bool hasCycle(ListNode *head) {
        ListNode* temp=head;
        if(head==NULL) return false;
        if(head->next==head) return true;
        if(head->next==NULL) return false;
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next;
            if(fast->next)fast=fast->next;
            else return false;
            if(slow==fast) return true;
        }
        return false;
    }
};