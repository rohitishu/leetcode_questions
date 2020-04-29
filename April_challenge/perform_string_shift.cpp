class Solution {
public:
    string stringShift(string s, vector<vector<int>>& shift) {
        
        int n=s.size();
        for(int i=0;i<shift.size();i++)
        {   string s1=s,s2=s;
            int d=shift[i][1];
            if(shift[i][0]==0)
            {
                
                s =s1.erase(0,d)+s2.erase(d,n);
            }
            else
            {
              s=s1.erase(0,n-d)+s2.erase(n-d,n);
            }
        }
        return s;
    }
};
