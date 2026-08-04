class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
            int n= nums.size();
            vector<int> newnums;
            for(int i=0;i<n;i++)
            {
                newnums.push_back(nums[i]);
            }
            sort(newnums.begin(), newnums.end());
            int start=0;
            int end=n-1;
            while(start<end)
            {
                if(newnums[start]+newnums[end]==target)
                break;
                else if(newnums[start]+newnums[end]>target)
                end--;
                else
                start++;
            }
            int p=newnums[start];
            int q=newnums[end];
            int a,b;
            for(int i=0;i<n;i++)
            {
                if(nums[i]==p)
                {
                    a=i;
                    break;
                }
                
            }
            for(int i=0;i<n;i++)
            {
                if(nums[i]==q && i!=a)
                b=i;
            }
            vector<int> vec(2);
            vec[0]=min(a,b);
            vec[1]=max(a,b);
            return vec;
    }
};
