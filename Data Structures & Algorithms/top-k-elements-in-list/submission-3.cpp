class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) 
    {
        unordered_map<int,int> mpp;
        int n1=nums.size();
        for(int i=0;i<n1;i++)
        {
            mpp[nums[i]]++;
        }
        int n=0;
        for(auto it: mpp)
        {
            n++;
        }
        vector<int> vec1;
        vector<int> vec2;
        for(auto it: mpp)
        {
            vec1.push_back(it.first);
            vec2.push_back(it.second);
        }
        vector<int> vec3;
        for(int i=0;i<n;i++)
        {
            vec3.push_back(i);
        }
        sort(vec3.begin(), vec3.end(), [&](int i, int j){
            return vec2[i]>vec2[j];
        });
        int i=0;
        vector<int> ans;
        for(int i=0;i<k;i++)
        {
            ans.push_back(vec1[vec3[i]]);
        }
        return ans;
    }
};
