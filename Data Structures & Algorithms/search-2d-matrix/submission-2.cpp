class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) 
    {
        vector<int> vec;
        int m=matrix[0].size();
        int n=matrix.size();
        int start=0;
        int end=m*n-1;
        int mid;
        int x,y;
        while(start<=end)
        {
            mid=(start+end)/2;
            x=mid%m;
            y=mid/m;

            if(matrix[y][x]>target)
            end=mid-1;
            else if(matrix[y][x]<target)
            start=mid+1;
            else
            return 1;
        }
        return 0;
    }
};
