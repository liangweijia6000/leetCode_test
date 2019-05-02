/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */


class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *firstNode = NULL;
        ListNode *previousNode = NULL;
        if(l1==NULL||l2==NULL)return firstNode;
        bool carryTag = false;
        while(l1 != NULL || l2!=NULL || carryTag == true)
        {
            int l1value = (l1==NULL)?0:l1->val;
            int l2value = (l2==NULL)?0:l2->val;
            int value = l1value + l2value;
            if(carryTag) {value++;carryTag = false;}
            if(value >= 10)
            {
                carryTag = true;
                value = value%10;
            }
            ListNode* pNode = new ListNode(value);
            if(previousNode != NULL)
            {
                previousNode->next = pNode;
            }else
            {
                firstNode = pNode;
            }
            previousNode = pNode;
            if(l1!=NULL)l1 = l1->next;
            if(l2!=NULL)l2 = l2->next;
        }
        return firstNode;
    }
};
