class Solution {
public:
    int maxArea(vector<int>& vec) 
    {
        int n=vec.size();
        int start=0;
        int end=n-1;
        int area=0;
        while(start<end)
        {
            int temp=min(vec[start], vec[end])*(end-start);
            if(area<temp)
            {
                area=temp;
                if(vec[start]<vec[end])
                start++;
                else
                end--;
            }
            else
            {
                if(vec[start]<vec[end])
                start++;
                else
                end--;
            }
        }
        return area;
    }
};
