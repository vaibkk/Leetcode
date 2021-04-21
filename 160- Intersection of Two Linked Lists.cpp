class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        set<ListNode*>value;

        while(headA!=NULL)
        {
            value.insert(headA);
            headA=headA->next;
        }
        while(headB!=NULL)
        {
            if(value.count(headB))
            {
                return headB;
                break;
            }
            headB=headB->next;
        }
        
return NULL;
        
        
    }
};