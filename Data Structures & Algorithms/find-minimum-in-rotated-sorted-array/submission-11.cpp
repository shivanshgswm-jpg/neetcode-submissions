class Solution {
public:
    int findMin(vector<int> &nums) {
        int n=nums.size();
        int start=0;
        int end=n-1;
        int ans=1001;
        while(start<=end)
        {
            int mid=(start+end)/2;
            if(nums[mid]<ans)
            ans=nums[mid];
            if(nums[start]<=nums[mid] && nums[mid]>=nums[end])
            start=mid+1;
            else end=mid-1;
        }
        return ans;
    }
};
