class Solution {
public:
    bool isPalindrome(string s) {
        string str;
        int n=s.length();
        int m=0;
        for(int i=0;i<n;i++)
        {
            if(isalnum(s[i]))
            {
                m++;
                str.push_back(s[i]);
            }
        }
        for(int i=0;i<m;i++)
        {
            if(str[i]>='A' && str[i]<='Z')
            {
                str[i]=str[i] + ' ';
            }
        }
        int start=0;
        int end=m-1;
        int x=0;
        while(start<end)
        {
            if(str[start]!=str[end])
            {
                x++;
                break;
            }
            else
            {
                start++;
                end--;
            }
        }
        if(x!=0)
        return 0;
        else
        return 1;
    }
};
