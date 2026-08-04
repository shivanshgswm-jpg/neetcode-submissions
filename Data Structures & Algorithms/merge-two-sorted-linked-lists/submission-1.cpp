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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        vector<int> vec;
        ListNode* curr= list1;
        while(curr!=NULL)
        {
            vec.push_back(curr->val);
            curr=curr->next;
        }
        curr= list2;
        while(curr!=NULL)
        {
            vec.push_back(curr->val);
            curr=curr->next;
        }
        sort(vec.begin(), vec.end());
        int n=vec.size();
        if(n==0)
        return NULL;
        else
        {
            ListNode* list3=new ListNode(vec[0],nullptr);
            curr=list3;
            for(int i=1;i<n;i++)
            {
                ListNode* newnode= new ListNode(vec[i],nullptr);
                curr->next=newnode;
                curr=curr->next;
            }
            return list3;
        }
        
    }
};
