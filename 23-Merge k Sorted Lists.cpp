class Solution 
{
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) 
    {
        int size=lists.size();
        if(size==0)
            return NULL;
        map<int,int>result;
        ListNode *answer=new ListNode(0),*p=answer;;
        for(int i =0;i<size;i++)
        {
            ListNode *head=lists[i];
            while(head!=NULL)
            {
                int val=head->val;
                result[val]=result[val]+1;
                head=head->next;
            }
        }
        for(auto i=result.begin();i!=result.end();i++)
        {
            while(i->second>0)
            {
                p->next=new ListNode(i->first);
                p=p->next;
                i->second--;
            }
        }
        
        return answer->next;
    }
};