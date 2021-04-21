class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        bool result=false;
        if(head==NULL || head->next==NULL)
        {
            result=false;
        }
        ListNode *slow=head;
        ListNode *fast=head;
        while(fast!=NULL && fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
            if(fast==slow)
            {
                result=true;
                break;
            }

            
        }
        
        if(result==false)
            return nullptr;
        if(result==true)
        {
            
            slow=head;
            while(slow!=fast)
            {  
               slow=slow->next;  
               fast=fast->next;
            }
        }
        return fast;
    }
};