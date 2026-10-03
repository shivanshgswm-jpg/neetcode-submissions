class Solution {
public:
    int search(vector<int>& nums, int target) 
    {
        int x;
        int n=nums.size();
        int start=0;
        int end=n-1;
        int ans=0;
        while(start<=end)
        {
            int mid=(start+end)/2;
            if(nums[mid]<nums[ans])
            ans=mid;
            if(nums[start]<=nums[mid] && nums[mid]>=nums[end])
            start=mid+1;
            else end=mid-1;
        }
        vector<int> vec;
        for(int i=ans;i<n;i++)
        {
            vec.push_back(nums[i]);
        }
        if(ans!=0)
        {
            for(int i=0;i<ans;i++)
            {
                vec.push_back(nums[i]);
            }
        }
        int i=0;
        int j=n-1;
        int m;
        int y;
        int t=0;
        while(i<=j)
        {
            m=(i+j)/2;
            if(vec[m]<target)
            i=m+1;
            else if(vec[m]>target)
            j=m-1;
            else
            {
                y=m;
                t++;
                break;
            }
        }
        if(t==0)
        return -1;
        else
        return (ans+y)%n;
    }
    
};
