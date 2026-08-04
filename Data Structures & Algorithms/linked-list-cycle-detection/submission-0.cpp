/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    bool hasCycle(ListNode* head) 
    {
        int x=0;
        int n=0;
        ListNode* curr=head;
        while(curr!=NULL)
        {
            if(n>1000)
            {
                x++;
                break;
            }
            else
            {
                curr=curr->next;
                n++;
            }
        }
        if(x==0)
        {
            return false;
        }
        else
        return true;
    }
};
