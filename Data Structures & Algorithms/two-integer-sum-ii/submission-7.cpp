class Solution {
public:
    vector<int> twoSum(vector<int>& vec, int target) 
    {
        int start=0;
        int end=vec.size()-1;
        while(start<end)
        {
            if(vec[start]+vec[end]==target)
            {
                break;
            }
            else if(vec[start]+vec[end]<target)
            start++;
            else
            end--;
        }
        vector<int> ans;
        ans.push_back(start+1);
        ans.push_back(end+1);
        return ans;
    }
};
