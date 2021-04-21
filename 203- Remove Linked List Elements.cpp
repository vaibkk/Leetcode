class Solution 
{
public:
    ListNode* removeElements(ListNode* head, int val) {
    ListNode *node, *temp = new ListNode(0);
    temp->next = head;
    node = temp;
    while (node && node->next) 
    {
        if (node->next->val == val) 
        {
            ListNode *tmp = node->next;
            node->next = node->next->next;
            delete tmp;
        } 
        else 
        {
            node = node->next;
        }
    }
    return temp->next;
    }
};