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
        if(head->next==NULL){
            return NULL;
        }
        ListNode* curr=head;
        ListNode* prev=NULL;
        int count=1;
        while(curr!=NULL){
            curr = curr->next;
            count++;
        }
        ListNode* temp = head;
        int position = 1;
        while(position<=count-n-1){
            prev=temp;
            temp=temp->next;
            position++;
        }
        if(temp==head){
        // prev->next = temp->next;
            head=head->next;
        }
        else if(prev) {
        prev->next = temp->next;
        }
        delete temp;
        return head;
    }
};