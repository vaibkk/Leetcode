class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
    ListNode *node, *result=new ListNode(0);
    result->next=head;
    node=result;
    while (node && node->next && node->next->next) 
    {
        if (node->next->val == node->next->next->val) 
        {
            while (node->next && node->next->next && node->next->val == node->next->next->val) 
            {
                ListNode *tmp=node->next;
                node->next=node->next->next;
                delete tmp;
            }
            ListNode *tmp=node->next;
            node->next=node->next->next;
            delete tmp;
        } 
        else 
        {
            node=node->next;
        }
    }
    return result->next;
    }
};