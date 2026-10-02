class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) 
    {
        int n=piles.size();
        int p=0;
        for(int i=0;i<n;i++)
        {
            if(piles[i]>piles[p])
            p=i;
            else
            continue;
        }
        int m=piles[p];
        int count=m;
        int ans=m;

        int start=1;
        int end=m;
        int mid;
        while(start<=end) 
        {
            mid=(start+end)/2;
            long long hours=0;
            for(int j=0;j<n;j++)
            {
                int t;
                if((piles[j])%mid!=0)
                {
                    t=(piles[j])/mid + 1;
                }
                else
                {
                    t=(piles[j])/mid;
                }
                hours=hours+t;
            }
            if(hours<=h)
            {
                end=mid-1;
                ans=mid;
            }
            else if(hours>h)
            start=mid+1;
        }
        return ans;
    }
};
