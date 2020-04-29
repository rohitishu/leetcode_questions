class Solution {
public:
    bool backspaceCompare(string S, string T) {
       stack<char> s1;
        stack<char> s2;
        for(auto x:S)
        {
            if(x!='#')
                s1.push(x);
            else if(!s1.empty() && x=='#')
                s1.pop();
        }
         for(auto x:T)
        {
            if(x!='#')
                s2.push(x);
            else if(!s2.empty() && x=='#')
                s2.pop();
        }
        
        if(s1==s2)
            return true;
        return false;
    }
};
