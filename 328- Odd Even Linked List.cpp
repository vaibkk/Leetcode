class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        int count=0;
        ListNode *latest= new ListNode(0), *p=latest , *p1=head;
        while(head!=NULL)
        {
            count++;
            if(count&1)
            {
                p->next=new ListNode(head->val);
                head=head->next;
                p=p->next;
            }
            else
            {
                head=head->next;
            }

        }
        count=0;
        while(p1!=NULL)
        {
            count++;
            if(count%2==0)
            {
                p->next=new ListNode(p1->val);
                p1=p1->next;
                p=p->next;
            }
            else
            {
                p1=p1->next;
            }

        }
        
return latest->next;
    }
};