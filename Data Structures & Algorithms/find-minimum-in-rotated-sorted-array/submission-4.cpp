class Solution {
public:
    int findMin(vector<int> &nums) {
        map<int,int> mpp;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            mpp[nums[i]]++;
        }    
        return mpp.begin()-> first;
    }
};
