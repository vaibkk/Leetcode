class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
       ListNode *latest=new ListNode(0),*p=latest;
        
        while(l1!=NULL || l2!=NULL)
       {    
            int x=INT_MAX;
            int y=INT_MAX;
            if(l1!=NULL)
                x=l1->val;
            if(l2!=NULL)
                y=l2->val;
            
            if(x<y)
            {
                p->next=new ListNode(x);
                if(l1!=NULL)
                {  
                   
                   l1=l1->next;
                }
                 p=p->next;
                    
            }
            else
            {
                p->next=new ListNode(y);
                if(l2!=NULL)
                {
                  
                   l2=l2->next;
                }
                 p=p->next;
            }
            
        }
        return latest->next;
    }
};