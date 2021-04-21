class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *prev=NULL,*curr=head,*next;
        while(curr!=NULL)
        {
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }
};