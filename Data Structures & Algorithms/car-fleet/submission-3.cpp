class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n=position.size();
        int fleet=n;
        vector<int> indices;
        for(int i=0;i<n;i++)
        {
            indices.push_back(i);
        }
        stack<int> s;
        sort(indices.begin(), indices.end(),[&](int i,int j){
            return position[i]<position[j];
        });
        int out=indices[n-1];
        for(int i=0;i<n-1;i++)
        {
            s.push(indices[i]);
        }


        for(int i=0;i<n-1;i++)
        {
            if(((double)(target-position[out])/speed[out]) >= ((double)(target-position[s.top()])/speed[s.top()]))
            {
                s.pop();
                fleet--;
            }
            else
            {
                out=s.top();
                s.pop();
            }
        }
        return fleet;
        
    }
};
