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
    ListNode* reverseList(ListNode* head) {
        vector<int> vec;
        ListNode* temp=head;
        int n=0;
        while(temp!=NULL)
        {
            vec.push_back(temp->val);
            temp=temp->next;
            n++;
        }
        temp=head;
        int i=n-1;
        while(temp!=NULL)
        {
            temp->val=vec[i];
            i--;
            temp=temp->next;
        }
        return head;
    }
};
