class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<string> s;
        int n=tokens.size();
        int ans=0;
        for(int i=0;i<n;i++)
        {
            s.push(tokens[i]);
            if(s.top()=="+" ||s.top()=="-" || s.top()=="*" || s.top()=="/" )
            {
                string ch=s.top();
                s.pop();
                int a=stoi(s.top());
                s.pop();
                int b=stoi(s.top());
                s.pop();
                if(ch=="+") 
                {
                    s.push(to_string(a+b));
                    ans=ans+a+b;
                }
                if(ch=="-")
                {
                    s.push(to_string(b-a));
                    ans=ans+b-a;
                }
                if(ch=="*") 
                {
                    s.push(to_string(a*b));
                    ans=ans+a*b;
                }
                if(ch=="/")
                {
                    s.push(to_string(b/a));
                    ans=ans+b/a ;
                }
            }
            else
            continue;
        }
        return stoi(s.top());
    }
};
