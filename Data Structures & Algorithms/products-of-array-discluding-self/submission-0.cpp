class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) 
    {
        int n=nums.size();
        vector<int> vec;
        int product=1;
        for(int i=0;i<n;i++)
        {
            product= product * nums[i];
        }
        int a;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==0)
            {
                int p=1;
                for(int j=0;j<n;j++)
                {
                    if(j==i)
                    continue;
                    else
                    p=p*nums[j];
                }
                vec.push_back(p);
            }
            else
            {
                a=product/nums[i];
                vec.push_back(a);
            }
            

        }
        return vec;
    }
};
