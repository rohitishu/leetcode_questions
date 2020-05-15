// maximum square problem is same as maximu rectangle problem the onle difference here is the width (taking square) 
//here we calcualte length=min(widht,height)
class Solution {
public:
    int maximalSquare(vector<vector<char>>& v) {
     if(v.size()==0)
     return 0;
     int m=v[0].size(),area=0;
     vector<int> ans(m,0);
     for(int i=0;i<v.size();i++)
     {
     stack<int> s;
     for(int j=0;j<m;j++)
     {
     ans[j]=(v[i][j]=='0')?0:ans[j]+1;
     }
     s.push(0);
     int k;
     for(k=0;k<ans.size();k++)
     {
     while(!s.empty() and v[i]<v[s.top()])
     {
     int d=v[s.top()];
     s.pop();
     int height=d
     int width=i-1-s.top();
     int len=min(height,width);
     area=max(area,len*len);
     }
     s.push(k);
     }
     while(!s.empty())
     {
      int d=v[s.top()];
     s.pop();
     int height=d
     int width=i-1-s.top();
     int len=min(height,width);
     area=max(area,len*len);
     }
     
     }
     return area;
    }
};
