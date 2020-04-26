class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> m;
        for(auto i:strs)
        {
            string s=i;
            sort(s.begin(),s.end());
            m[s].push_back(i);
        }
        vector<vector<string>> v;
        for(auto it=m.begin();it!=m.end();it++)
            v.push_back(it->second);
        return v;
    }
};
