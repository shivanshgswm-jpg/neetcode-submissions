class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs)
    {
        vector<map<char,int>> vec_map;
        int n=strs.size();
        for(int i=0;i<n;i++)
        {
           int m=strs[i].size();
           map<char,int> mpp;
           for(int j=0;j<m;j++)
           {
            mpp[strs[i][j]]++;
           }
           vec_map.push_back(mpp);
        }
        vector<vector<string>> vec;
        int count=0;
        for(int i=0;i<n;i++)
        {
            vector<string> temp;
            for(int j=i;j<n;j++)
            {
                if(vec_map.at(i)==vec_map.at(j))
                {
                    count++;
                    temp.push_back(strs[j]);
                    rotate(vec_map.begin()+count-1,vec_map.begin()+j,vec_map.begin()+j+1);
                    rotate(strs.begin()+count-1,strs.begin()+j,strs.begin()+j+1);
                }
            }
            vec.push_back(temp);
            i=count-1;
        }
        return vec;
        
    }
};
