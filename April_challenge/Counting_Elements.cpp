class Solution {
public:
    int countElements(vector<int>& arr) {
      unordered_map<int,int> m;
        for(auto i:arr)
            m[i]++;
        int count=0;
        for(auto it=m.begin();it!=m.end();it++)
        {
            int x=it->first;
            if(m.find(x+1)!=m.end())
            {
                    count+=it->second;
               
            }
        }
        return count;
    }
};
