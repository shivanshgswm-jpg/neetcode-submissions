class Solution {
public:
    bool hasDuplicate(vector<int>& nums) 
    {
        unordered_map<int,int> mpp;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            mpp[nums[i]]++;
        }
        int x=0;
        for(auto it: mpp)
        {
            if(it.second>1)
            {
                x++;
                break;
            }
            
        }
        if(x==0)
        return false;
        else
        return true;
    }
};