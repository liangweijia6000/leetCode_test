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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if (head == NULL)return head;
		if (head->next == NULL)return head;
        if (k == 1)return head;
		vector<ListNode*> nodeVec(k);
		ListNode *pRes = NULL;
		ListNode *pLastNode = NULL;
		int count = 1;
		bool first = false;

		do
		{
			if (count == k)
			{
				if (pLastNode)
				{
					pLastNode->next = head;
				}
				pLastNode = nodeVec[0];
				nodeVec[count - 1] = head;
				head = head->next;
				if (!first)
				{
					first = true;
					pRes = nodeVec[count - 1];
				}
				for (; count > 1; count--)
				{
					nodeVec[count - 1]->next = nodeVec[count - 2];
				}
				nodeVec[0]->next = head;				
			}
			else if (head->next == NULL)
			{
				if (!first)
				{
					pRes = nodeVec[0];
				}
				head = head->next;
			}
			else
			{
				nodeVec[count - 1] = head;
				count++;
				head = head->next;
			}
		} while (head != NULL);
		return pRes;
    }
};
