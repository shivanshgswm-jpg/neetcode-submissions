class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n= nums.size();
        vector<vector<int>> vec;
        map<vector<int>,int> mpp;
        sort(nums.begin(), nums.end());
        for(int i=0;i<n;i++)
        {
            int start=i+1;
            int end=n-1;
            while(start<end)
            {
                if(nums[start]+nums[end]==-1*nums[i])
                {
                    vector<int> temp;
                    temp.push_back(nums[start]);
                    temp.push_back(nums[i]);
                    temp.push_back(nums[end]);
                    sort(temp.begin(), temp.end());
                    mpp[temp]++;
                    vec.push_back(temp);
                    start++;
                }
                else if(nums[start]+nums[end]<-1*nums[i])
                start++;
                else
                end--;
            }
        }
        vector<vector<int>> vec1;
        for(auto it: mpp)
        {
            vec1.push_back(it.first);
        }
        return vec1;
    }
};
