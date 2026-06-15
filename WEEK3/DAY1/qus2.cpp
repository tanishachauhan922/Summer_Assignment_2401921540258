//Leetcode problem - reverse-linked-list
//https://leetcode.com/problems/reverse-linked-list/
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
        if(head==NULL || head->next==NULL) return head;
        ListNode* curr=head;
        ListNode* forward=head;
        ListNode* backward=NULL;
        while(curr!=NULL && forward!=NULL){
            forward=curr->next;
            curr->next=backward;
            backward=curr;
            curr=forward;
        }
        return backward;
    }
};