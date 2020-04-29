class Solution {
public:
    int lastStoneWeight(vector<int>& v) {
        sort(v.begin(),v.end());
        if(v.size()==2)
        {
            return v[1]-v[0];
        }
        while(v.size()>=2)
        {
           int len=v.size();
            if(v[len-1]!=v[len-2])
            {
                int diff=v[len-1]-v[len-2];
               // cout<<v[len-1]<<" "<<v[len-2]<<" "<<diff<<endl;
                v.pop_back();
                v.pop_back();
                v.push_back(diff);
                sort(v.begin(),v.end());
            }
            if(v[len-1]==v[len-2])
           { v.pop_back();
            v.pop_back();}
        }
        if(v.size()>0)
            return v[0];
        return 0;
    }
};
