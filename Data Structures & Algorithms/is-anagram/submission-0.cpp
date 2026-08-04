class Solution {
public:
    bool isAnagram(string s, string t) 
    {
        int sn=s.length();
        int tn=t.length();
        if(sn!=tn) return false;
        else
        {
            map<char,int> s1;
            map<char,int> s2;
            for(int i=0;i<sn;i++)
            {
                s1[s[i]]++;
                s2[t[i]]++;
            }
            if(s1==s2)
            return true;
            else
            return false;
        }
    }
};
