class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *addition=new ListNode(0), *p=addition;
          
        int carry=0;
        while(l1!=NULL || l2!=NULL ||carry)
        {
            int x =(l1!=NULL)?l1->val:0;
            int y =(l2!=NULL)?l2->val:0;
            int sum=carry+x+y;
            p->next=new ListNode(sum%10);
            carry=sum/10;
            p=p->next;
            if(l1!=NULL)
                l1=l1->next;
            if(l2!=NULL)
                l2=l2->next;
        }
        return addition->next;
    }
};