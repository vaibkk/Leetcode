class Solution {
public:
    bool isPalindrome(ListNode* head) {

    ListNode *slow=head,*fast=head,*firsthalf=head,*secondhalf;
    while(fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
        secondhalf=slow;

    
    ListNode *current,*prev,*nextnode;
    current=secondhalf;
    prev=NULL;
    while(current!=NULL)
    {
        nextnode=current->next;
        current->next=prev;
        prev=current;
        current =nextnode;
    }
    secondhalf=prev;
    while(secondhalf!=NULL)
    {
        if(firsthalf->val != secondhalf->val)
            return false;
        firsthalf=firsthalf->next;
        secondhalf=secondhalf->next;
    }
    return true;
}
};